#include "cafelist.h"
#include <QDebug>
#include <QMessageBox>
#include <QWidget>
#include <QApplication>

CafeList::CafeList(QObject* parent):QAbstractListModel(parent)
{
    add("Мачете","Конспиративный переулок, 9","Европейская","12:00-00:00");
    add("Coffee Bean","проспект Ленина, 16","Десерты","8:00-23:00");
    add("Цони-Мацони","Красной Армии, 18/9","Грузинская","12:00-0:00");
}

CafeList::~CafeList()
{

}

int CafeList::rowCount(const QModelIndex&) const
{
    return listOfCafes.size();
}


QVariant CafeList::data(const QModelIndex &index, int role) const
{
    if (index.row() < 0 || index.row() >= listOfCafes.size())
            return QVariant();
      {
        switch (role) {
                case name:
                    return QVariant(listOfCafes.at(index.row()).getName());
                case address:
                    return QVariant(listOfCafes.at(index.row()).getAddress());
                case type:
                    return QVariant(listOfCafes.at(index.row()).getType());
                case time:
                    return QVariant(listOfCafes.at(index.row()).getTime());

                default:
                    return QVariant();
            }

    }
}

QHash<int, QByteArray> CafeList::roleNames() const
{
    QHash<int, QByteArray> roles;
    roles[name] = "nameOfCafe";
    roles[address] = "addressOfCafe";
    roles[type] = "typeOfCafe";
    roles[time] = "timeOfCafe";
    return roles;
}

void CafeList::add(const QString& nameCafe, const QString& addressCafe, const QString& typeCafe, const QString& timeCafe){
     Cafe cafe;
     cafe.setName(nameCafe);
     cafe.setAddress(addressCafe);
     cafe.setType(typeCafe);
     cafe.setTime(timeCafe);

    beginInsertRows(QModelIndex(),listOfCafes.size(),listOfCafes.size());
    listOfCafes.append(cafe);  //добавление в конец списка
    endInsertRows();

}

QAbstractListModel* CafeList::getModel(){
    return this;
}

void CafeList::del(const int index){

     if (index >= 0 && index < listOfCafes.size())
     {

    // сообщение модели о процессе удаления данных
         beginRemoveRows(QModelIndex(), index, index);
        listOfCafes.removeAt(index);
              endRemoveRows();
     }
     else qDebug() << "Error index";

}

QString CafeList::count(const QString& textSelArea){
    int count = 0;
    for(int i = 0; i < listOfCafes.size(); i++)
        if(listOfCafes[i].getType().toInt() == textSelArea.toInt())
            count++;
    QString c = QString::number(count);
    return c;
    //QMessageBox messBox;
    //messBox.setWindowTitle("Всё подсчиталось!");
    //messBox.setText("Количество кафе, где тип кухни " + textSelArea + ", совпадает " + c + "!");
}

void CafeList::edit(const QString& nameCafe, const QString& addressCafe,const QString& typeCafe, const QString& timeCafe, const int index) {
     if(index >= 0 && index < listOfCafes.size() )
     {
        auto& currentCafe = listOfCafes[index];
        if (currentCafe.getName().compare(nameCafe)!=0 || currentCafe.getAddress() != addressCafe || currentCafe.getType() != typeCafe
                || currentCafe.getTime() != timeCafe)
        {
            currentCafe.setName(nameCafe);
            currentCafe.setAddress(addressCafe);
            currentCafe.setType(typeCafe);
            currentCafe.setTime(timeCafe);

            auto modelIndex = createIndex(index, 0);
            emit dataChanged(modelIndex, modelIndex);
            qDebug() << listOfCafes[index].getType();
        }

     }
      else qDebug() << "Error index";
}
