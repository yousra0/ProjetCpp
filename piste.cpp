#include "piste.h"

#include<QSqlQuery>
#include<QtDebug>
#include<QMessageBox>
#include <QApplication>
#include<QObject>

Piste::Piste()
{
    id=0;
    numPiste=0;
    longueur=0;
    largeur=0;
    type="";
}

Piste::Piste(int id, int numPiste, int longueur, int largeur, QString type)
{
    this->id=id;
    this->numPiste=numPiste;
    this->longueur=longueur;
    this->largeur=largeur;
    this->type=type;
}

//Getters
int Piste::getid(){return id;}
int Piste::getnumPiste(){return numPiste;}
int Piste::getlongueur(){return longueur;}
int Piste::getlargeur(){return largeur;}
QString Piste::gettype(){return type;}

//Setters
void Piste::setid(int id){this->id=id;}
void Piste::setnumPiste(int numPiste){this->numPiste=numPiste;}
void Piste::setlongueur(int longueur){this->longueur=longueur;}
void Piste::setlargeur(int largeur){this->largeur=largeur;}
void Piste::settype(QString type){this->type=type;}

bool Piste::ajouter()
{
    QSqlQuery query;

    QString res = QString::number(id);

    //prepare() prend la requete en parametre pour la preparer à l'exécution
    query.prepare("insert into piste(id, numPiste, longueur, largeur, type)" "values(:id, :numPiste, :longueur, :largeur, :type)");

    //Création des variables liées
    query.bindValue(":id",res);
    query.bindValue(":numPiste",numPiste);
    query.bindValue(":longueur",longueur);
    query.bindValue(":largeur",largeur);
    query.bindValue(":type",type);

    //exec() envoie la requete pour l'exécuter
    return query.exec();

}


QSqlQueryModel* Piste::afficher()
{
    QSqlQueryModel* model =new QSqlQueryModel();

    //afficher le tableau
    model->setQuery("SELECT* FROM piste");

    model->setHeaderData(0, Qt::Horizontal, QObject::tr("ID"));
    model->setHeaderData(1, Qt::Horizontal, QObject::tr("NumeroPiste"));
    model->setHeaderData(2, Qt::Horizontal, QObject::tr("Longueur"));
    model->setHeaderData(3, Qt::Horizontal, QObject::tr("Largeur"));
    model->setHeaderData(4, Qt::Horizontal, QObject::tr("Type"));


    return model;
}

bool Piste::supprimer(int id)
{
    QSqlQuery query;

    //prepare() prend la requete en parametre pour la preparer à l'exécution
    query.prepare("Delete from piste where id=:id");

    //Création des variables liées
    query.bindValue(":id",id);


    //exec() envoie la requete pour l'exécuter
    return query.exec();
}

bool Piste::modifier(int id)
{
    QSqlQuery query;
    query.prepare("UPDATE piste SET numPiste=:numPiste, longueur=:longueur, largeur=:largeur, type=:type WHERE id=:id");
    query.bindValue(":id", id);
    query.bindValue(":numPiste", numPiste);
    query.bindValue(":longueur", longueur);
    query.bindValue(":largeur", largeur);
    query.bindValue(":type", type);
    return query.exec();
}

QSqlQueryModel* Piste::rechercher(QString valeur)
{
    QSqlQueryModel *model=new QSqlQueryModel();
    QSqlQuery query;
    query.prepare("SELECT * FROM piste WHERE id LIKE :valeur or numPiste LIKE :valeur or longueur LIKE :valeur or largeur LIKE :valeur or type LIKE :valeur");
    valeur = "%"+valeur+"%";
    query.bindValue(":valeur",valeur);
    query.exec();
    model->setQuery(query);
    return model;
}


