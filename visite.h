#ifndef Visite_H
#define Visite_H
#include <QString>
#include<QSqlQueryModel>
#include<QMessageBox>
#include <QApplication>
#include <QSqlQuery>


class Visite
{
public:
  Visite();
  Visite(int,int,int,int,QString);

  //Getters
  int getid();
  int getdateVisite();
  int getkilometrageVisite();
  int getprixVisite();
  QString getresultatVisite();


  //Setters
  void setid(int);
  void setdateVisite(int);
  void setkilometrageVisite(int);
  void setprixVisite(int);
  void setresultatVisite(QString);


  //Les fonctions
  bool ajouter();
  QSqlQueryModel *afficher();
  bool supprimer(int);
  // Déclaration de la méthode rechercher
  bool modifier(int);
  bool rechercher(int);
  QSqlQueryModel *chercher(int);


private:
    int id,dateVisite, kilometrageVisite,prixVisite;
    QString resultatVisite;
};



#endif // VISITE_H
