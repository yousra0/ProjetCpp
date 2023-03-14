#include "mainwindow.h"
#include "visite.h"
#include "ui_mainwindow.h"
#include<QMessageBox>
#include <QApplication>
#include<QIntValidator>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->le_id->setValidator( new QIntValidator(0, 9999999, this));
    ui->le_dateVisite->setValidator( new QIntValidator(0, 9999999, this));
    ui->le_kilometrageVisite->setValidator( new QIntValidator(0, 9999999, this));
    ui->le_prixVisite->setValidator( new QIntValidator(0, 9999999, this));
    ui->le_resultatVisite->setValidator( new QIntValidator(0, 9999999, this));


    ui->tab_visite->setModel(v.afficher());



}

MainWindow::~MainWindow()
{
    delete ui;
}



void MainWindow::on_pb_ajouter_clicked()
{
    //Récupération des informations saisies dans les 5 champs
       int id=ui->le_id->text().toInt();
       int dateVisite=ui->le_dateVisite->text().toInt();
       int kilometrageVisite=ui->le_kilometrageVisite->text().toInt();
       int prixVisite=ui->le_prixVisite->text().toInt();
       QString resultatVisite=ui->le_resultatVisite->text();


       //instancier l'objet de la classe vehicule
       Visite V(id,dateVisite,kilometrageVisite,prixVisite,resultatVisite);

    //insérer l'objet piste instancié dans la table piste
    //et récupérer la valeur de retour de query.exec()
    bool test=V.ajouter();

    //si la requete executée => QMessageBox::information
    if(test)
    {
        QMessageBox::information(nullptr, QObject::tr("OK"),
                     QObject::tr("Ajout effectué\n"
                                 "Click Cancel to exit"), QMessageBox::Cancel);

        //Actualiser le tableau apres l'ajout
        ui->tab_visite->setModel(v.afficher());
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

        Visite v1;
        v1.setid(ui->id_supp->text().toInt());

        bool existe = v1.rechercher(v1.getid()); // Rechercher le véhicule

        if (existe) {
            // Demander une confirmation avant la suppression
            QMessageBox::StandardButton confirmation = QMessageBox::question(this, "Confirmation", "Voulez-vous vraiment supprimer ce véhicule ?", QMessageBox::Yes | QMessageBox::No);
            if (confirmation == QMessageBox::Yes) {
                bool test = v1.supprimer(v1.getid()); // Supprimer le véhicule
                if (test) {
                    QMessageBox::information(this, "Succès", "Suppression avec succès.");
                    ui->tab_visite->setModel(v.afficher());
                } else {
                    QMessageBox::warning(this, "Echec", "Echec de suppression.");
                }
            }
        } else {
            QMessageBox::warning(this, "Erreur", "Le véhicule n'existe pas."); // Alerter l'utilisateur que le véhicule n'a pas été trouvé
        }


}

void MainWindow::on_pb_modifier_clicked()
{

        int id=ui->le_id->text().toInt();
        int dateVisite=ui->le_dateVisite->text().toInt();
        int kilometrageVisite=ui->le_kilometrageVisite->text().toInt();
        int prixVisite=ui->le_prixVisite->text().toInt();
        QString resultatVisite=ui->le_resultatVisite->text();

    Visite V(id,dateVisite,kilometrageVisite,prixVisite,resultatVisite);
    bool test=V.modifier(id);
    if(test){
    ui->tab_visite->setModel(V.afficher());}
    // Vérifier que l'identifiant saisi est valide
            if (id <= 0)
            {
                QMessageBox::warning(this, "Erreur", "Veuillez entrer une valeur numérique valide pour l'identifiant.");
                return;
            }
            // Vérifier que les champs obligatoires sont remplis
                if (dateVisite <=0|| kilometrageVisite <=0 ||prixVisite <=0|| resultatVisite.isEmpty() )
                {
                    QMessageBox::warning(this, "Erreur", "Veuillez remplir tous les champs obligatoires.");
                    return;
                }

            // Vérifier que l'identifiant existe dans la table
            QSqlQuery query;
            query.prepare("SELECT * FROM reservation WHERE id = :id");
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

            query.prepare("UPDATE reservation SET dateVisite = :dateVisite, kilometrageVisite = :kilometrageVisite, prixVisite = :prixVisite ,resultatVisite = :resultatVisite,  WHERE id = :id");
            query.bindValue(":id", id);
            query.bindValue(":dateVisite", dateVisite);
            query.bindValue(":kilometrageVisite", kilometrageVisite);
            query.bindValue(":prixVisite", prixVisite);
            query.bindValue(":resultatVisite", resultatVisite);



            if (query.exec())
            {
                QMessageBox::information(nullptr, QObject::tr("OK"),
                             QObject::tr("Modification effectuée\n"
                                         "Click Cancel to exit"), QMessageBox::Cancel);

                //Actualiser le tableau après la modification
                ui->tab_visite->setModel(V.afficher());
            }
            else
            {
                QMessageBox::critical(nullptr, QObject::tr("NOT OK"),
                             QObject::tr("Modification non effectuée\n"
                                         "Click Cancel to exit"), QMessageBox::Cancel);
            }
    }




