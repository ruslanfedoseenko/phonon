/****************************************************************************
** Meta object code from reading C++ file 'backendcapabilities.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "backendcapabilities.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'backendcapabilities.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Phonon__BackendCapabilities__Notifier[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: signature, parameters, type, tag, flags
      39,   38,   38,   38, 0x05,
      61,   38,   38,   38, 0x05,
      98,   38,   38,   38, 0x05,

       0        // eod
};

static const char qt_meta_stringdata_Phonon__BackendCapabilities__Notifier[] = {
    "Phonon::BackendCapabilities::Notifier\0"
    "\0capabilitiesChanged()\0"
    "availableAudioOutputDevicesChanged()\0"
    "availableAudioCaptureDevicesChanged()\0"
};

void Phonon::BackendCapabilities::Notifier::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        Notifier *_t = static_cast<Notifier *>(_o);
        switch (_id) {
        case 0: _t->capabilitiesChanged(); break;
        case 1: _t->availableAudioOutputDevicesChanged(); break;
        case 2: _t->availableAudioCaptureDevicesChanged(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData Phonon::BackendCapabilities::Notifier::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject Phonon::BackendCapabilities::Notifier::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_Phonon__BackendCapabilities__Notifier,
      qt_meta_data_Phonon__BackendCapabilities__Notifier, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Phonon::BackendCapabilities::Notifier::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Phonon::BackendCapabilities::Notifier::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Phonon::BackendCapabilities::Notifier::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Phonon__BackendCapabilities__Notifier))
        return static_cast<void*>(const_cast< Notifier*>(this));
    return QObject::qt_metacast(_clname);
}

int Phonon::BackendCapabilities::Notifier::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }
    return _id;
}

// SIGNAL 0
void Phonon::BackendCapabilities::Notifier::capabilitiesChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void Phonon::BackendCapabilities::Notifier::availableAudioOutputDevicesChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}

// SIGNAL 2
void Phonon::BackendCapabilities::Notifier::availableAudioCaptureDevicesChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, 0);
}
QT_END_MOC_NAMESPACE
