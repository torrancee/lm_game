#include "backend.h"
#include <QDebug>

BackEnd::BackEnd(QObject *parent) :
    QObject(parent)
{
}

QString BackEnd::userName()
{
    qDebug() << "userName()";
    return m_userName;
}

void BackEnd::setUserName(const QString &userName)
{
    if (userName == m_userName)
        return;

    qDebug() << "setUserName";
    m_userName = userName;
    //emit userNameChanged();
}
