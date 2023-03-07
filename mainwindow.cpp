#include "mainwindow.h"
#include "vehicule.h"
#include "ui_mainwindow.h"
#include<QMessageBox>
#include <QApplication>
//#include<QIntValidator>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->leid->setValidator( new QIntValidator(0, 9999999, this));
    ui->kilometrage->setValidator( new QIntValidator(0, 9999999, this));
    ui->NumS->setValidator( new QIntValidator(0, 9999999, this));

    ui->tabvehicule->setModel(v.afficher());



}

MainWindow::~MainWindow()
{
    delete ui;
}



void MainWindow::on_pb_ajouter_clicked()
{
    //Récupération des informations saisies dans les 5 champs
       int id=ui->leid->text().toInt();
       int kilometrage=ui->kilometrage->text().toInt();
       int NumSerie=ui->NumS->text().toInt();
       QString nom=ui->lenom->text();
       QString prenom=ui->leprenom->text();
       QString marque=ui->lamarque->text();
       QString modele=ui->lemodele->text();
       Vehicule V(id,kilometrage,NumSerie,prenom,nom,marque,modele);

    //insérer l'objet piste instancié dans la table piste
    //et récupérer la valeur de retour de query.exec()
    bool test=v.ajouter();

    //si la requete executée => QMessageBox::information
    if(test)
    {
        QMessageBox::information(nullptr, QObject::tr("OK"),
                     QObject::tr("Ajout effectué\n"
                                 "Click Cancel to exit"), QMessageBox::Cancel);

        //Actualiser le tableau apres l'ajout
        ui->tabvehicule->setModel(v.afficher());
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
    Vehicule v1;
    v1.setid(ui->id_supp->text().toInt());

    bool test=v1.supprimer(v1.getid());

    if(test)
    {
        QMessageBox::information(nullptr, QObject::tr("OK"),
                     QObject::tr("Suppression effectué\n"
                                 "Click Cancel to exit"), QMessageBox::Cancel);

        //Actualiser le tableau apres la suppression
        ui->tabvehicule->setModel(v.afficher());
    }
    //si la requete non exécuté => QMessageBox::critical
    else
    {
        QMessageBox::critical(nullptr, QObject::tr("NOT OK"),
                     QObject::tr("Suppression non effectué\n"
                                 "Click Cancel to exit"), QMessageBox::Cancel);
    }
}
