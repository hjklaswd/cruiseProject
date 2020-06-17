#include "cgetinfo.h"

CGetInfo::CGetInfo()
{
    m_bIsFirstLogin = false;
}

void CGetInfo::GetXmlInfo()
{
    QString xmlPath = QDir::currentPath();
    QString xmlFileName = xmlPath + "/" + XMLFILENAME;
    qDebug()<<xmlFileName << " &&&&&&&&&&&&&& ";
    QFileInfo xmlInfo(xmlFileName);
    if(!xmlInfo.exists())
    {
        qDebug()<<"no";
        CreateXml(xmlFileName);
        m_bIsFirstLogin = true;
        return ;
    }else
    {
        ReadXml(xmlFileName);
    }
}

bool CGetInfo::GetIsFirstLogin()
{
    return m_bIsFirstLogin;
}

void CGetInfo::CreateXml(QString fileName)
{
    QFile xmlFile(fileName);
    qDebug()<<fileName << " &&&&&&&&&&&&&& ";
    if(!xmlFile.open(QIODevice::WriteOnly | QIODevice::Text))
    {
        return;
    }
    QDomDocument doc;
    //写入xml头部
    QDomProcessingInstruction instruction; //添加处理命令
    instruction=doc.createProcessingInstruction("xml","version=\"1.0\" encoding=\"UTF-8\"");
    doc.appendChild(instruction);
    //添加根节点
    QDomElement accountNumber=doc.createElement("accountNumber");
    doc.appendChild(accountNumber);
    QDomElement user = doc.createElement("User");
    accountNumber.appendChild(user);
    QDomText userText = doc.createTextNode("root");
    user.appendChild(userText);

    QDomElement passWord = doc.createElement("PassWord");
    accountNumber.appendChild(passWord);
    QDomText PWText = doc.createTextNode("123456");
    passWord.appendChild(PWText);

    QString xml = doc.toString();
    QTextStream xmlOutput(&xmlFile);
    xmlOutput<<xml;
    xmlFile.close();
}

void CGetInfo::ReadXml(QString fileName)
{

    QDomDocument doc;
    QFile xmlInfoFile(fileName);
    if(!xmlInfoFile.open(QIODevice::ReadOnly))
    {
        return ;
    }
    if(!doc.setContent(&xmlInfoFile))
    {
        xmlInfoFile.close();
        return;
    }
    xmlInfoFile.close();
    QDomElement accountNumber = doc.documentElement();
    QDomNode root = accountNumber.firstChild();

    QDomElement user = root.toElement();
    if(!user.isNull())
    {
        m_strUser = user.text();
    }

    root = root.nextSibling();
    QDomElement passWord = root.toElement();
    if(!passWord.isNull())
    {
        m_strUser = passWord.text();
    }
}


