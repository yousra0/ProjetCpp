
#include "visite.h"
#include <QSqlQuery>
#include <QtDebug>
#include <QObject>
#include<QVariant>
#include<QMessageBox>
#include <QApplication>

Visite::Visite()
{
id=0; dateVisite=0;kilometrageVisite=0;prixVisite=0;
resultatVisite=" ";
}

Visite::Visite(int id,int dateVisite,int kilometrageVisite,int prixVisite,QString resultatVisite)
{
    this->id=id;
    this->dateVisite=dateVisite;
    this->kilometrageVisite=kilometrageVisite;
    this->prixVisite=prixVisite;
    this->resultatVisite=resultatVisite;

}
//Getters
int Visite::getid(){return id;}
int Visite::getdateVisite(){return dateVisite;}
int Visite::getkilometrageVisite(){return kilometrageVisite;}
int Visite::getprixVisite(){return prixVisite;}
QString Visite::getresultatVisite(){return resultatVisite;}


//Setters
void Visite::setid(int id){this->id=id;}
void Visite::setdateVisite(int dateVisite){this->dateVisite=dateVisite;}
void Visite::setkilometrageVisite(int kilometrageVisite){this->kilometrageVisite=kilometrageVisite;}
void Visite::setprixVisite(int prixVisite){this->prixVisite=prixVisite;}
void Visite::setresultatVisite(QString resultatVisite){this->resultatVisite=resultatVisite;}



bool Visite::ajouter()
{
    QSqlQuery query;
    query.prepare("INSERT INTO visite (id, dateVisite, kilometrageVisite, prixVisite, resultatVisite) "
                  "VALUES (:id, :dateVisite, :kilometrageVisite, :prixVisite, :resultatVisite)");
    query.bindValue(":id", id);
    query.bindValue(":dateVisite", dateVisite);
    query.bindValue(":kilometrageVisite", kilometrageVisite);
    query.bindValue(":prixVisite", prixVisite);
    query.bindValue(":resultatVisite", resultatVisite);

    if(query.exec())
        return true;
    else
        return false;
//if(!controleSaisie())               // Vérifie si la saisie est valide
        //return false;

}


QSqlQueryModel* Visite::afficher()
{
   QSqlQueryModel* model=new QSqlQueryModel();


         model->setQuery("SELECT* FROM visite");
         model->setHeaderData(0, Qt::Horizontal, QObject::tr("Identifiant"));
         model->setHeaderData(1, Qt::Horizontal, QObject::tr("dateVisite"));
         model->setHeaderData(2, Qt::Horizontal, QObject::tr("kilometrageVisite"));
         model->setHeaderData(3, Qt::Horizontal, QObject::tr("prixVisite"));
         model->setHeaderData(4, Qt::Horizontal, QObject::tr("resultatVisite"));


   return model;
   }
bool Visite::supprimer(int id)
{
    QSqlQuery query;
    query.prepare(" Delete from visite where id=:id");
    query.bindValue(0, id);

     return query.exec();
}
bool Visite::rechercher(int id)
{
    // Requête SQL pour récupérer les informations du véhicule avec l'identifiant id
    QSqlQuery query;
    query.prepare("SELECT * FROM visite WHERE id = :id");
    query.bindValue(":id", id);
    if (query.exec() && query.first()) {
        // Si le véhicule est trouvé, on met à jour les attributs de l'objet courant
        this->setid(query.value("id").toInt());
        this->setdateVisite(query.value("dateVisite").toDouble());
        this->setkilometrageVisite(query.value("kilometrageVisite").toDouble());
        this->setprixVisite(query.value("prixVisite").toDouble());
        this->setresultatVisite(query.value("modele").toString());

        return true;
    }
    return false;
}
QSqlQueryModel *Visite::chercher(int id)
{
    QSqlQueryModel *model= new QSqlQueryModel();
    QString str ;

    if(id== NULL){
        str="SELECT * FROM  visite";
    }

         str="select * from visite where id ="+QString::number(id);
        model->setQuery(str);

        return model;

}



bool Visite::modifier(int id)
{
    QSqlQuery query;
    query.prepare("UPDATE visite SET id=:id, dateVisite=:dateVisite, kilometrageVisite=:kilometrageVisite, prixVisite=:prixVisite, resultatVisite=:resultatVisite WHERE id=:id");
    query.bindValue(":id", id);
    query.bindValue(":dateVisite", dateVisite);
    query.bindValue(":kilometrageVisite", kilometrageVisite);
    query.bindValue(":prixVisite", prixVisite);
    query.bindValue(":resultatVisite", resultatVisite);

    return query.exec();
}






