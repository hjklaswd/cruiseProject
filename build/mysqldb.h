#ifndef MYSQLDB_H
#define MYSQLDB_H
#include <QtSql/qsqldatabase.h>
#include <QDebug>
#include <QPluginLoader>

class MySQLDB
{
public:
    MySQLDB();
    ~MySQLDB();
    void loadMySqlDriver();
};

#endif // MYSQLDB_H
