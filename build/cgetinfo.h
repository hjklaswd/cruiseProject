#ifndef CGETINFO_H
#define CGETINFO_H
#define XMLFILENAME "info.xml"

#include <QString>
#include <QDir>
#include <QFileInfo>
#include <QDomDocument>
#include <QDebug>

class CGetInfo
{
public:
    CGetInfo();

    void GetXmlInfo();
    bool GetIsFirstLogin();
    QString GetUser();
    QString GetPassWord();
private:
    void CreateXml(QString fileName);
    void ReadXml(QString fileName);
private:
    bool m_bIsFirstLogin;
    QString m_strUser;
    QString m_strPassWord;
};

#endif // CGETINFO_H
