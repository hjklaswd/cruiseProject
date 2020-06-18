#include "cgetinfo.h"

CGetInfo::CGetInfo():m_bIsFirstLogin(false)
{
    QString xmlPath = QDir::homePath();;
    m_strXmlPath = xmlPath + "/" + XMLFILENAME;

}

void CGetInfo::GetXmlInfo()
{

    QFileInfo xmlInfo(m_strXmlPath);
    if(!xmlInfo.exists())
    {
        CreateXml();
        m_strUser = "root";
        m_strPassWord = "123456";
        m_bIsFirstLogin = true;
        return ;
    }else
    {
        ReadXml();
    }
}

bool CGetInfo::GetIsFirstLogin()
{
    return m_bIsFirstLogin;
}

QString CGetInfo::GetUser()
{
    return m_strUser;
}

QString CGetInfo::GetPassWord()
{
    return m_strPassWord;
}

void CGetInfo::WriteXml(QString passWord)
{
    qDebug()<<passWord << "*******************";
    QDomDocument doc;
    QFile file(m_strXmlPath);
    if(!file.open(QIODevice::ReadOnly))
    {
        return;
    }
    if(!doc.setContent(&file))
    {
        file.close();
        return;
    }
    file.close();
    QDomElement rootElement = doc.documentElement();
    QDomNode rootNode = rootElement.firstChild();
    while(!rootNode.isNull())
    {
        QDomElement fileElement = rootNode.toElement();
        if(!fileElement.isNull())
        {
            QString name = fileElement.tagName();
            if(name == "PassWord")
            {
                QDomElement newnode = doc.createElement("PassWord");
                QDomText text = doc.createTextNode(passWord);
                newnode.appendChild(text);
                rootElement.replaceChild(newnode,rootNode);
            }
        }
        rootNode = rootNode.nextSibling();
    }
    QString xml = doc.toString();

    if(!file.open(QFile::WriteOnly|QFile::Truncate))
    {
        return;
    }

    QTextStream out(&file);
    out<<xml;
    file.close();

}

void CGetInfo::CreateXml()
{
    QFile xmlFile(m_strXmlPath);
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

void CGetInfo::ReadXml()
{

    QDomDocument doc;
    QFile xmlInfoFile(m_strXmlPath);
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
        m_strPassWord = passWord.text();
    }
}


