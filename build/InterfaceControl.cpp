#include "InterfaceControl.h"
#include "ui_widget.h"

CInterfaceControl::CInterfaceControl(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
}

CInterfaceControl::~CInterfaceControl()
{
    delete ui;
}

