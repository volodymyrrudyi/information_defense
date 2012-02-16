/****************************************************************************
** Meta object code from reading C++ file 'lab2.h'
**
** Created: Mon Feb 13 08:42:27 2012
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "lab2.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'lab2.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Lab2[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
       6,    5,    5,    5, 0x08,
      30,    5,    5,    5, 0x08,
      53,    5,    5,    5, 0x08,
      76,    5,    5,    5, 0x08,
     100,    5,    5,    5, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_Lab2[] = {
    "Lab2\0\0on_btnEncrypt_clicked()\0"
    "on_rbRussian_clicked()\0on_rbEnglish_clicked()\0"
    "on_btnDecrypt_clicked()\0on_btnAnalyze_clicked()\0"
};

const QMetaObject Lab2::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_Lab2,
      qt_meta_data_Lab2, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Lab2::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Lab2::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Lab2::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Lab2))
        return static_cast<void*>(const_cast< Lab2*>(this));
    return QDialog::qt_metacast(_clname);
}

int Lab2::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: on_btnEncrypt_clicked(); break;
        case 1: on_rbRussian_clicked(); break;
        case 2: on_rbEnglish_clicked(); break;
        case 3: on_btnDecrypt_clicked(); break;
        case 4: on_btnAnalyze_clicked(); break;
        default: ;
        }
        _id -= 5;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
