#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include <iostream>
#include <QList>
#include <QDebug>
#include <qdebug.h>
using namespace std;

//QList<QString> milista;
//QString miobjeto;

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


void MainWindow::on_btnCapturar_clicked()
{
    milista.append("Hola");
    milista.append("Adios");
    milista.append("Por fin");
    milista.append("Creo que ya");
    milista.append(":D");

    qDebug() << milista;

    tam = milista.count()-2;
    for(int i; i<=tam; i++){
    ui->plainTextEdit->insertPlainText(milista.takeFirst()+" | "); //.takefirst()
    }
    ui->plainTextEdit->insertPlainText(milista.back());
}

