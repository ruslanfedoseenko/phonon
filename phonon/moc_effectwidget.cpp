/****************************************************************************
** Meta object code from reading C++ file 'effectwidget.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "effectwidget.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'effectwidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Phonon__EffectWidget[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      30,   22,   21,   21, 0x08,
      64,   58,   21,   21, 0x08,
      88,   58,   21,   21, 0x08,
     118,   21,   21,   21, 0x08,
     149,   21,   21,   21, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_Phonon__EffectWidget[] = {
    "Phonon::EffectWidget\0\0checked\0"
    "_k_setToggleParameter(bool)\0value\0"
    "_k_setIntParameter(int)\0"
    "_k_setDoubleParameter(double)\0"
    "_k_setStringParameter(QString)\0"
    "_k_setSliderParameter(int)\0"
};

void Phonon::EffectWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        EffectWidget *_t = static_cast<EffectWidget *>(_o);
        switch (_id) {
        case 0: _t->k_func()->_k_setToggleParameter((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->k_func()->_k_setIntParameter((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->k_func()->_k_setDoubleParameter((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 3: _t->k_func()->_k_setStringParameter((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 4: _t->k_func()->_k_setSliderParameter((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData Phonon::EffectWidget::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject Phonon::EffectWidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_Phonon__EffectWidget,
      qt_meta_data_Phonon__EffectWidget, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Phonon::EffectWidget::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Phonon::EffectWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Phonon::EffectWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Phonon__EffectWidget))
        return static_cast<void*>(const_cast< EffectWidget*>(this));
    return QWidget::qt_metacast(_clname);
}

int Phonon::EffectWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
