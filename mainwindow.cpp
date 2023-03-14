#include "mainwindow.h"
#include "piste.h"
#include "ui_mainwindow.h"
#include<QMessageBox>
#include <QApplication>
#include<QIntValidator>
#include <QSettings>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    // Dans le constructeur de MainWindow
    ui->setupUi(this);

    //condition pour la valeur de l'id
    ui->le_id_2->setValidator(new QIntValidator(0, 9999999, this));
    ui->tab_piste->setModel(P.afficher());

    //maps
    QSettings settings(QSettings::IniFormat, QSettings::UserScope,
                       QCoreApplication::organizationName(), QCoreApplication::applicationName());

    ui->WebBrowser->dynamicCall("Navigate(const QString&)", "https://www.google.com/maps/place/ESPRIT/@36.9016729,10.1713215,15z");


}

MainWindow::~MainWindow()
{
    delete ui;
}



void MainWindow::on_pb_ajouter_clicked()
{
    //Récupération des informations saisies dans les 5 champs
    int id=ui->le_id_2->text().toInt();
    int numPiste=ui->le_numpiste_2->text().toInt();
    int longueur=ui->le_longueur_2->text().toInt();
    int largeur=ui->le_largeur_2->text().toInt();
    QString type=ui->le_type_2->text();

    //instancier un objet de la classe piste
    //en utilisant les informations saisies dans l'interface
    Piste P(id, numPiste, longueur, largeur, type);

    //insérer l'objet piste instancié dans la table piste
    //et récupérer la valeur de retour de query.exec()
    bool test=P.ajouter();

    //si la requete executée => QMessageBox::information
    if(test)
    {
        QMessageBox::information(nullptr, QObject::tr("OK"),
                     QObject::tr("Ajout effectué\n"
                                 "Click Cancel to exit"), QMessageBox::Cancel);

        //Actualiser le tableau apres l'ajout
        ui->tab_piste->setModel(P.afficher());
    }
    //si la requete non exécuté => QMessageBox::critical
    else
    {
        QMessageBox::critical(nullptr, QObject::tr("NOT OK"),
                     QObject::tr("Ajout non effectué\n"
                                 "Click Cancel to exit"), QMessageBox::Cancel);
    }

}

void MainWindow::on_pb_supprimer_clicked()
{
    // Récupérer l'identifiant de l'enregistrement à supprimer
    int id = ui->id_supp->text().toInt();

    if (id <= 0)
    {
        QMessageBox::warning(this, "Erreur", "Veuillez entrer une valeur numérique valide pour l'identifiant.");
        return; // Sortir de la fonction si l'identifiant est invalide
    }

    // Vérifier si l'identifiant existe dans la table
    QSqlQuery query;

    query.prepare("SELECT * FROM piste WHERE id = :id");
    query.bindValue(":id", id);

    if (!query.exec())
    {
        QMessageBox::critical(this, "Erreur", "Une erreur s'est produite lors de la vérification de l'identifiant.");
        return; // Sortir de la fonction en cas d'erreur de requête
    }
    if (!query.next())
    {
        QMessageBox::warning(this, "Attention", "L'identifiant à supprimer n'existe pas dans la table.");
        return; // Sortir de la fonction si l'identifiant n'existe pas dans la table
    }

    // Demander à l'utilisateur de confirmer la suppression
        QMessageBox::StandardButton confirmDelete = QMessageBox::question(this, "Confirmation",
            "Êtes-vous sûr de vouloir supprimer cet enregistrement ?",
            QMessageBox::Yes|QMessageBox::No);

        if (confirmDelete == QMessageBox::No) {
            return; // L'utilisateur a annulé la suppression, sortir de la fonction
        }

    Piste P1;
    P1.setid(ui->id_supp->text().toInt());

    bool test=P1.supprimer(P1.getid());

    if(test)
    {
        QMessageBox::information(nullptr, QObject::tr("OK"),
                     QObject::tr("Suppression effectué\n"
                                 "Click Cancel to exit"), QMessageBox::Cancel);

        //Actualiser le tableau apres la suppression
        ui->tab_piste->setModel(P.afficher());
    }
    //si la requete non exécuté => QMessageBox::critical
    else
    {
        QMessageBox::critical(nullptr, QObject::tr("NOT OK"),
                     QObject::tr("Suppression non effectué\n"
                                 "Click Cancel to exit"), QMessageBox::Cancel);
    }
}

void MainWindow::on_pb_modifier_clicked()
{
    //Récupération des informations saisies dans les 5 champs
    int id=ui->le_id_2->text().toInt();
    int numPiste=ui->le_numpiste_2->text().toInt();
    int longueur=ui->le_longueur_2->text().toInt();
    int largeur=ui->le_largeur_2->text().toInt();
    QString type=ui->le_type_2->text();

    // Vérifier que l'identifiant saisi est valide
    if (id <= 0)
    {
        QMessageBox::warning(this, "Erreur", "Veuillez entrer une valeur numérique valide pour l'identifiant.");
        return;
    }

    // Vérifier que les champs obligatoires sont remplis
    if (numPiste <= 0 || longueur <= 0 || largeur <= 0 || type.isEmpty())
    {
        QMessageBox::warning(this, "Erreur", "Veuillez remplir tous les champs obligatoires.");
        return;
    }

    // Vérifier que l'identifiant existe dans la table
    QSqlQuery query;
    query.prepare("SELECT * FROM piste WHERE id = :id");
    query.bindValue(":id", id);

    if (!query.exec())
    {
        QMessageBox::critical(this, "Erreur", "Une erreur s'est produite lors de la vérification de l'identifiant.");
        return;
    }
    if (!query.next())
    {
        QMessageBox::warning(this, "Attention", "L'identifiant à modifier n'existe pas dans la table.");
        return;
    }

    // Demander à l'utilisateur de confirmer la modification
    QMessageBox::StandardButton confirmUpdate = QMessageBox::question(this, "Confirmation",
        "Êtes-vous sûr de vouloir modifier cet enregistrement ?",
        QMessageBox::Yes|QMessageBox::No);

    if (confirmUpdate == QMessageBox::No) {
        return; // L'utilisateur a annulé la modification, sortir de la fonction
    }

    // Exécuter la requête SQL pour mettre à jour l'enregistrement
    query.prepare("UPDATE piste SET numPiste = :numPiste, longueur = :longueur, largeur = :largeur, type = :type WHERE id = :id");
    query.bindValue(":numPiste", numPiste);
    query.bindValue(":longueur", longueur);
    query.bindValue(":largeur", largeur);
    query.bindValue(":type", type);
    query.bindValue(":id", id);

    if (query.exec())
    {
        QMessageBox::information(nullptr, QObject::tr("OK"),
                     QObject::tr("Modification effectuée\n"
                                 "Click Cancel to exit"), QMessageBox::Cancel);

        //Actualiser le tableau après la modification
        ui->tab_piste->setModel(P.afficher());
    }
    else
    {
        QMessageBox::critical(nullptr, QObject::tr("NOT OK"),
                     QObject::tr("Modification non effectuée\n"
                                 "Click Cancel to exit"), QMessageBox::Cancel);
    }
}


/*void MainWindow::on_pb_rechercher_clicked()
{
    // Récupération de la valeur de recherche saisie
    //par l'utilisateur dans le champ de recherche
    QString valeur = ui->le_recherche->text();

    // Appel de la fonction de recherche de la classe
    //Piste en passant la valeur de recherche comme paramètre
    QSqlQueryModel *model = P.rechercher(valeur);

    // Affichage du modèle de tableau contenant les résultats
    //de la recherche dans le tableau de l'interface utilisateur
    ui->tab_piste->setModel(model);
}
*/

void MainWindow::on_pb_rechercher_clicked()
{
    // Récupérer la valeur de recherche et supprimer les espaces inutiles
    QString valeur = ui->le_recherche->text().trimmed();

    // Vérifier si la valeur de recherche est vide
    if (valeur.isEmpty())
    {
        // Afficher un message d'erreur
        QMessageBox::warning(this, "Recherche", "Veuillez saisir une valeur de recherche.");
        // Quitter la fonction sans exécuter la recherche
        return;
    }

    // Appeler la fonction de recherche dans la classe Piste et récupérer le modèle de résultats
    QSqlQueryModel *model = P.rechercher(valeur);

    // Vérifier si aucun résultat n'a été trouvé
    if (model->rowCount() == 0)
    {
        // Afficher un message d'information
        QMessageBox::information(this, "Recherche", "Aucun résultat trouvé.");
    }
    else
    {
        // Créer un message avec le nombre de résultats trouvés
        QString message = QString("%1 résultat(s) trouvé(s).").arg(model->rowCount());
        // Afficher un message d'information avec le nombre de résultats trouvés
        QMessageBox::information(this, "Recherche", message);
        // Définir le modèle de résultats dans la table
        ui->tab_piste->setModel(model);
        // Trier les résultats par ordre croissant de l'id
        ui->tab_piste->sortByColumn(0, Qt::AscendingOrder);
    }
}










