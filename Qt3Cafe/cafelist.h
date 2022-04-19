#ifndef CAFELIST_H
#define CAFELIST_H

#include <QAbstractListModel>
#include <QVariant>
#include <QList>
#include <QModelIndex>
#include <QItemSelectionModel>
#include "cafe.h"

class CafeList : public QAbstractListModel
{
    Q_OBJECT

    Q_PROPERTY(QAbstractListModel* cafeModel READ getModel CONSTANT)  /* первый параметр - тип свойства (property)
                                                                     второй параметр - имя свойства, по которому будем обращаться к реальной модели в qml-файле
                                                                     третий параметр - метод С++ для получения значения свойства (получим саму модель)
                                                                     CONSTANT - qml получит свойство однократно, и в процессе работы это свойство изменяться не будет */
private:
    QList<Cafe> listOfCafes; // непосредственно данные
    QAbstractListModel *getModel();

public:
    CafeList(QObject *parent = nullptr);
    ~CafeList() override;

    // количество колонок
    int rowCount(const QModelIndex& parent = QModelIndex()) const override;

     // возвращение данных модели по указанному индексу и роли
    QVariant data(const QModelIndex & index, int role = Qt::DisplayRole) const override;

    enum ResentRoles {
            name = Qt::DisplayRole,
            address = Qt::DisplayRole + 1,
            type = Qt::DisplayRole + 2,
            time = Qt::DisplayRole + 3,
       };

    QHash<int, QByteArray> roleNames() const override;

    Q_INVOKABLE void add(const QString& nameCafe, const QString& addressCafe, const QString& typeCafe, const QString& timeCafe);  // макрос указывает, что к методу можно обратиться из QML
    Q_INVOKABLE void del(const int index);
    Q_INVOKABLE QString count(const QString& textSelArea);
    Q_INVOKABLE void edit(const QString& nameCafe, const QString& addressCafe, const QString& typeCafe, const QString& timeCafe, const int index);
};

#endif // CAFELIST_H
