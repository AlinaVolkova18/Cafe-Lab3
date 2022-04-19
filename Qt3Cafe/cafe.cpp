#include "cafe.h"

Cafe::Cafe()
{

}

void Cafe::setID(const QString ID)
{
    id = ID;
}
void Cafe::setName(const QString Name)
{
    name = Name;
}
void Cafe::setAddress(const QString Address)
{
    address = Address;
}
void Cafe::setType(const QString Type)
{
    type = Type;
}
void Cafe::setTime(const QString Time)
{
    time = Time;
}
QString Cafe::getID() const
{
    return id;
}
QString Cafe::getName() const
{
    return name;
}
QString Cafe::getAddress() const
{
    return address;
}
QString Cafe::getType() const
{
    return type;
}
QString Cafe::getTime() const
{
    return time;
}
 Cafe::~Cafe()
{
}
