#include "mainwindow.h"
#include "equipement.h"
#include "ui_mainwindow.h"
#include<QMessageBox>
#include <QApplication>
#include<QIntValidator>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->leid->setValidator( new QIntValidator(0, 9999999, this));
    ui->dateaa->setValidator( new QIntValidator(0, 9999999, this));




    ui->tabequipement->setModel(E.afficher());



}

MainWindow::~MainWindow()
{
    delete ui;
}



void MainWindow::on_pb_ajouter_clicked()
{
    //Récupération des informations saisies dans les 3 champs
       int id=ui->leid->text().toInt();
       int dateA=ui->dateaa->text().toInt();
       QString nomE=ui->lenomE->text();
       QString statut=ui->lestatut->text();


       //instancier l'objet de la classe vehicule
       Equipement e(id,dateA,nomE,statut);

    //insérer l'objet piste instancié dans la table piste
    //et récupérer la valeur de retour de query.exec()
    bool test=e.ajouter();

    //si la requete executée => QMessageBox::information
    if(test)
    {
        QMessageBox::information(nullptr, QObject::tr("OK"),
                     QObject::tr("Ajout effectué\n"
                                 "Click Cancel to exit"), QMessageBox::Cancel);

        //Actualiser le tableau apres l'ajout
        ui->tabequipement->setModel(E.afficher());
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
    Equipement E1;
    E1.setid(ui->id_supp->text().toInt());

    bool test=E1.supprimer(E1.getid());

    if(test)
    {
        QMessageBox::information(nullptr, QObject::tr("OK"),
                     QObject::tr("Suppression effectué\n"
                                 "Click Cancel to exit"), QMessageBox::Cancel);

        //Actualiser le tableau apres la suppression
       ui->tabequipement->setModel(E1.afficher());
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

    int id=ui->leid->text().toInt();
    int dateA=ui->dateaa->text().toInt();
    QString nomE=ui->lenomE->text();
    QString statut=ui->lestatut->text();


    Equipement Eq(id,dateA,nomE,statut);
    bool test=Eq.modifier(id);
    ui->tabequipement->setModel(Eq.afficher());
 if(test){

    QMessageBox::information(nullptr,QObject::tr("OK"),
                             QObject::tr("modification effectué \n""Click Cancel to exit"),QMessageBox::Cancel);
}else{
     QMessageBox::information(nullptr,QObject::tr("Not oK"),
                              QObject::tr("modification non effectué \n""Click Cancel to exit"),QMessageBox::Cancel);


 }

}




