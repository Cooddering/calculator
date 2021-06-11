#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
public:
    double saveForCollection;
    double SaveForSubruction;
    double SaveForMultiplication;
    double SaveForDivision;
    double squareCalculat;


    double addition_calculate();
    double subtraction_calculate();
    double multiplication_calculate();
    double division_calculate();


    enum  transactCalculate{
        addition = '+',
        subruction = '-',
        multiplication = '*',
        division = '/',


    }transact;

private slots:
    void on_pushButton_c_clicked();
    void on_pushButton_bir_clicked();
    void on_pushButton_iki_clicked();
    void on_pushButton_uc_clicked();
    void on_pushButton_dort_clicked();
    void on_pushButton_bes_clicked();
    void on_pushButton_alti_clicked();
    void on_pushButton_yedi_clicked();
    void on_pushButton_sekiz_clicked();
    void on_pushButton_dokuz_clicked();
    void on_pushButton_sifir_clicked();
    void on_pushButton_virgul_clicked();
    void on_pushButton_arti_clicked();
    void on_pushButton_eksi_clicked();
    void on_pushButton_carpi_clicked();
    void on_pushButton_bol_clicked();
    void on_pushButton_esit_clicked();
    void on_pushButton_kare_clicked();
    void on_pushButton_negatif_clicked();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
