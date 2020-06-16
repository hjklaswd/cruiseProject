#include "InterfaceControl.h"
#include "ui_widget.h"

InterfaceControl::InterfaceControl(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
}

InterfaceControl::~InterfaceControl()
{
    delete ui;
}

