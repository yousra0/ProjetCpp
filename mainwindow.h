#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include <QTableWidget>
#include <QMainWindow>
#include<QMessageBox>
#include <QApplication>
#include <QPushButton>
#include "visite.h"
#include "cryptage.h"
#include <QStandardItemModel>
#include <QStandardItem>
#include <QTableView>
#include <QtCharts/QPieSeries>
#include <QtCharts/QPieSlice>
#include <QtCharts/QChart>
#include <QDialog>
#include <QPixmap>
#include <QFile>
#include <QDialog>
#include <QFileDialog>
#include <QUrl>
#include <QSystemTrayIcon>
#include<QPropertyAnimation>
#include <QRegularExpression>
#include <QTranslator>
#include <QPixmap>
#include <QtNetwork/QAbstractSocket>
#include <QtNetwork/QSslSocket>
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
#include <QMainWindow>
#include <QStackedWidget>
#include <QtGui>
#include <QMainWindow>

#include <QtNetwork/QAbstractSocket>
#include <QtNetwork/QSslSocket>
#include <QPixmap>
#include <QFile>
#include <QDialog>
#include <QFileDialog>

#include <QMainWindow>
#include <string>
#include <cstring>
#include <cctype>
#include <QMessageBox>
#include <iostream>
#include <bitset>
#include <sstream>
#include <algorithm>
#include <QUrl>
#include <QSystemTrayIcon>

#include<QPropertyAnimation>
#include <QRegularExpression>
#include <QTranslator>
#include <QPixmap>
#include <QMainWindow>
#include <QStackedWidget>
#include <QtGui>
#include <QMainWindow>

#include <QtNetwork/QAbstractSocket>
#include <QtNetwork/QSslSocket>
#include <QPixmap>
#include <QFile>
#include <QDialog>
#include <QFileDialog>

#include <QMainWindow>
#include <string>
#include <cstring>
#include <cctype>
#include <QMessageBox>
#include <iostream>
#include <bitset>
#include <sstream>
#include <algorithm>
#include <QUrl>
#include <QSystemTrayIcon>

#include<QPropertyAnimation>
#include <QRegularExpression>
#include <QTranslator>
#include <QPixmap>

#include<QCamera>
#include<QCameraViewfinder>
#include<QCameraImageCapture>
#include<QVBoxLayout>
#include<QMenu>
#include<QAction>
QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }

QT_END_NAMESPACE
struct Position {
    int x;
    int y;
};
namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_pb_ajouter_clicked();


    void on_pb_modifier_clicked();

    void on_pushButton_rechercher_clicked();

    void on_pushButton_PDF_clicked();
    void on_triID_clicked();
    void on_nom_az_clicked();
    void on_nom_desc_clicked();
    void on_ID_desc_clicked();

    void on_statsmed_clicked();



    void on_pushButton_encrypt_clicked();




             void on_pushButton_decrypt_clicked();
             void on_actionReset_Fields_triggered();
             void on_actionClear_Plain_Text_triggered();
             void on_actionClear_Encrypted_Text_triggered();
             void on_actionExit_triggered();
             void on_actionAbout_Qt_triggered();
             void on_comboBox_currentTextChanged(const QString &arg1);
private:
    Ui::MainWindow *ui;
    Visite v;
    Visite *ve;


    bool dateTimeEditS_hadfocus = false;
    bool dateTimeEditE_hadfocus = false;

    QString ewCaesarCipher(QString plainText, int key);
        QString dwCaesarCipher(QString encryptedText, int key);

        QString ewPlayfair(QString plainText, QString secret);
        QString dwPlayfair(QString encryptedText, QString secret);

        char pfMatrix[5][5];
      bool inSameRow(Position p1, Position p2);
     bool inSameColumn(Position p1, Position p2);
        void normalizePFString(std::string &str);
        void normalizePFSecret(std::string &secret);
        void populatePFMatrix(std::string secret);
        std::string encryptPFString(std::string plainStdText);
        std::string decryptPFString(std::string encryptedStdText);
       Position findPositionByChar(char ch);
        char findCharByPosition(Position p);

        QString ewDES(QString plainText, std::string key);
        QString dwDES(QString encryptedText, std::string key);
        std::vector<std::string> keyPreparation(std::string key);
        QString DESEncryption(std::string dataBlock, std::vector< std::string > keys);
        std::string apply_xor(std::string str1, std::string str2);
        std::string apply_func_F(std::string str1, std::string str2);
        std::string apply_func_E(std::string str);

        QString ewIDES(QString plainText, std::string key);
        QString dwIDES(QString encryptedText, std::string key);
        std::vector< std::string > textToBinaryAscii(std::string str);
        std::string binaryAsciiToText(std::string str);
        std::string charToBinaryAscii(char ch);
        char binaryAsciiToChar(std::string binaryAscii);

        double ewRSA(double msg, double p, double q);
        double dwRSA(double msg, double p, double q);
        double RSAEncryption(double msg, double n, double e);
        double RSADecryption(double msg, double n, double d);
        std::pair<double, double> RSAKeys(double p, double q);
        int gcd(int a, int h);

        QString ewRC4(QString msg, QString key);
        QString dwRC4(QString msg, QString key);
        QString RC4Encryption(std::vector< std::bitset<8> > msg_bytes, std::vector< std::bitset<8> > keys);
        std::vector< std::bitset<8> > keysGenerator(int msg_length, std::vector<int> s);
        std::vector< std::bitset<8> > bytesOfMessage(std::string msg);

};

#endif // MAINWINDOW_H
