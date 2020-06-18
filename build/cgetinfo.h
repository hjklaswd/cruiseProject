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
    void WriteXml(QString passWord);
private:
    void CreateXml();
    void ReadXml();
private:
    bool m_bIsFirstLogin;                   //是否需要修改初始密码
    QString m_strUser;                      //xml文件中的用户名
    QString m_strPassWord;                  //xml文件中的密码
    QString m_strXmlPath;                   //xml的路径
};

#endif // CGETINFO_H
