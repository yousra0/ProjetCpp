
#include "vehicule.h"
#include <QtSql/QSqlQuery>
#include <QtDebug>
#include <QObject>
#include<QVariant>
#include<QMessageBox>
#include <QApplication>

Vehicule::Vehicule()
{
id=0; kilometrage=0;NumSerie=0;
nom=" ";prenom=" ";marque=" ";modele=" ";
}

Vehicule::Vehicule(int id,int kilometrage,int NumSerie,QString nom,QString prenom,QString marque,QString modele)
{this->id=id; this->kilometrage=kilometrage; this->NumSerie=NumSerie; this->nom=nom; this->prenom=prenom; this->marque=marque; this->modele=modele;}
int Vehicule::getid(){return id;}
int Vehicule::getkilometrage(){return kilometrage;}
int Vehicule::getNumSerie(){return NumSerie;}
QString Vehicule::getnom(){return nom;}
QString Vehicule::getprenom(){return prenom;}
QString Vehicule::getmarque(){return marque;}
QString Vehicule::getmodele(){return modele;}
void Vehicule::setid(int id){this->id=id;}
void Vehicule::setkilometrage(int kilometrage){this->kilometrage=kilometrage;}
void Vehicule::setNumSerie(int NumSerie){this->NumSerie=NumSerie;}
void Vehicule::setnom(QString nom){this->nom=nom;}
void Vehicule::setprenom(QString prenom){this->prenom=prenom;}
void Vehicule::setmarque(QString marque){this->marque=marque;}
void Vehicule::setmodele(QString modele){this->modele=modele;}


bool Vehicule::ajouter()
{
    QSqlQuery query;
    query.prepare("INSERT INTO vehicule (id, kilometrage, numSerie, nom, prenom, marque, modele) "
                  "VALUES (:id, :km, :numSerie, :nom, :prenom, :marque, :modele)");
    query.bindValue(":id", id);
    query.bindValue(":km", kilometrage);
    query.bindValue(":numSerie", NumSerie);
    query.bindValue(":nom", nom);
    query.bindValue(":prenom", prenom);
    query.bindValue(":marque", marque);
    query.bindValue(":modele", modele);
    if(query.exec())
        return true;
    else
        return false;
}


QSqlQueryModel* Vehicule::afficher()
{
   QSqlQueryModel* model=new QSqlQueryModel();


         model->setQuery("SELECT* FROM vehicule");
         model->setHeaderData(0, Qt::Horizontal, QObject::tr("Identifiant"));
         model->setHeaderData(1, Qt::Horizontal, QObject::tr("Kilometrage"));
         model->setHeaderData(2, Qt::Horizontal, QObject::tr("NumSerie"));
         model->setHeaderData(3, Qt::Horizontal, QObject::tr("Nom"));
         model->setHeaderData(4, Qt::Horizontal, QObject::tr("Prenom"));
         model->setHeaderData(5, Qt::Horizontal, QObject::tr("Marque"));
         model->setHeaderData(6, Qt::Horizontal, QObject::tr("Modele"));

   return model;
   }
bool Vehicule::supprimer(int id)
{
    QSqlQuery query;
    query.prepare(" Delete from vehicule where id=:id");
    query.bindValue(0, id);

     return query.exec();
}





