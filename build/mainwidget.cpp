#include "mainwidget.h"
#include "ui_mainwidget.h"

mainWidget::mainWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::mainWidget),
    m_cInterfaceControl(NULL),
    m_cGetInfo(NULL)
{
    ui->setupUi(this);
    Init();
}

mainWidget::~mainWidget()
{
    if(m_cGetInfo != NULL)
    {
        delete m_cGetInfo;
        m_cGetInfo = NULL;
    }
    if(m_cInterfaceControl != NULL)
    {
        delete m_cInterfaceControl;
        m_cInterfaceControl = NULL;
    }
    delete ui;
}

void mainWidget::Init()
{
    ui->stackedWidgetLognin->setCurrentIndex(1);
    m_cInterfaceControl = new CInterfaceControl();
    m_cGetInfo = new CGetInfo();
    this->setWindowTitle(WINDOWSTITLE);
    int desktop_width = QApplication::desktop()->width()/2;
    int desktop_high = QApplication::desktop()->height()/2;
    this->setFixedSize(desktop_width, desktop_high);
    connect(ui->pushButtonLognin,SIGNAL(clicked()),this,SLOT(slotLognIn()));
}

void mainWidget::slotLognIn()
{
    m_cGetInfo->GetXmlInfo();
    QString user = ui->lineEditUserName->text();
    QString passWord = ui->lineEditPassWord->text();
    if(m_cGetInfo->GetUser() == user && m_cGetInfo->GetPassWord() == passWord)
    {
        if(m_cGetInfo->GetIsFirstLogin())
        {
            ui->stackedWidgetLognin->setCurrentIndex(2);
        }
        else
        {
            ui->stackedWidgetLognin->setCurrentIndex(0);
        }
    }else
    {
        ui->lineEditUserName->clear();
        ui->lineEditPassWord->clear();
    }

}
