#ifndef RGQTLOG_H
#define RGQTLOG_H

/*
 * RGQt Log definition
 *
 * Created: 2018-03-20
 * Last update: 2018-03-20 by ashamsutdinov
 *
 *
 * Revision history:
 *
 * 2018-03-20   ashamsutdinov       Initial version
 * */


#include "rgqtcore.h"


enum RGQTCORE LogSeverity
{
    TRACE,
    DEBUG,
    INFO,
    WARNING,
    ERROR
};


class RGQTCORE RGQtLog :
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
