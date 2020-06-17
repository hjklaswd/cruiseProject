#include "InterfaceControl.h"
#include "ui_widget.h"

CInterfaceControl::CInterfaceControl(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
    ,m_cGetInfo(NULL)
{
    ui->setupUi(this);
    Init();
}

CInterfaceControl::~CInterfaceControl()
{
    if(m_cGetInfo != NULL)
    {
        delete m_cGetInfo;
    }
    delete ui;
}

void CInterfaceControl::Init()
{

    m_cGetInfo = new CGetInfo();
}

