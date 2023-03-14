#include "reservation.h"
#include<QSqlQuery>
#include<QtDebug>
#include<QMessageBox>
#include <QApplication>
#include<QObject>
Reservation::Reservation()
{
    id=0;
    nom="";
    prenom="";
    type_immatriculation="";
    numImmatriculation=0;

}

Reservation::Reservation(int id, QString nom, QString prenom, QString type_immatriculation, int numImmatriculation)
{
    this->id=id;
    this->nom=nom;
    this->prenom=prenom;
    this->type_immatriculation=type_immatriculation;
    this->numImmatriculation=numImmatriculation;
    /*this->Dat=Dat;*/
}

//Getters
int Reservation::getid(){return id;}
QString Reservation::getnom(){return nom;}
QString Reservation::getprenom(){return prenom;}
QString Reservation::gettype_immatriculation(){return type_immatriculation;}
int Reservation::getnumImmatriculation(){return numImmatriculation;}
/*QDate Reservation::getDat(){return Dat;}*/

//Setters
void Reservation::setid(int id){this->id=id;}
void Reservation::setnom(QString nom){this->nom=nom;}
void Reservation::setprenom(QString prenom){this->prenom=prenom;}
void Reservation::settype_immatriculation(QString type_immatriculation){this->type_immatriculation=type_immatriculation;}
void Reservation::setnumImmatriculation(int numImmatriculation){this->numImmatriculation=numImmatriculation;}
/*void Reservation::setDat(QDate Dat){this->Dat=Dat;}*/

bool Reservation::ajouter()
{
    QSqlQuery query;

    QString res = QString::number(id);

    //prepare() prend la requete en parametre pour la preparer à l'exécution
    query.prepare("insert into Reservation(id, nom, prenom, type_immatriculation, numImmatriculation)" "values(:id, :nom, :prenom, :type_immatriculation, :numImmatriculation )");

    //Création des variables liées
    query.bindValue(":id",res);
    query.bindValue(":nom",nom);
    query.bindValue(":prenom",prenom);
    query.bindValue(":type_immatriculation",type_immatriculation);
    query.bindValue(":numImmatriculation",numImmatriculation);
    /*query.bindValue(":Dat",Dat);*/

    //exec() envoie la requete pour l'exécuter
    return query.exec();

}


QSqlQueryModel* Reservation::afficher()
{
    QSqlQueryModel* model =new QSqlQueryModel();

    //afficher le tableau
    model->setQuery("SELECT* FROM Reservation");

    model->setHeaderData(0, Qt::Horizontal, QObject::tr("ID"));
    model->setHeaderData(1, Qt::Horizontal, QObject::tr("nom"));
    model->setHeaderData(2, Qt::Horizontal, QObject::tr("prenom"));
    model->setHeaderData(3, Qt::Horizontal, QObject::tr("type_immatriculation"));
    model->setHeaderData(4, Qt::Horizontal, QObject::tr("numImmatriculation"));
    /*model->setHeaderData(5,Qt::Horizontal,QObject::tr("Date"));*/


    return model;
}

bool Reservation::supprimer(int id)
{
    QSqlQuery query;

    //prepare() prend la requete en parametre pour la preparer à l'exécution
    query.prepare("Delete from Reservation where id=:id");

    //Création des variables liées
    query.bindValue(":id",id);


    //exec() envoie la requete pour l'exécuter
    return query.exec();
}
bool Reservation::modifier(int id)
{

QSqlQuery query;

query.prepare("UPDATE reservation SET nom=:nom,prenom=:prenom,numImmatriculation=:numImmatriculation,type_immatriculation=:type_immatriculation, WHERE id=:id;");

     query.bindValue(":id",id);
     query.bindValue(":nom",nom);
     query.bindValue(":prenom",prenom);
     query.bindValue(":type_immatriculation",type_immatriculation);
     query.bindValue(":numImmatriculation", numImmatriculation );
     /*query.bindValue(":Dat",Dat);*/


return    query.exec();
}
QSqlQueryModel* Reservation::rechercher(QString valeur)
{
    QSqlQueryModel *model=new QSqlQueryModel();
    QSqlQuery query;
    query.prepare("SELECT * FROM reservation WHERE id LIKE :valeur or nom LIKE :valeur or prenom LIKE :valeur or numImmatriculation LIKE :valeur or type_immatriculation LIKE :valeur");
    valeur = "%"+valeur+"%";
    query.bindValue(":valeur",valeur);
    query.exec();
    model->setQuery(query);
    return model;
}
