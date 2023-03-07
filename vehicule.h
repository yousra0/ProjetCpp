#ifndef VEHICULE_H
#define VEHICULE_H
#include <Qstring>
#include<QtSql/QSqlQueryModel>
#include<QMessageBox>
#include <QApplication>


class Vehicule
{
public:
  Vehicule();
  Vehicule(int,int,int,QString,QString,QString,QString);
  int getid();int getkilometrage(); int getNumSerie ();
  QString getnom();
  QString getprenom();
  QString getmarque();
  QString getmodele();
  void setid(int);
  void setkilometrage(int);
  void setNumSerie(int);
  void setnom(QString);
  void setprenom(QString);
  void setmarque(QString);
  void setmodele(QString);
  bool ajouter();
  QSqlQueryModel *afficher();
  bool supprimer(int);


private:
    int id,kilometrage,NumSerie;
    QString nom ,prenom,marque,modele;
};

#endif // VEHICULE_H
