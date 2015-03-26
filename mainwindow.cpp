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
    if(decimal){
        currentInput += .1;
        inputString = QString::number(currentInput);
        ui->numberView->display(inputString);
    }else{
        currentInput = currentInput * 10;
        currentInput += 1;
        inputString = QString::number(currentInput);
        ui->numberView->display(inputString);
    }

}

void MainWindow::on_button2_clicked()
{
    currentInput = currentInput * 10;
    currentInput += 2;
    inputString = QString::number(currentInput);
    ui->numberView->display(inputString);
}

void MainWindow::on_button3_clicked()
{
    currentInput = currentInput * 10;
    currentInput += 3;
    inputString = QString::number(currentInput);
    ui->numberView->display(inputString);
}

void MainWindow::on_button4_clicked()
{
    currentInput = currentInput * 10;
    currentInput += 4;
    inputString = QString::number(currentInput);
    ui->numberView->display(inputString);
}

void MainWindow::on_button5_clicked()
{
    currentInput = currentInput * 10;
    currentInput += 5;
    inputString = QString::number(currentInput);
    ui->numberView->display(inputString);
}

void MainWindow::on_button6_clicked()
{
    currentInput = currentInput * 10;
    currentInput += 6;
    inputString = QString::number(currentInput);
    ui->numberView->display(inputString);
}

void MainWindow::on_button7_clicked()
{
    currentInput = currentInput * 10;
    currentInput += 7;
    inputString = QString::number(currentInput);
    ui->numberView->display(inputString);
}

void MainWindow::on_button8_clicked()
{
    currentInput = currentInput * 10;
    currentInput += 8;
    inputString = QString::number(currentInput);
    ui->numberView->display(inputString);
}

void MainWindow::on_button9_clicked()
{
    currentInput = currentInput * 10;
    currentInput += 9;
    inputString = QString::number(currentInput);
    ui->numberView->display(inputString);
}

void MainWindow::on_button0_clicked()
{
    currentInput = currentInput * 10;
    inputString = QString::number(currentInput);
    ui->numberView->display(inputString);
}

void MainWindow::on_decimalButton_clicked()
{
    currentInput += .0;
    inputString = QString::number(currentInput);
    ui->numberView->display(inputString);
}

void MainWindow::on_enterButton_clicked()
{

}
