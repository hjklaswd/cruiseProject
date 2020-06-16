#include "mainwidget.h"
#include "ui_mainwidget.h"

mainWidget::mainWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::mainWidget)
{
    ui->setupUi(this);
    this->setWindowTitle(WINDOWSTITLE);
}

mainWidget::~mainWidget()
{
    delete ui;
}
