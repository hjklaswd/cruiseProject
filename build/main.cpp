#include <QApplication>
#include <QDir>
#include <QFileInfo>
#include "mainwidget.h"
#include "mysqldb.h"
#define XMLFILENAME "info.xml"

void createXml(QString fileName)
{
    QFile xmlFile(fileName);
    qDebug()<<fileName << " &&&&&&&&&&&&&& ";
    xmlFile.open(QIODevice::WriteOnly | QIODevice::Text);
    xmlFile.close();
}
void getXmlInfo()
{
    QString xmlPath = QDir::currentPath();
    QString xmlFileName = xmlPath + "/" + XMLFILENAME;
    qDebug()<<xmlFileName << " &&&&&&&&&&&&&& ";
    QFileInfo xmlInfo(xmlFileName);
    if(!xmlInfo.exists())
    {
        qDebug()<<"no";
        createXml(xmlFileName);
    }
}
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    getXmlInfo();
    mainWidget w;
    w.show();
    return a.exec();
}


