#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QString>
#include <QtDebug>
#include <QMessageBox>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_esit_clicked()
{
    switch (transact) {
    case '+':
        addition_calculate();
        break;
    case '-':
        subtraction_calculate();
        break;
    case '*':
        multiplication_calculate();
        break;
    case '/':
        division_calculate();
        break;

    }
}

double MainWindow::addition_calculate(){
    double saveForCollectionTwo =  ui->textEdit_calculate->toPlainText().toDouble();
    double resultAddition = saveForCollection + saveForCollectionTwo;
    ui->textEdit_calculate->setText(QString::number(resultAddition));
    return resultAddition;

}
double MainWindow::subtraction_calculate(){
    double saveForSubructionTwo = ui->textEdit_calculate->toPlainText().toDouble();
    double resultSubruction = SaveForSubruction - saveForSubructionTwo;
    ui->textEdit_calculate->setText(QString::number(resultSubruction));
    return  resultSubruction;

}
double MainWindow::multiplication_calculate(){
    double saveForMultiplicationTwo = ui->textEdit_calculate->toPlainText().toDouble();
    double resultMultiplication = SaveForMultiplication * saveForMultiplicationTwo;
    ui->textEdit_calculate->setText(QString::number(resultMultiplication));
    return resultMultiplication;

}
double MainWindow::division_calculate(){
    double SaveForDivisionTwo = ui->textEdit_calculate->toPlainText().toDouble();
    double resultDivision = SaveForDivision /SaveForDivisionTwo;
    ui->textEdit_calculate->setText(QString::number(resultDivision));
    return resultDivision;
}


void MainWindow::on_pushButton_c_clicked()
{
    ui->textEdit_calculate->clear();
}

void MainWindow::on_pushButton_bir_clicked()
{
    QString oldText =  ui->textEdit_calculate->toPlainText();
    ui->textEdit_calculate->setPlainText(oldText + "1");

}

void MainWindow::on_pushButton_iki_clicked()
{
    QString oldText =  ui->textEdit_calculate->toPlainText();
    ui->textEdit_calculate->setPlainText(oldText + "2");
}

void MainWindow::on_pushButton_uc_clicked()
{
    QString oldText =  ui->textEdit_calculate->toPlainText();
    ui->textEdit_calculate->setPlainText(oldText + "3");
}

void MainWindow::on_pushButton_dort_clicked()
{
    QString oldText =  ui->textEdit_calculate->toPlainText();
    ui->textEdit_calculate->setPlainText(oldText + "4");
}

void MainWindow::on_pushButton_bes_clicked()
{
    QString oldText =  ui->textEdit_calculate->toPlainText();
    ui->textEdit_calculate->setPlainText(oldText + "5");
}

void MainWindow::on_pushButton_alti_clicked()
{
    QString oldText =  ui->textEdit_calculate->toPlainText();
    ui->textEdit_calculate->setPlainText(oldText + "6");
}

void MainWindow::on_pushButton_yedi_clicked()
{
    QString oldText =  ui->textEdit_calculate->toPlainText();
    ui->textEdit_calculate->setPlainText(oldText + "7");
}

void MainWindow::on_pushButton_sekiz_clicked()
{
    QString oldText =  ui->textEdit_calculate->toPlainText();
    ui->textEdit_calculate->setPlainText(oldText + "8");
}

void MainWindow::on_pushButton_dokuz_clicked()
{
    QString oldText =  ui->textEdit_calculate->toPlainText();
    ui->textEdit_calculate->setPlainText(oldText + "9");

}

void MainWindow::on_pushButton_sifir_clicked()
{
    QString oldText =  ui->textEdit_calculate->toPlainText();
    ui->textEdit_calculate->setPlainText(oldText + "0");

}

void MainWindow::on_pushButton_virgul_clicked()
{
    QString saveComma =  ui->textEdit_calculate->toPlainText();
    ui->textEdit_calculate->clear();
    saveComma  = saveComma +'.';
    ui->textEdit_calculate->setText(saveComma);

}

void MainWindow::on_pushButton_arti_clicked()
{
    saveForCollection = ui->textEdit_calculate->toPlainText().toDouble();
    transact = addition;
    ui->textEdit_calculate->clear();
}

void MainWindow::on_pushButton_eksi_clicked()
{
    SaveForSubruction  = ui->textEdit_calculate->toPlainText().toDouble();
    transact =subruction;
    ui->textEdit_calculate->clear();
}

void MainWindow::on_pushButton_carpi_clicked()
{
    SaveForMultiplication =ui->textEdit_calculate->toPlainText().toDouble();
    transact  = multiplication;
    ui->textEdit_calculate->clear();
}

void MainWindow::on_pushButton_bol_clicked()
{
    SaveForDivision = ui->textEdit_calculate->toPlainText().toDouble();
    transact = division;
    ui->textEdit_calculate->clear();
}

void MainWindow::on_pushButton_kare_clicked()
{
    squareCalculat = ui->textEdit_calculate->toPlainText().toDouble();
    ui->textEdit_calculate->clear();
    double resultSquare = squareCalculat * squareCalculat;
    ui->textEdit_calculate->setText(QString::number(resultSquare));
}

void MainWindow::on_pushButton_negatif_clicked()
{
    double newValue = ui->textEdit_calculate->toPlainText().toDouble();
    ui->textEdit_calculate->clear();
    if(newValue>0){
        newValue = newValue*(-1);
        ui->textEdit_calculate->setText(QString::number(newValue));
        }
    else if(newValue<0){
        newValue = newValue*(-1);
         ui->textEdit_calculate->setText(QString::number(newValue));
    }else
        QString msgBox;
        QMessageBox msgBox;
        msgBox.setText("Pleace. Enter valid a value.");
        msgBox.exec();
}
