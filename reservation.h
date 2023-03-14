#ifndef RESERVATION_H
#define RESERVATION_H

#include<QString>
#include<QSqlQuery>
#include<QSqlQueryModel>
#include<QMessageBox>
#include <QApplication>

class Reservation
{
    public:
        Reservation();
        Reservation(int,QString ,QString ,QString,int);

        //Getters
        int getid();
        QString getnom();
       QString getprenom();
       QString gettype_immatriculation();
        int getnumImmatriculation();
        /*QDate getDat();*/


        //Setters
        void setid(int);
        void setnom(QString);
        void setprenom(QString);
        void settype_immatriculation(QString);
        void setnumImmatriculation(int);
        /*void setDat(QDate);*/

        //Fonctionnalités de base relatives à l'entité Reservation
        bool ajouter();
        QSqlQueryModel * afficher();
        bool supprimer(int);
        bool modifier(int );
        QSqlQueryModel * rechercher(QString valeur);


    private:
        int id;
        QString nom;
        QString prenom;
        QString type_immatriculation ;
        int numImmatriculation;
        /*QDate Dat;*/

};

#endif // RESERVATION_H
