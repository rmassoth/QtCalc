#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_button1_clicked();

    void on_button2_clicked();

    void on_button3_clicked();

    void on_button4_clicked();

    void on_button5_clicked();

    void on_button6_clicked();

    void on_button7_clicked();

    void on_button8_clicked();

    void on_button9_clicked();

    void on_enterButton_clicked();

    void on_button0_clicked();

    void on_decimalButton_clicked();

    void on_addButton_clicked();

    void on_subtractButton_clicked();

    void on_multiplyButton_clicked();

    void on_divideButton_clicked();

private:
    Ui::MainWindow *ui;
    double input1, input2, currentInput, answer;
    bool decimal;
    QString inputString, function;
};

#endif // MAINWINDOW_H
