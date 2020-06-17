#ifndef MYSQLDB_H
#define MYSQLDB_H
#include <QtSql/qsqldatabase.h>
#include <QDebug>
#include <QPluginLoader>

class CMySQLDB
{
public:
    CMySQLDB();
    ~CMySQLDB();
    void LoadMySqlDriver();
};

#endif // MYSQLDB_H
