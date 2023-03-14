
#include "equipement.h"
#include <QSqlQuery>
#include <QtDebug>
#include <QObject>
#include<QVariant>
#include<QMessageBox>
#include <QApplication>

Equipement::Equipement()
{
id=0; dateA=0;
nomE=" ";statut=" ";
}


Equipement::Equipement(int id,int dateA,QString nomE,QString statut)
{this->id=id; this->dateA=dateA; this->nomE=nomE; this->statut=statut;}
int Equipement::getid(){return id;}
int Equipement::getdateA(){return dateA;}
QString Equipement::getnomE(){return nomE;}
QString Equipement::getstatut(){return statut;}
void Equipement::setid(int id){this->id=id;}
void Equipement::setdateA(int dateA){this->dateA=dateA;}
void Equipement::setnomE(QString nomE){this->nomE=nomE;}
void Equipement::setstatut(QString statut){this->statut=statut;}




bool Equipement::ajouter()
{
    QSqlQuery query;
    query.prepare("INSERT INTO equipement (id, dateA, nomE, statut) "
                  "VALUES (:id, :dateA, :nomE, :statut )");
    query.bindValue(":id", id);
    query.bindValue(":dateA", dateA);
    query.bindValue(":nomE", nomE);
    query.bindValue(":statut", statut);


    if(query.exec())
        return true;
    else
        return false;
//if(!controleSaisie())               // Vérifie si la saisie est valide
        //return false;

}


QSqlQueryModel* Equipement::afficher()
{
   QSqlQueryModel* model=new QSqlQueryModel();


         model->setQuery("SELECT* FROM Equipement");
         model->setHeaderData(0, Qt::Horizontal, QObject::tr("Identifiant"));
         model->setHeaderData(1, Qt::Horizontal, QObject::tr("date d'achat"));
         model->setHeaderData(2, Qt::Horizontal, QObject::tr("Nom d'equipement"));
         model->setHeaderData(3, Qt::Horizontal, QObject::tr("statut"));

   return model;
   }
bool Equipement::supprimer(int id)
{
    QSqlQuery query;
    query.prepare(" Delete from Equipement where id=:id");
    query.bindValue(0, id);

     return query.exec();
}
bool Equipement::rechercher(int id)
{
    // Requête SQL pour récupérer les informations du véhicule avec l'identifiant id
    QSqlQuery query;
    query.prepare("SELECT * FROM visite WHERE id = :id");
    query.bindValue(":id", id);
    if (query.exec() && query.first()) {
        // Si le véhicule est trouvé, on met à jour les attributs de l'objet courant
                this->setid(query.value("id").toInt());
                this->setdateA(query.value("date d'achat").toInt());
                this->setnomE(query.value("nom d'equipement").toString());
                this->setstatut(query.value("statut").toString());

        return true;
    }
    return false;
}
 /*QSqlQueryModel *Equipement::chercher(int id)
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


*/
bool Equipement::modifier(int id)
{
    QSqlQuery query;
           QString res=QString::number(id);
            QString ress=QString::number(dateA);


             query.prepare("UPDATE equipement "" SET id=:id, nomE=:nomE, statut=:statut, dateA=:dateA where ID='"+res+"' ");


                   query.bindValue(":id", res);
                   query.bindValue(":nomE", nomE);
                   query.bindValue(":statut", statut);
                    query.bindValue(":dateA", ress);

               return query.exec();
}




