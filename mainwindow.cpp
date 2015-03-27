#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <string>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent), ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    input1 = 0;
    input2 = 0;
    answer = 0;
    inputString = "";
    decimal = false;
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_button1_clicked()
{
    if(inputString.length() < 10){
        inputString += "1";
        ui->numberView->display(inputString);
    }

}

void MainWindow::on_button2_clicked()
{
    if(inputString.length() < 10){
        inputString += "2";
        ui->numberView->display(inputString);
    }
}

void MainWindow::on_button3_clicked()
{
    if(inputString.length() < 10){
        inputString += "3";
        ui->numberView->display(inputString);
    }
}

void MainWindow::on_button4_clicked()
{
    if(inputString.length() < 10){
        inputString += "4";
        ui->numberView->display(inputString);
    }
}

void MainWindow::on_button5_clicked()
{
    if(inputString.length() < 10){
        inputString += "5";
        ui->numberView->display(inputString);
    }
}

void MainWindow::on_button6_clicked()
{
    if(inputString.length() < 10){
        inputString += "6";
        ui->numberView->display(inputString);
    }
}

void MainWindow::on_button7_clicked()
{
    if(inputString.length() < 10){
        inputString += "7";
        ui->numberView->display(inputString);
    }
}

void MainWindow::on_button8_clicked()
{
    if(inputString.length() < 10){
        inputString += "8";
        ui->numberView->display(inputString);
    }
}

void MainWindow::on_button9_clicked()
{
    if(inputString.length() < 10){
        inputString += "9";
        ui->numberView->display(inputString);
    }
}

void MainWindow::on_button0_clicked()
{
    if(inputString.length() < 10){
        inputString += "0";
        ui->numberView->display(inputString);
    }
}

void MainWindow::on_decimalButton_clicked()
{
    if(inputString.length() < 10){
        inputString += ".";
        ui->numberView->display(inputString);
    }
}

void MainWindow::on_enterButton_clicked()
{
    input2 = inputString.toDouble();
    if(function == "add"){
        answer = input1 + input2;
    }else if(function == "subtract"){
        answer = input1 - input2;
    }else if(function == "multiply"){
        answer = input1 * input2;
    }else if(function == "divide"){
        answer = input1 / input2;
    }

    inputString = QString::number(answer);
    ui->numberView->display(inputString);
    inputString = "";

}

void MainWindow::on_addButton_clicked()
{
    input1 = inputString.toDouble();
    function = "add";
    inputString = "";
}

void MainWindow::on_subtractButton_clicked()
{
    input1 = inputString.toDouble();
    function = "subtract";
    inputString = "";
}

void MainWindow::on_multiplyButton_clicked()
{
    input1 = inputString.toDouble();
    function = "multiply";
    inputString = "";
}

void MainWindow::on_divideButton_clicked()
{
    input1 = inputString.toDouble();
    function = "divide";
    inputString = "";
}
