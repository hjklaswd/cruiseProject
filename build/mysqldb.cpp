#include "mysqldb.h"

CMySQLDB::CMySQLDB()
{
    QSqlDatabase db = QSqlDatabase::addDatabase("QMYSQL");
    db.setHostName("192.168.5.19");
    db.setDatabaseName("test");
    db.setPort(3306);
    db.setUserName("root");
    db.setPassword("root");
    bool bisOpenn = db.open();          //打开数据库连接
    qDebug()<<"bisOpenn="<<bisOpenn;

}

CMySQLDB::~CMySQLDB()
{

}

void CMySQLDB::LoadMySqlDriver() {
    QPluginLoader loader;
    // MySQL 驱动插件的路径
    loader.setFileName("D:/Qt/Qt5.12.8/5.12.8/mingw73_64/plugins/sqldrivers/qsqlmysqld.dll");
    qDebug() << loader.load();
    qDebug() << loader.errorString();
}
