#include "rgqtlog.h"


RGQtLog::RGQtLog(QObject* parent) :
    QObject(parent)
{
}

void RGQtLog::OnMessage(const QString &message, const LogSeverity &severity)
{
    emit Message(message, severity);
}
