#include "mainwindow.h"
#include "visite.h"
#include "ui_mainwindow.h"
#include "notifications.h"
#include<QMessageBox>
#include <QApplication>
#include<QIntValidator>
#include <QFileDialog>
#include <QPdfWriter>
#include <QtDebug>
#include <QPainter>
#include <QDesktopServices>
#include <QTextDocument>
#include <QDate>
#include <QString>
#include <QStandardItemModel>
#include <QStandardItem>
#include <QDebug>
#include <QTableView>
#include <QtCharts/QPieSeries>
#include <QtCharts/QPieSlice>
#include <QtCharts/QChart>
#include <QMessageBox>
#include <QIntValidator>
#include <QMessageBox>
#include <QSqlTableModel>
#include <QDebug>
#include <QSqlQueryModel>
#include <QtCharts>
#include <QChartView>
#include <QLineSeries>




#include <QIntValidator>
#include "QSqlQuery"
#include "QStringListModel"
#include<QFileDialog>
#include<QTextDocument>
#include<QTextStream>
#include<QGraphicsView>
#include<QtPrintSupport/QPrintDialog>
#include<QPdfWriter>
#include<QSqlQueryModel>
#include<QSqlQuery>
#include<QSystemTrayIcon>
#include<QUrlQuery>
#include<QJsonDocument>
#include<QJsonObject>
#include<QJsonArray>
#include <QDate>
#include <QTime>
#include<QMessageBox>
#include<QSqlTableModel>
#include<QItemSelectionModel>
#include<QTableWidgetItem>
#include <QtPrintSupport/QPrinter>
#include <QDesktopServices>
#include <QDesktopWidget>
#include <QCoreApplication>
#include <QDebug>
#include <QIntValidator>
#include <QSqlQueryModel>
#include <QtCharts>
#include <QChartView>
#include <QLineSeries>
#include<QDesktopServices>
#include<QUrl>
#include <QTextStream>
#include <QTextDocument>
#include <QtPrintSupport/QPrintDialog>
#include <QtPrintSupport/QPrinter>
#include <QtWidgets>
#include<QFileDialog>
#include<QGraphicsView>
#include<QPdfWriter>
#include<QSqlQuery>
#include<QSystemTrayIcon>
#include <QtNetwork/QAbstractSocket>
#include <QtNetwork/QSslSocket>
#include<QUrlQuery>
#include<QJsonDocument>
#include<QJsonObject>
#include<QJsonArray>
#include <QDate>
#include <QTime>
#include<QSqlTableModel>
#include<QItemSelectionModel>
#include<QTableWidgetItem>
#include <QDesktopWidget>
#include <QCoreApplication>
#include <QDateEdit>
#include <QComboBox>

#include <QPixmap>
#include <QMediaPlayer>

#include <QTabWidget>
#include <QObject>
#include <QDialog>
#include <QValidator>
#include <QPropertyAnimation>
#include <QEasingCurve>
#include <QSequentialAnimationGroup>
#include <QState>
#include <QStateMachine>
#include <QSignalTransition>
#include <QPainter>

#include<QString>
#include<QStatusBar>


#include <QDebug>
#include <QIntValidator>
#include <QSqlQueryModel>
#include <QtCharts>
#include <QChartView>
#include <QLineSeries>
#include<QDesktopServices>
#include<QUrl>
#include <QTextStream>
#include <QTextDocument>
#include <QtPrintSupport/QPrintDialog>
#include <QtPrintSupport/QPrinter>
#include <QtWidgets>
#include<QFileDialog>
#include<QGraphicsView>
#include<QPdfWriter>
#include<QSqlQuery>
#include<QSystemTrayIcon>
#include <QtNetwork/QAbstractSocket>
#include <QtNetwork/QSslSocket>
#include<QUrlQuery>
#include<QJsonDocument>
#include<QJsonObject>
#include<QJsonArray>
#include <QDate>
#include <QTime>
#include<QSqlTableModel>
#include<QItemSelectionModel>
#include<QTableWidgetItem>
#include <QDesktopWidget>
#include <QCoreApplication>
#include <QDateEdit>
#include <QComboBox>
#include <QPixmap>
#include <QMediaPlayer>
#include <QTabWidget>
#include <QObject>
#include <QDialog>
#include <QValidator>
#include <QPropertyAnimation>
#include <QEasingCurve>
#include <QSequentialAnimationGroup>
#include <QState>
#include <QStateMachine>
#include <QSignalTransition>
#include <QPainter>
#include<QString>
#include<QStatusBar>
#include<QTimer>
#include<QDateTime>
 #include <QApplication>
#include<QTimer>
#include<QDateTime>
 #include <QApplication>

#include<QVBoxLayout>
#include<QMenu>
#include<QAction>
#include<QFileDialog>

#include <QMessageBox>
#include <QIntValidator>
#include <QMessageBox>
#include <QSqlTableModel>
#include <QDebug>
#include <QSqlQueryModel>
#include <QtCharts>
#include <QChartView>
#include <QLineSeries>




#include <QIntValidator>
#include "QSqlQuery"
#include "QStringListModel"
#include<QFileDialog>
#include<QTextDocument>
#include<QTextStream>
#include<QGraphicsView>
#include<QtPrintSupport/QPrintDialog>
#include<QPdfWriter>
#include<QSqlQueryModel>
#include<QSqlQuery>
#include<QSystemTrayIcon>
#include<QUrlQuery>
#include<QJsonDocument>
#include<QJsonObject>
#include<QJsonArray>
#include <QDate>
#include <QTime>
#include<QMessageBox>
#include<QSqlTableModel>
#include<QItemSelectionModel>
#include<QTableWidgetItem>
#include <QtPrintSupport/QPrinter>
#include <QDesktopServices>
#include <QDesktopWidget>
#include <QCoreApplication>
#include <QDebug>
#include <QIntValidator>
#include <QSqlQueryModel>
#include <QtCharts>
#include <QChartView>
#include <QLineSeries>
#include<QDesktopServices>
#include<QUrl>
#include <QTextStream>
#include <QTextDocument>
#include <QtPrintSupport/QPrintDialog>
#include <QtPrintSupport/QPrinter>
#include <QtWidgets>
#include<QFileDialog>
#include<QGraphicsView>
#include<QPdfWriter>
#include<QSqlQuery>
#include<QSystemTrayIcon>
#include <QtNetwork/QAbstractSocket>
#include <QtNetwork/QSslSocket>
#include<QUrlQuery>
#include<QJsonDocument>
#include<QJsonObject>
#include<QJsonArray>
#include <QDate>
#include <QTime>
#include<QSqlTableModel>
#include<QItemSelectionModel>
#include<QTableWidgetItem>
#include <QDesktopWidget>
#include <QCoreApplication>
#include <QDateEdit>
#include <QComboBox>

#include <QPixmap>
#include <QMediaPlayer>

#include <QTabWidget>
#include <QObject>
#include <QDialog>
#include <QValidator>
#include <QPropertyAnimation>
#include <QEasingCurve>
#include <QSequentialAnimationGroup>
#include <QState>
#include <QStateMachine>
#include <QSignalTransition>
#include <QPainter>

#include<QString>
#include<QStatusBar>

#include <QSound>

#include <QDebug>
#include <QIntValidator>
#include <QSqlQueryModel>
#include <QtCharts>
#include <QChartView>
#include <QLineSeries>
#include<QDesktopServices>
#include<QUrl>
#include <QTextStream>
#include <QTextDocument>
#include <QtPrintSupport/QPrintDialog>
#include <QtPrintSupport/QPrinter>
#include <QtWidgets>
#include<QFileDialog>
#include<QGraphicsView>
#include<QPdfWriter>
#include<QSqlQuery>
#include<QSystemTrayIcon>
#include <QtNetwork/QAbstractSocket>
#include <QtNetwork/QSslSocket>
#include<QUrlQuery>
#include<QJsonDocument>
#include<QJsonObject>
#include<QJsonArray>
#include <QDate>
#include <QTime>
#include<QSqlTableModel>
#include<QItemSelectionModel>
#include<QTableWidgetItem>
#include <QDesktopWidget>
#include <QCoreApplication>
#include <QDateEdit>
#include <QComboBox>
#include <QPixmap>
#include <QMediaPlayer>
#include <QTabWidget>
#include <QObject>
#include <QDialog>
#include <QValidator>
#include <QPropertyAnimation>
#include <QEasingCurve>
#include <QSequentialAnimationGroup>
#include <QState>
#include <QStateMachine>
#include <QSignalTransition>
#include <QPainter>
#include<QString>
#include<QStatusBar>
#include <QSound>
#include<QTimer>
#include<QDateTime>
 #include <QApplication>
#include<QTimer>
#include<QDateTime>
 #include <QApplication>
#include<QCamera>
#include <QCameraViewfinder>
#include<QCameraImageCapture>
#include<QVBoxLayout>
#include<QMenu>
#include<QAction>
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)


{


    ui->setupUi(this);
    ui->le_id->setValidator( new QIntValidator(0, 9999999, this));
    ui->le_datevisite->setValidator( new QIntValidator(0, 9999999, this));
    ui->le_kilometrage->setValidator( new QIntValidator(0, 9999999, this));
    ui->le_prixvisite->setValidator( new QIntValidator(0, 9999999, this));

    ui->tab_visite->setModel(v.afficher());



}




MainWindow::~MainWindow()
{
    delete ui;
}



void MainWindow::on_pb_ajouter_clicked()
{
    //Récupération des informations saisies dans les 5 champs
    QMessageBox msgbox;
       notification n;
       int id=ui->le_id->text().toInt();
       int datevisite=ui->le_datevisite->text().toInt();
       int kilometrage=ui->le_kilometrage->text().toInt();
       int prixvisite=ui->le_prixvisite->text().toInt();
       QString resultat=ui->le_resultat->currentText();


       //instancier l'objet de la classe vehicule
       Visite V(id,datevisite,kilometrage,prixvisite,resultat);

    //insérer l'objet piste instancié dans la table piste
    //et récupérer la valeur de retour de query.exec()
    bool test=V.ajouter();

    //si la requete executée => QMessageBox::information
    if(test)
    {
        QMessageBox::information(nullptr, QObject::tr("OK"),
                     QObject::tr("Ajout effectué\n"
                                 "Click Cancel to exit"), QMessageBox::Cancel);

        //Actualiser le tableau apres l'ajout
        ui->tab_visite->setModel(v.afficher());
         n.notification_ajout();
    }
    //si la requete non exécuté => QMessageBox::critical
    else
    {
        QMessageBox::critical(nullptr, QObject::tr("NOT OK"),
                     QObject::tr("Ajout non effectué\n"
                                 "Click Cancel to exit"), QMessageBox::Cancel);
    }


}
void MainWindow:: on_pb_supprimer_clicked()
{
    Visite V;
    V.setid(ui->itemId->text().toInt());
    bool test=V.supprimer(V.getid());
    if(test)
    {
        QMessageBox::information(this, "Succès", "Suppression avec succès.");
        ui->tab_visite->setModel(v.afficher());


    }
    else
    {
       QMessageBox::warning(this, "Erreur", "La visite n'existe pas.");
    }
}

/*
void MainWindow::on_pb_supprimer_clicked()
{

        Visite v1;
        v1.setid(ui->id_supp->text().toInt());

       /bool existe = v1.rechercher(v1.getid()); // Rechercher le véhicule

        if (existe) {
            // Demander une confirmation avant la suppression
            QMessageBox::StandardButton confirmation = QMessageBox::question(this, "Confirmation", "Voulez-vous vraiment supprimer ce véhicule ?", QMessageBox::Yes | QMessageBox::No);
            if (confirmation == QMessageBox::Yes) {
                bool test = v1.supprimer(v1.getid()); // Supprimer le véhicule
                if (test) {
                    QMessageBox::information(this, "Succès", "Suppression avec succès.");
                    ui->tab_visite->setModel(v.afficher());
                } else {
                    QMessageBox::warning(this, "Echec", "Echec de suppression.");
                }
            }
        } else {
            QMessageBox::warning(this, "Erreur", "Le véhicule n'existe pas."); // Alerter l'utilisateur que le véhicule n'a pas été trouvé
        }


}*/
void MainWindow::on_pb_modifier_clicked()
{

        int id=ui->le_id->text().toInt();
        int datevisite=ui->le_datevisite->text().toInt();
        int kilometrage=ui->le_kilometrage->text().toInt();
        int prixvisite=ui->le_prixvisite->text().toInt();
        QString resultat=ui->le_resultat->currentText();



    Visite V(id,datevisite,kilometrage,prixvisite,resultat);
    bool test=V.modifier(id);
    if(test){
    ui->tab_visite->setModel(V.afficher());}
    // Vérifier que l'identifiant saisi est valide
            if (id <= 0)
            {
                QMessageBox::warning(this, "Erreur", "Veuillez entrer une valeur numérique valide pour l'identifiant.");
                return;
            }
            // Vérifier que les champs obligatoires sont remplis
                if (datevisite <=0|| kilometrage <=0||prixvisite <=0|| resultat.isEmpty()  )
                {
                    QMessageBox::warning(this, "Erreur", "Veuillez remplir tous les champs obligatoires.");
                    return;
                }

            // Vérifier que l'identifiant existe dans la table
            QSqlQuery query;
            query.prepare("SELECT * FROM reservation WHERE id = :id");
            query.bindValue(":id", id);

            if (!query.exec())
            {
                QMessageBox::critical(this, "Erreur", "Une erreur s'est produite lors de la vérification de l'identifiant.");
                return;
            }
            if (!query.next())
            {
                QMessageBox::warning(this, "Attention", "L'identifiant à modifier n'existe pas dans la table.");
                return;
            }

            // Demander à l'utilisateur de confirmer la modification
            QMessageBox::StandardButton confirmUpdate = QMessageBox::question(this, "Confirmation",
                "Êtes-vous sûr de vouloir modifier cet enregistrement ?",
                QMessageBox::Yes|QMessageBox::No);

            if (confirmUpdate == QMessageBox::No) {
                return; // L'utilisateur a annulé la modification, sortir de la fonction
            }

            // Exécuter la requête SQL pour mettre à jour l'enregistrement

            query.prepare("UPDATE reservation SET datevisite = :datevisite, kilometrage= :kilometrage, prixvisite = :prixvisite ,resultat = :resultat WHERE id = :id");
            query.bindValue(":id", id);
            query.bindValue(":datevisite", datevisite);
            query.bindValue(":kilometrage", kilometrage);
            query.bindValue(":prixvisite", prixvisite);
            query.bindValue(":resultat", resultat);



            if (query.exec())
            {
                QMessageBox::information(nullptr, QObject::tr("OK"),
                             QObject::tr("Modification effectuée\n"
                                         "Click Cancel to exit"), QMessageBox::Cancel);

                //Actualiser le tableau après la modification
                ui->tab_visite->setModel(V.afficher());
            }
            else
            {
                QMessageBox::critical(nullptr, QObject::tr("NOT OK"),
                             QObject::tr("Modification non effectuée\n"
                                         "Click Cancel to exit"), QMessageBox::Cancel);
            }
    }


void MainWindow::on_pushButton_rechercher_clicked()
{


            QString rech =ui->lerechercher->text();
                ui->tab_visite->setModel(v.rechercher(rech));
}




void MainWindow::on_pushButton_PDF_clicked()
{

    QString dir = QFileDialog::getExistingDirectory(this, tr("Open Directory"),
                                                         "/home",
                                                         QFileDialog::ShowDirsOnly
                                                         | QFileDialog::DontResolveSymlinks);
    qDebug()<<dir;
    QPdfWriter pdf(dir+"/PdfList.pdf");
    QPainter painter(&pdf);
    int i = 4000;

    painter.drawPixmap(QRect(100,100,2000,2000),QPixmap("C:/Users/Mahmoud Omar/Desktop"));
    painter.setPen(Qt::red);
    painter.setFont(QFont("Time New Roman", 25));
    painter.drawText(3000,1450,"Liste Des Visites");
    painter.setPen(Qt::black);
    painter.setFont(QFont("Time New Roman", 15));
    painter.drawRect(100,100,9400,2500);
    painter.drawRect(100,3000,9400,500);
    painter.setFont(QFont("Time New Roman", 10));
    painter.drawText(300,3300,"ID");
    painter.drawText(1500,3300,"Datevisite");
    painter.drawText(3000,3300,"Kilometrage");
    painter.drawText(4800,3300,"Prixvisite");
    painter.drawText(6600,3300,"Resultat");


    painter.drawRect(100,3000,9400,10700);

    QTextDocument previewDoc;
    QString pdflist = QDate::currentDate().toString("'data_'MM_dd_yyyy'.txt'");

    QTextCursor cursor(&previewDoc);

    QSqlQuery query;
    query.prepare("SELECT * FROM visite");
    query.exec();
    while (query.next())
    {
        painter.drawText(300,i,query.value(0).toString());
        painter.drawText(1500,i,query.value(1).toString());
        painter.drawText(3000,i,query.value(2).toString());
        painter.drawText(4800,i,query.value(3).toString());
        painter.drawText(6600,i,query.value(4).toString());
        painter.drawText(8400,i,query.value(5).toString());
        painter.drawText(10000,i,query.value(6).toString());

        i = i +500;
    }
    int reponse = QMessageBox::question(this, "Générer PDF", " PDF Enregistré ! Voulez Vous Affichez Le PDF ?",
                                            QMessageBox::Yes|QMessageBox::No);
    if (reponse == QMessageBox::Yes)
    {
        QDesktopServices::openUrl(QUrl::fromLocalFile(dir+"/PdfList.pdf"));
        painter.end();
    }
    else
    {
         painter.end();
    }
}


void MainWindow::on_triID_clicked()
{
    ui->tab_visite->setModel(v.triID());

}

void MainWindow::on_nom_az_clicked()
{
     ui->tab_visite->setModel(v.triNOM());
}

void MainWindow::on_nom_desc_clicked()
{
    ui->tab_visite->setModel(v.triNOMdesc());
}

void MainWindow::on_ID_desc_clicked()
{
    ui->tab_visite->setModel(v.triIDdesc());
}


void MainWindow::on_statsmed_clicked()
{

        QSqlQueryModel * model= new QSqlQueryModel();
         model->setQuery("select * from visite where resultat='Accepter' ");
         int number1=model->rowCount();
         model->setQuery("select * from visite where resultat ='Refuser' ");
         int number2=model->rowCount();

         int total=number1+number2;
         QString a = QString("Accepter"+QString::number((number1*100)/total,'f',2)+"%" );
         QString b = QString("Refuser"+QString::number((number2*100)/total,'f',2)+"%" );



         QPieSeries *series = new QPieSeries();
         series->append(a,number1);
         series->append(b,number2);

         if (number1!= 0)
         {
             QPieSlice *slice = series->slices().at(0);
             slice->setLabelVisible();
             slice->setPen(QPen());
         }
         if (number2!=0)
         {
                  // Add label, explode and define brush for 2nd slice
                  QPieSlice *slice1 = series->slices().at(1);
                  //slice1->setExploded();
                  slice1->setLabelVisible();
         }


                 // Create the chart widget
                 QChart *chart = new QChart();
                 // Add data to chart with title and hide legend
                 chart->addSeries(series);
                 chart->setTitle("Pourcentage Par resultat "+ QString::number(total));
                 chart->legend()->hide();
                 // Used to display the chart
                 QChartView *chartView = new QChartView(chart);
                 chartView->setRenderHint(QPainter::Antialiasing);
                 chartView->resize(1000,500);
                 chartView->show();


}


void MainWindow::on_pushButton_encrypt_clicked()
{

    QString plainText = ui->plainTextEdit_plain->toPlainText();
    QString encryptedText = "to be implemented";

    if(ui->comboBox->currentIndex() == 0)
    {
        int key = ui->lineEdit_CC_key->text().toInt();
        encryptedText = ewCaesarCipher(plainText, key);
    }
    else if(ui->comboBox->currentIndex() == 1)
    {
        QString secret = ui->lineEdit_PF_Secret->text();
        encryptedText = ewPlayfair(plainText, secret);
    }
    else if(ui->comboBox->currentIndex() == 2)
    {
        QString key = ui->lineEdit_DES_key_3->text();
        encryptedText = ewDES(plainText, key.toStdString());
    }
    else if(ui->comboBox->currentIndex() == 3)
    {
      double p = ui->RSA_lineEdit_p_2->text().toDouble();
      double q = ui->RSA_lineEdit_q_2->text().toDouble();
       double dbl = ewRSA(plainText.toDouble(), p, q);

        std::ostringstream strs;
        strs << dbl;
        encryptedText = QString::fromStdString(strs.str());

        std::pair<double, double> pair = RSAKeys(p, q);
        std::ostringstream strPrK;
        strPrK << pair.first;
        ui->RSA_lineEdit_prkey_2->setText(QString::fromStdString(strPrK.str()));
        std::ostringstream strPuK;
        strPuK << pair.second;
      ui->RSA_lineEdit_pukey_2->setText(QString::fromStdString(strPuK.str()));
    }
    else if(ui->comboBox->currentIndex() == 4)
    {
        QString key = ui->lineEdit_rc4_key_3->text();
        encryptedText = ewRC4(plainText, key);
    }
    else if(ui->comboBox->currentIndex() == 5)
    {
        QString key = ui->lineEdit_DES_key_3->text();
        encryptedText = ewIDES(plainText, key.toStdString());
    }
    ui->plainTextEdit_encrypted->document()->setPlainText(encryptedText);
}

void MainWindow::on_pushButton_decrypt_clicked()
{
    QString encryptedText = ui->plainTextEdit_encrypted->toPlainText();
    QString plainText = "to be implemented";

    if(ui->comboBox->currentIndex() == 0)
    {
        int key = ui->lineEdit_CC_key->text().toInt();
        plainText = dwCaesarCipher(encryptedText, key);
    }
    else if(ui->comboBox->currentIndex() == 1)
    {
        QString secret = ui->lineEdit_PF_Secret->text();
        plainText = dwPlayfair(encryptedText, secret);
    }
    else if(ui->comboBox->currentIndex() == 2)
    {
        QString key = ui->lineEdit_DES_key_3->text();
        plainText = dwDES(encryptedText, key.toStdString());
    }
    else if(ui->comboBox->currentIndex() == 3)
    {
       double p = ui->RSA_lineEdit_p_2->text().toDouble();
     double q = ui->RSA_lineEdit_q_2->text().toDouble();

        std::ostringstream pstr;
        pstr << dwRSA(encryptedText.toDouble(), p, q);
        plainText = QString::fromStdString(pstr.str());
    }
    else if(ui->comboBox->currentIndex() == 4)
    {
        QString key = ui->lineEdit_rc4_key_3->text();
        plainText = dwRC4(encryptedText, key);
    }
    else if(ui->comboBox->currentIndex() == 5)
    {
        QString key = ui->lineEdit_DES_key_3->text();
        plainText = dwIDES(encryptedText, key.toStdString());
    }
    ui->plainTextEdit_plain->document()->setPlainText(plainText);
}

void MainWindow::on_actionReset_Fields_triggered()
{
    ui->plainTextEdit_plain->clear();
    ui->plainTextEdit_encrypted->clear();
    ui->lineEdit_CC_key->clear();
}

void MainWindow::on_actionClear_Plain_Text_triggered()
{
    ui->plainTextEdit_plain->clear();
}

void MainWindow::on_actionClear_Encrypted_Text_triggered()
{
    ui->plainTextEdit_encrypted->clear();
}

void MainWindow::on_actionExit_triggered()
{
    exit(0);
}

void MainWindow::on_actionAbout_Qt_triggered()
{
    QMessageBox::aboutQt(this);
}

void MainWindow::on_comboBox_currentTextChanged(const QString &arg1)
{
    if(arg1 == "Caesar Cipher")
    {
        ui->stackedWidget_3->setCurrentIndex(0);
    }
    else if(arg1 == "Playfair")
    {
        ui->stackedWidget_3->setCurrentIndex(1);
    }
    else if(arg1 == "DES")
    {
        ui->stackedWidget_3->setCurrentIndex(2);
    }
    else if(arg1 == "RSA")
    {
        ui->stackedWidget_3->setCurrentIndex(3);
    }
    else if(arg1 == "RC4")
    {
        ui->stackedWidget_3->setCurrentIndex(4);
    }
    else if(arg1 == "DES with Text")
    {
        ui->stackedWidget_3->setCurrentIndex(2);
    }
}





// Caesar Cipher Methods

QString MainWindow::ewCaesarCipher(QString plainText, int key)
{
    std::string result = "";
    std::string plainStdText = plainText.toStdString();

    for (int i=0;i<plainText.length();i++)
    {
        if(plainStdText[i] == ' ')
        {
            result += ' ';
        }
        else if(std::isalpha(plainStdText[i]))
        {
            if (std::isupper(plainStdText[i]))
                result += char(int(plainStdText[i]+key-65)%26 +65);
            else
                result += char(int(plainStdText[i]+key-97)%26 +97);
        }
    }

    return QString::fromStdString(result);
}

QString MainWindow::dwCaesarCipher(QString encryptedText, int key)
{
    return ewCaesarCipher(encryptedText, 26-key);
}





// playfair Methods

QString MainWindow::ewPlayfair(QString plainText, QString secret)
{
    std::string plainStdText = plainText.toStdString();
    std::string secretStdText = secret.toStdString();

    normalizePFSecret(secretStdText);
    populatePFMatrix(secretStdText);
    normalizePFString(plainStdText);

    std::string encryptedText = encryptPFString(plainStdText);

    return QString::fromStdString(encryptedText);
}

QString MainWindow::dwPlayfair(QString encryptedText, QString secret)
{
    std::string encryptedStdText = encryptedText.toStdString();
    std::string secretStdText = secret.toStdString();

    normalizePFSecret(secretStdText);
    populatePFMatrix(secretStdText);

    std::string plainText = decryptPFString(encryptedStdText);

    return QString::fromStdString(plainText);
}

bool MainWindow::inSameRow(Position p1, Position p2)
{
    if(p1.x == p2.x)
        return true;
    return false;
}

bool MainWindow::inSameColumn(Position p1, Position p2)
{
    if(p1.y == p2.y)
        return true;
    return false;
}

void MainWindow::normalizePFString(std::string &str)
{
    std::string pure_str= "";
    // remove any non-alphabetical characters
    // convert string to lower case
    for(int i=0;i<str.size();++i)
    {
        if(isalpha(str[i]))
        {
            if(std::isupper(str[i]))
                str[i] = std::tolower(str[i]);
            pure_str += str[i];
        }
    }

    // separate duplicate characters
    for(int i=0 ; i<pure_str.size()-1 ; i+=2)
    {
        if(pure_str[i] == pure_str[i+1])
            pure_str.insert(pure_str.begin()+i+1, 'x');
    }

    // make string even
    if(pure_str.size()%2 !=0)
        pure_str += 'x';

    str = pure_str;
}

std::string MainWindow::encryptPFString(std::string plainStdText)
{
    std::string result = "";

    for(int i=0;i<plainStdText.size(); i+=2)
    {
        Position p1 = findPositionByChar(plainStdText[i]);
        Position p2 = findPositionByChar(plainStdText[i+1]);

        if(inSameRow(p1, p2))
        {
            if(p1.y == 4)
                p1.y = 0;
            else
                p1.y +=1;

            if(p2.y == 4)
                p2.y = 0;
            else
                p2.y +=1;

            result += findCharByPosition(p1);
            result += findCharByPosition(p2);
        }
        else if(inSameColumn(p1, p2))
        {
            if(p1.x == 4)
                p1.x = 0;
            else
                p1.x +=1;

            if(p2.x == 4)
                p2.x = 0;
            else
                p2.x +=1;

            result += findCharByPosition(p1);
            result += findCharByPosition(p2);
        }
        else
        {
            Position t1, t2;

            t1.x = p1.x;
            t1.y = p2.y;

            t2.x = p2.x;
            t2.y = p1.y;

            result += findCharByPosition(t1);
            result += findCharByPosition(t2);
        }
    }

    return result;
}

std::string MainWindow::decryptPFString(std::string encryptedStdText)
{
    std::string result = "";

    for(int i=0;i<encryptedStdText.size(); i+=2)
    {
        Position p1 = findPositionByChar(encryptedStdText[i]);
        Position p2 = findPositionByChar(encryptedStdText[i+1]);

        if(inSameRow(p1, p2))
        {
            if(p1.y == 0)
                p1.y = 4;
            else
                p1.y -=1;

            if(p2.y == 0)
                p2.y = 4;
            else
                p2.y -=1;

            result += findCharByPosition(p1);
            result += findCharByPosition(p2);
        }
        else if(inSameColumn(p1, p2))
        {
            if(p1.x == 0)
                p1.x = 4;
            else
                p1.x -=1;

            if(p2.x == 0)
                p2.x = 4;
            else
                p2.x -=1;

            result += findCharByPosition(p1);
            result += findCharByPosition(p2);
        }
        else
        {
            Position t1, t2;

            t1.x = p1.x;
            t1.y = p2.y;

            t2.x = p2.x;
            t2.y = p1.y;

            result += findCharByPosition(t1);
            result += findCharByPosition(t2);
        }
    }

    return result;
}

void MainWindow::normalizePFSecret(std::string &secret)
{
    std::string result = "";
    secret += "abcdefghiklmnopqrstuvwxyz";
    for(int i=0;i<secret.size();++i)
    {
        if(result.find(secret[i]) == std::string::npos)
            result += secret[i];
    }
    secret = result;
}

void MainWindow::populatePFMatrix(std::string secret)
{
    for(int i=0; i<5; ++i)
    {
        for(int j=0; j<5 ; ++j)
        {
            pfMatrix[i][j] = secret[j+5*i];
        }
    }
}

Position MainWindow::findPositionByChar(char ch)
{
    Position p;

    for(int i=0; i<5; ++i)
    {
        for(int j=0; j<5; ++j)
        {
            if(pfMatrix[i][j] == ch)
            {
                p.x = i;
                p.y = j;
            }
        }
    }

    return p;
}

char MainWindow::findCharByPosition(Position p)
{
    return pfMatrix[p.x][p.y];
}





// data 0000000100100011010001010110011110001001101010111100110111101111
// key  0001001100110100010101110111100110011011101111001101111111110001

// DES Methods

QString MainWindow::ewDES(QString plainText, std::string key)
{
    std::vector< std::string > keys = keyPreparation(key);

    QString encryptedText = DESEncryption(plainText.toStdString(), keys);

    return encryptedText;
}

QString MainWindow::dwDES(QString encryptedText, std::string key)
{
    std::vector< std::string > keys = keyPreparation(key);

    std::reverse(keys.begin(), keys.end());

    QString plainText = DESEncryption(encryptedText.toStdString(), keys);

    return plainText;
}

std::vector< std::string > MainWindow::keyPreparation(std::string key)
{
    // 0001001100110100010101110111100110011011101111001101111111110001

    std::string permutedKey = "";
    int PC1_permutations[56] = {
        57, 49, 41, 33, 25, 17, 9, 1, 58, 50, 42, 34, 26, 18,
        10, 2, 59, 51, 43, 35, 27, 19, 11, 3, 60, 52, 44, 36,
        63, 55, 47, 39, 31, 23, 15, 7, 62, 54, 46, 38, 30, 22,
        14, 6, 61, 53, 45, 37, 29, 21, 13, 5, 28, 20, 12, 4
    };

    for(int i=0;i<56; ++i)
    {
        permutedKey += key[PC1_permutations[i]-1];
    }

//    std::cout << key << std::endl;
//    std::cout << permutedKey << std::endl;
//    std::cout << permutedKey.length() << std::endl;


    int shifts[16] = {1, 1, 2, 2, 2, 2, 2, 2, 1, 2, 2, 2, 2, 2, 2, 1};

    std::vector< std::pair<std::string, std::string> > keys;

    std::string C0 = permutedKey.substr(0,28);
    std::string D0 = permutedKey.substr(28,56);

//    std::cout << "C0 : " << C0 << std::endl;
//    std::cout << "D0 : " << D0 << std::endl;

    keys.push_back(std::make_pair(C0, D0));

    for(int i=1 ; i<17 ; ++i)
    {
        std::string C = keys[i-1].first;
        std::string D = keys[i-1].second;

        C = C.substr(shifts[i-1], C.length()) + C.substr(0, shifts[i-1]);
        D = D.substr(shifts[i-1], D.length()) + D.substr(0, shifts[i-1]);

        keys.push_back(std::make_pair(C, D));

//        std::cout << "C" << i << " : " << C << std::endl;
//        std::cout << "D" << i << " : " << D << std::endl;
    }


    int PC2_permutations[48] = {
        14, 17, 11, 24, 1, 5, 3, 28, 15, 6, 21, 10,
        23, 19, 12, 4, 26, 8, 16, 7, 27, 20, 13, 2,
        41, 52, 31, 37, 47, 55, 30, 40, 51, 45, 33, 48,
        44, 49, 39, 56, 34, 53, 46, 42, 50, 36, 29, 32
    };

    std::vector<std::string> finalKeys;

    for(int i=0;i<16;++i)
    {
        std::string k = keys[i+1].first + keys[i+1].second;
        std::string fk = "";

        for(int j=0;j<48;++j)
        {
            fk += k[PC2_permutations[j]-1];
        }
        finalKeys.push_back(fk);
//        std::cout << fk << std::endl;
    }

    std::cout << std::endl << ">[BEGIN] Keys generated Successfully" << std::endl << std:: endl;

    for(int i=0; i<finalKeys.size(); ++i)
    {
        std::cout << "Key " << i+1 << ": " << finalKeys[i] << std::endl;
    }

    std::cout << std::endl << ">[END] Keys generated Successfully" << std::endl << std:: endl;


    return finalKeys;
}

QString MainWindow::DESEncryption(std::string dataBlock, std::vector< std::string > keys)
{
    // 0000000100100011010001010110011110001001101010111100110111101111

    std::string permutedBlock = "";

    int initPermutation[64] = {
        58,    50,   42,    34,    26,   18,    10,    2,
        60,    52,   44,    36,    28,   20,    12,    4,
        62,    54,   46,    38,    30,   22,    14,    6,
        64,    56,   48,    40,    32,   24,    16,    8,
        57,    49,   41,    33,    25,   17,     9,    1,
        59,    51,   43,    35,    27,   19,    11,    3,
        61,    53,   45,    37,    29,   21,    13,    5,
        63,    55,   47,    39,    31,   23,    15,    7
    };

    for(int i=0 ; i<64 ; ++i)
    {
        permutedBlock += dataBlock[initPermutation[i]-1];
    }

    std::string L0 = permutedBlock.substr(0, 32);
    std::string R0 = permutedBlock.substr(32, 64);


    std::cout << "L0 : " << L0 << std::endl;
    std::cout << "R0 : " << R0 << std::endl;

    std::vector< std::pair<std::string, std::string> > data;
    data.push_back(std::make_pair(L0, R0));

    for(int i=1;i<17;++i)
    {
        std::string L = data[i-1].second;

        std::string R = apply_xor(
            data[i-1].first,
            apply_func_F(apply_func_E(data[i-1].second), keys[i-1])
        );

        data.push_back(std::make_pair(L, R));

        std::cout << "L" << i << " : " << L << std::endl;
        std::cout << "R" << i << " : " << R << std::endl;
    }

    std::string encryptedDataReversedKey = "";
    encryptedDataReversedKey += data[data.size()-1].second;
    encryptedDataReversedKey += data[data.size()-1].first;

    std::string finalPermutedBlock = "";

    int finalPermutation[64] = {
        40, 8, 48, 16, 56, 24, 64, 32,
        39, 7, 47, 15, 55, 23, 63, 31,
        38, 6, 46, 14, 54, 22, 62, 30,
        37, 5, 45, 13, 53, 21, 61, 29,
        36, 4, 44, 12, 52, 20, 60, 28,
        35, 3, 43, 11, 51, 19, 59, 27,
        34, 2, 42, 10, 50, 18, 58, 26,
        33, 1, 41,  9, 49, 17, 57, 25
    };

    for(int i=0 ; i<64 ; ++i)
    {
        finalPermutedBlock += encryptedDataReversedKey[finalPermutation[i]-1];
    }

    return QString(finalPermutedBlock.c_str());
}

std::string MainWindow::apply_xor(std::string str1, std::string str2)
{
    if(str1.length() != str2.length())
        std::cout << "Error in XORed Strings, Length Not Equal" << std::endl;

    std::string result = "";
    for(int i=0;i<str1.length();++i)
    {
        if(str1[i] == str2[i])
            result += '0';
        else
            result += '1';
    }

    return result;
}

std::string MainWindow::apply_func_F(std::string str1, std::string str2)
{
    // result is 48 bit
    std::string result = apply_xor(str1, str2);

    int sboxes[8][4][16] =
    {
        {
            { 14,  4,  13,  1,   2, 15,  11,  8,   3, 10,   6, 12,   5,  9,   0,  7 },
            {  0, 15,   7,  4,  14,  2,  13,  1,  10,  6,  12, 11,   9,  5,   3,  8 },
            {  4,  1,  14,  8,  13,  6,   2, 11,  15, 12,   9,  7,   3, 10,   5,  0 },
            { 15, 12,   8,  2,   4,  9,   1,  7,   5, 11,   3, 14,  10,  0,   6, 13 }
        },
        {
            { 15,  1,   8, 14,   6, 11,   3,  4,   9,  7,   2, 13,  12,  0,   5, 10 },
            {  3, 13,   4,  7,  15,  2,   8, 14,  12,  0,   1, 10,   6,  9,  11,  5 },
            {  0, 14,   7, 11,  10,  4,  13,  1,   5,  8,  12,  6,   9,  3,   2, 15 },
            { 13,  8,  10,  1,   3, 15,   4,  2,  11,  6,   7, 12,   0,  5,  14,  9 }
        },
        {
            { 10,  0,   9, 14,   6,  3,  15,  5,   1, 13,  12,  7,  11,  4,   2,  8 },
            { 13,  7,   0,  9,   3,  4,   6, 10,   2,  8,   5, 14,  12, 11,  15,  1 },
            { 13,  6,   4,  9,   8, 15,   3,  0,  11,  1,   2, 12,   5, 10,  14,  7 },
            {  1, 10,  13,  0,   6,  9,   8,  7,   4, 15,  14,  3,  11,  5,   2, 12 }
        },
        {
            {  7, 13,  14,  3,   0,  6,   9, 10,   1,  2,   8,  5,  11, 12,   4, 15 },
            { 13,  8,  11,  5,   6, 15,   0,  3,   4,  7,   2, 12,   1, 10,  14,  9 },
            { 10,  6,   9,  0,  12, 11,   7, 13,  15,  1,   3, 14,   5,  2,   8,  4 },
            {  3, 15,   0,  6,  10,  1,  13,  8,   9,  4,   5, 11,  12,  7,   2, 14 }
        },
        {
            {  2, 12,   4,  1,   7, 10,  11,  6,   8,  5,   3, 15,  13,  0,  14,  9 },
            { 14, 11,   2, 12,   4,  7,  13,  1,   5,  0,  15, 10,   3,  9,   8,  6 },
            {  4,  2,   1, 11,  10, 13,   7,  8,  15,  9,  12,  5,   6,  3,   0, 14 },
            { 11,  8,  12,  7,   1, 14,   2, 13,   6, 15,   0,  9,  10,  4,   5,  3 }
        },
        {
            { 12,  1,  10, 15,   9,  2,   6,  8,   0, 13,   3,  4,  14,  7,   5, 11 },
            { 10, 15,   4,  2,   7, 12,   9,  5,   6,  1,  13, 14,   0, 11,   3,  8 },
            {  9, 14,  15,  5,   2,  8,  12,  3,   7,  0,   4, 10,   1, 13,  11,  6 },
            {  4,  3,   2, 12,   9,  5,  15, 10,  11, 14,   1,  7,   6,  0,   8, 13 }
        },
        {
            {  4, 11,   2, 14,  15,  0,   8, 13,   3, 12,   9,  7,   5, 10,   6,  1 },
            { 13,  0,  11,  7,   4,  9,   1, 10,  14,  3,   5, 12,   2, 15,   8,  6 },
            {  1,  4,  11, 13,  12,  3,   7, 14,  10, 15,   6,  8,   0,  5,   9,  2 },
            {  6, 11,  13,  8,   1,  4,  10,  7,   9,  5,   0, 15,  14,  2,   3, 12 }
        },
        {
            { 13,  2,   8,  4,   6, 15,  11,  1,  10,  9,   3, 14,   5,  0,  12,  7 },
            {  1, 15,  13,  8,  10,  3,   7,  4,  12,  5,   6, 11,   0, 14,   9,  2 },
            {  7, 11,   4,  1,   9, 12,  14,  2,   0,  6,  10, 13,  15,  3,   5,  8 },
            {  2,  1,  14,  7,   4, 10,   8, 13,  15, 12,   9,  0,   3,  5,   6, 11 }
        }
    };

    std::string output = "";
    std::string outerBits = "";
    std::string innerBits = "";

    for(int i=0, s=0 ; i<48 ; i+=6, s++)
    {
        outerBits += result[i];
        outerBits += result[i+5];

        innerBits += result[i+1];
        innerBits += result[i+2];
        innerBits += result[i+3];
        innerBits += result[i+4];

        int row = std::stoi(outerBits, nullptr, 2);
        int column = std::stoi(innerBits, nullptr, 2);

        int valInSBox = sboxes[s][row][column];

        output += std::bitset<4>(valInSBox).to_string();

        outerBits = "";
        innerBits = "";
    }

    std::string permutedOutput = "";

    int permutations[32] = {
        16,  7, 20, 21,
        29, 12, 28, 17,
         1, 15, 23, 26,
         5, 18, 31, 10,
         2,  8, 24, 14,
        32, 27,  3,  9,
        19, 13, 30,  6,
        22, 11,  4, 25
    };

    for(int i=0; i<32; ++i)
    {
        permutedOutput += output[permutations[i]-1];
    }

    return permutedOutput;
}

std::string MainWindow::apply_func_E(std::string str)
{
    std::string result = "";

    int ePermutations[48] = {
         32,     1,    2,     3,     4,    5,
          4,     5,    6,     7,     8,    9,
          8,     9,   10,    11,    12,   13,
         12,    13,   14,    15,    16,   17,
         16,    17,   18,    19,    20,   21,
         20,    21,   22,    23,    24,   25,
         24,    25,   26,    27,    28,   29,
         28,    29,   30,    31,    32,    1
    };

    for(int i=0;i<48;++i)
    {
        result += str[ePermutations[i]-1];
    }

    return result;
}


// improved DES with text Methods
QString MainWindow::ewIDES(QString plainText, std::string key)
{
    std::vector< std::string > keys = keyPreparation(key);
    std::vector< std::string > blocks = textToBinaryAscii(plainText.toStdString());

    QString encryptedText;

    for(int i=0; i<blocks.size(); ++i)
        encryptedText += DESEncryption(blocks[i], keys);

//    encryptedText = QString::fromStdString(binaryAsciiToText(encryptedText.toStdString()));

    return encryptedText;
}

QString MainWindow::dwIDES(QString encryptedText, std::string key)
{
    std::vector< std::string > keys = keyPreparation(key);
    std::reverse(keys.begin(), keys.end());

    std::string stdPlainText = encryptedText.toStdString();
    std::string allPlainText = "";

    for(int i=0; i<encryptedText.size()/64; ++i)
    {
        allPlainText += DESEncryption(stdPlainText.substr(i*64, 64), keys).toStdString();
    }

    return QString::fromStdString(binaryAsciiToText(allPlainText));
}

std::vector< std::string > MainWindow::textToBinaryAscii(std::string str)
{
    std::vector< std::string > blocksOfData;

    for(int i=0; i<str.size()/8; ++i)
    {
        std::string blockStr = str.substr(i*8, 8);
        std::string block = "";

        for(int i=0; i<8; ++i)
            block += charToBinaryAscii(blockStr[i]);

        blocksOfData.push_back(block);
    }

    if(str.size()%8 != 0)
    {
        int start = ((int)str.size()/8)*8;
        int length = (int)str.size()- start;

        std::string blockStr = str.substr(start, length);
        for(int i=0; i<(8-length); ++i)
            blockStr += " ";

        std::string block = "";
        for(int i=0; i<8; ++i)
            block += charToBinaryAscii(blockStr[i]);
        blocksOfData.push_back(block);
    }

    return blocksOfData;
}

std::string MainWindow::binaryAsciiToText(std::string str)
{
    std::string blocksOfData = "";

    for(int i=0; i<str.size()/64; ++i)
    {
        std::string blockStr = str.substr(i*64, 64);
        std::string block = "";

        for(int i=0; i<8; ++i)
        {
           std::string ascii = blockStr.substr(i*8, 8);
           block += binaryAsciiToChar(ascii);
        }
        blocksOfData += block;
    }

    return blocksOfData;
}

std::string MainWindow::charToBinaryAscii(char ch)
{
    return std::bitset<8>(int(ch)).to_string();
}

char MainWindow::binaryAsciiToChar(std::string binaryAscii)
{
    return char(std::bitset<8>(binaryAscii).to_ulong());
}





// RSA Methods

double MainWindow::ewRSA(double msg, double p, double q)
{
    // generate public as first, private as second key
    std::pair<double,double> keys = RSAKeys(p, q);

    double n = p*q;
    double e = keys.first;

    return RSAEncryption(msg, n, e);
}

double MainWindow::dwRSA(double msg, double p, double q)
{
    // generate public as first, private as second key
    std::pair<double,double> keys = RSAKeys(p, q);

    int n = p*q;
    int d = keys.second;

    return RSADecryption(msg, n, d);
}

double MainWindow::RSAEncryption(double msg, double n, double e)
{
    // Encryption c = (msg ^ e) % n
    double c = pow(msg, e);
    c = fmod(c, n);
    return c;
}

double MainWindow::RSADecryption(double msg, double n, double d)
{
    // Decryption m = (c ^ d) % n
    double m = pow(msg, d);
    m = fmod(m, n);
    return m;
}

std::pair<double, double> MainWindow::RSAKeys(double p, double q)
{
    // Finding public key; e stands for encrypt.
    double e = 2;
    double phi = (p-1)*(q-1);
    while (e < phi)
    {
        // e must be co-prime to phi and
        // smaller than phi.
        if (gcd(e, phi)==1)
            break;
        else
            e++;
    }

    // Private key (d stands for decrypt)
    // choosing d such that it satisfies
    // d*e = 1 + k * totient

    int d = e;
    while((int)(d*e)%((int)phi) != 1)
    {
        d++;
    }

    return std::make_pair(e, d);
}

int MainWindow::gcd(int a, int h)
{
    int temp;
    while (1)
    {
        temp = a%h;
        if (temp == 0)
          return h;
        a = h;
        h = temp;
    }
}





// RC4 Methods

QString MainWindow::ewRC4(QString msg, QString key)
{
    std::vector<int> k;

    // initialize key
    std::string stdCppKey = key.toStdString();
    for(int i=0; i<stdCppKey.length(); ++i)
        k.push_back(int(stdCppKey[i] - '0'));

    std::vector<int> s(256);
    std::vector<int> t(256);

    // initialize vector S to [0:255]
    for(int i=0; i<256; ++i)
        s[i] = i;

    // initialize vector T from key K
    for(int i=0; i<256; ++i)
        t[i] = k[i%k.size()];

    // initial Permutation Of S
    int j = 0;
    for(int i=0; i<256; ++i)
    {
        j = (j + s[i] + t[i])%256;
        std::swap(s[i], s[j]);
    }

    // prepare msg
    std::vector< std::bitset<8> > msg_bytes = bytesOfMessage(msg.toStdString());


    // generate a key for each byte of input
    // e.g input: 5 bytes, generates output: 5 bytes
    std::vector< std::bitset<8> > keys = keysGenerator((int)msg_bytes.size(), s);

    return RC4Encryption(msg_bytes, keys);

}

QString MainWindow::dwRC4(QString msg, QString key)
{
    return ewRC4(msg, key);
}

QString MainWindow::RC4Encryption(std::vector< std::bitset<8> > msg_bytes, std::vector< std::bitset<8> > keys)
{
    std::string result = "";
    for (int i = 0; i < msg_bytes.size(); ++i)
    {
        std::bitset<8> temp = std::bitset<8>(msg_bytes[i] ^ keys[i]);
        result += temp.to_string();
    }

    // Debugging output
    std::cout << "> Debugging Statements" << std::endl;

    std::cout << "I/P: " ;
    for(int t=0; t<msg_bytes.size(); ++t)
        std::cout << msg_bytes[t];
    std::cout << std::endl;

    std::cout << "Key: ";
    for(int t=0; t<keys.size(); ++t)
        std::cout << keys[t].to_string();
    std::cout << std::endl;
    std::cout << "O/P: " << result << std::endl;

    return QString::fromStdString(result);
}

std::vector< std::bitset<8> > MainWindow::keysGenerator(int msg_length, std::vector<int> s)
{
    std::vector< std::bitset<8> > keys(msg_length);

    int i=0, j=0, k=0;
    for (int lc = 0; lc < msg_length; ++lc)
    {
        i = (i+1)%256;
        j = (j+s[i])%256;
        std::swap(s[i], s[j]);
        k = s[(s[i]+s[j])%256];
        keys[lc] = std::bitset<8>(k);
    }

    return keys;
}

std::vector< std::bitset<8> > MainWindow::bytesOfMessage(std::string msg)
{
    std::vector< std::bitset<8> > msg_bytes;

    for(int i=0; i<(msg.length()/8); ++i)
    {
        std::string msg_byte = "";
        for(int j=0; j<8; ++j)
        {
            int idx = j + i*8;
            msg_byte += msg[idx];
        }
        msg_bytes.push_back(std::bitset<8>(msg_byte));
    }

    return msg_bytes;
}






