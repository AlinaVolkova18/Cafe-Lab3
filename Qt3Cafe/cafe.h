#ifndef CAFE_H
#define CAFE_H
#include "QString"
//#include <QObject>

class Cafe /*public QObject*/
{
    //Q_OBJECT

public:
    Cafe(/*QString ID, QString Name, QString Flow, QString Lenght, QString Runoff, QString Area QObject *parent = nullptr */);
    virtual ~Cafe();
    void setID(const QString ID);
    void setName(const QString Name);
    void setAddress(const QString Address);
    void setType(const QString Type);
    void setTime(const QString Time);

    QString getID() const;
    QString getName() const;
    QString getAddress() const;
    QString getType() const;
    QString getTime() const;

private:
    QString id;
    QString name;
    QString address;
    QString type;
    QString time;
};

#endif // CAFE_H
