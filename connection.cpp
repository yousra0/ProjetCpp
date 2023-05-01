#include "connection.h"
//test tutoriel Git
Connection::Connection()
{

}

bool Connection::createconnect()
{bool test=false;
QSqlDatabase db = QSqlDatabase::addDatabase("QODBC");
db.setDatabaseName("chedly");
db.setUserName("chedly");//inserer nom de l'utilisateur
db.setPassword("chedly");//inserer mot de passe de cet utilisateur

if (db.open())
test=true;






    return  test;
}
