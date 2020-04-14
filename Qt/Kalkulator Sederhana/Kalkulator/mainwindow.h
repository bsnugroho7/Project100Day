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

private slots:
    void on_pushButton_clicked();


    //void on_TambahButton_clicked();

    void on_KurangButton_clicked();

    void on_KaliButton_clicked();

    void on_BagiButton_clicked();

    void on_in1_clicked();

    void on_in2_clicked();

    void on_in3_clicked();

    void on_in4_clicked();

    void on_in5_clicked();

    void on_in6_clicked();

    void on_in7_clicked();

    void on_pushButton_8_clicked();

    void on_in9_clicked();

    void on_in0_clicked();

    void on_optim_clicked();

    void on_opplus_clicked();

    void on_opeq_clicked();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
