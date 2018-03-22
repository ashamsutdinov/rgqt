#ifndef RGQTLOG_H
#define RGQTLOG_H

#include "rgqtlog_global.h"


enum RGQTLOG LogSeverity
{
    TRACE,
    DEBUG,
    INFO,
    WARNING,
    ERROR
};


class RGQTLOG RGQtLog :
        public QObject
{
    Q_OBJECT

protected:
    explicit RGQtLog(QObject* parent = nullptr);

signals:
    void Message(const QString& message, const LogSeverity& severity);

public slots:
    void OnMessage(const QString& message, const LogSeverity& severity);
};


#endif // RGQTLOG_H
