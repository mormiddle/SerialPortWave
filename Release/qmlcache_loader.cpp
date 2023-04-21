#include <QtQml/qqmlprivate.h>
#include <QtCore/qdir.h>
#include <QtCore/qurl.h>

static const unsigned char qt_resource_tree[] = {
0,
0,0,0,0,2,0,0,0,2,0,0,0,1,0,0,0,
8,0,2,0,0,0,3,0,0,0,43,0,0,0,88,0,
2,0,0,0,11,0,0,0,3,0,0,1,54,0,2,0,
0,0,2,0,0,0,41,0,0,1,178,0,2,0,0,0,
27,0,0,0,14,0,0,0,100,0,0,0,0,0,1,0,
0,0,0,0,0,0,162,0,0,0,0,0,1,0,0,0,
0,0,0,1,150,0,0,0,0,0,1,0,0,0,0,0,
0,1,32,0,0,0,0,0,1,0,0,0,0,0,0,1,
116,0,0,0,0,0,1,0,0,0,0,0,0,0,194,0,
0,0,0,0,1,0,0,0,0,0,0,0,132,0,0,0,
0,0,1,0,0,0,0,0,0,0,228,0,0,0,0,0,
1,0,0,0,0,0,0,1,2,0,0,0,0,0,1,0,
0,0,0,0,0,4,36,0,0,0,0,0,1,0,0,0,
0,0,0,3,64,0,0,0,0,0,1,0,0,0,0,0,
0,4,4,0,0,0,0,0,1,0,0,0,0,0,0,3,
172,0,0,0,0,0,1,0,0,0,0,0,0,2,126,0,
0,0,0,0,1,0,0,0,0,0,0,4,66,0,0,0,
0,0,1,0,0,0,0,0,0,3,32,0,0,0,0,0,
1,0,0,0,0,0,0,2,100,0,0,0,0,0,1,0,
0,0,0,0,0,4,126,0,0,0,0,0,1,0,0,0,
0,0,0,1,194,0,0,0,0,0,1,0,0,0,0,0,
0,2,192,0,0,0,0,0,1,0,0,0,0,0,0,2,
254,0,0,0,0,0,1,0,0,0,0,0,0,3,142,0,
0,0,0,0,1,0,0,0,0,0,0,1,226,0,0,0,
0,0,1,0,0,0,0,0,0,4,202,0,0,0,0,0,
1,0,0,0,0,0,0,4,242,0,0,0,0,0,1,0,
0,0,0,0,0,3,202,0,0,0,0,0,1,0,0,0,
0,0,0,4,102,0,0,0,0,0,1,0,0,0,0,0,
0,2,226,0,0,0,0,0,1,0,0,0,0,0,0,2,
0,0,0,0,0,0,1,0,0,0,0,0,0,3,226,0,
0,0,0,0,1,0,0,0,0,0,0,3,94,0,0,0,
0,0,1,0,0,0,0,0,0,2,60,0,0,0,0,0,
1,0,0,0,0,0,0,2,166,0,0,0,0,0,1,0,
0,0,0,0,0,3,120,0,0,0,0,0,1,0,0,0,
0,0,0,4,162,0,0,0,0,0,1,0,0,0,0,0,
0,2,28,0,0,0,0,0,1,0,0,0,0,0,0,1,
70,0,0,0,0,0,1,0,0,0,0,0,0,1,94,0,
0,0,0,0,1,0,0,0,0,0,0,0,18,0,0,0,
0,0,1,0,0,0,0,0,0,0,42,0,0,0,0,0,
1,0,0,0,0,0,0,0,66,0,0,0,0,0,1,0,
0,0,0};
static const unsigned char qt_resource_names[] = {
0,
1,0,0,0,47,0,47,0,2,0,0,7,19,0,106,0,
115,0,9,5,135,41,115,0,103,0,108,0,111,0,98,0,
97,0,108,0,46,0,106,0,115,0,9,7,220,197,115,0,
105,0,109,0,97,0,103,0,101,0,115,0,46,0,106,0,
115,0,8,8,137,149,19,0,122,0,98,0,97,0,115,0,
101,0,46,0,106,0,115,0,3,0,0,120,60,0,113,0,
109,0,108,0,13,1,108,83,188,0,76,0,111,0,103,0,
105,0,110,0,80,0,97,0,103,0,101,0,46,0,113,0,
109,0,108,0,12,10,207,60,220,0,67,0,111,0,108,0,
111,0,114,0,77,0,97,0,112,0,46,0,113,0,109,0,
108,0,13,6,58,167,60,0,82,0,105,0,103,0,104,0,
116,0,77,0,97,0,105,0,110,0,46,0,113,0,109,0,
108,0,14,10,183,130,28,0,66,0,111,0,116,0,116,0,
111,0,109,0,77,0,97,0,105,0,110,0,46,0,113,0,
109,0,108,0,12,13,168,82,252,0,77,0,97,0,105,0,
110,0,80,0,97,0,103,0,101,0,46,0,113,0,109,0,
108,0,12,13,214,230,92,0,76,0,101,0,102,0,116,0,
77,0,97,0,105,0,110,0,46,0,113,0,109,0,108,0,
8,8,1,90,92,0,109,0,97,0,105,0,110,0,46,0,
113,0,109,0,108,0,5,0,104,44,148,0,97,0,108,0,
101,0,114,0,116,0,9,9,101,145,28,0,101,0,114,0,
114,0,111,0,114,0,46,0,113,0,109,0,108,0,8,12,
47,90,156,0,110,0,117,0,108,0,108,0,46,0,113,0,
109,0,108,0,14,8,215,32,188,0,77,0,105,0,100,0,
100,0,108,0,101,0,77,0,97,0,105,0,110,0,46,0,
113,0,109,0,108,0,11,7,119,158,92,0,84,0,111,0,
112,0,77,0,97,0,105,0,110,0,46,0,113,0,109,0,
108,0,5,0,104,137,243,0,98,0,97,0,115,0,105,0,
99,0,13,3,201,103,60,0,77,0,101,0,110,0,117,0,
66,0,108,0,97,0,110,0,107,0,46,0,113,0,109,0,
108,0,12,6,57,120,124,0,77,0,97,0,114,0,107,0,
76,0,105,0,110,0,101,0,46,0,113,0,109,0,108,0,
11,9,209,223,124,0,77,0,101,0,110,0,117,0,82,0,
111,0,119,0,46,0,113,0,109,0,108,0,13,15,85,9,
220,0,82,0,101,0,99,0,116,0,97,0,110,0,103,0,
108,0,101,0,46,0,113,0,109,0,108,0,17,10,215,144,
188,0,66,0,117,0,115,0,121,0,73,0,110,0,100,0,
105,0,99,0,97,0,116,0,111,0,114,0,46,0,113,0,
109,0,108,0,10,3,83,11,60,0,68,0,105,0,97,0,
108,0,111,0,103,0,46,0,113,0,109,0,108,0,17,0,
247,91,92,0,77,0,101,0,110,0,117,0,84,0,101,0,
120,0,116,0,70,0,105,0,101,0,108,0,100,0,46,0,
113,0,109,0,108,0,10,11,104,113,92,0,66,0,117,0,
116,0,116,0,111,0,110,0,46,0,113,0,109,0,108,0,
14,4,18,125,188,0,77,0,101,0,110,0,117,0,66,0,
117,0,116,0,116,0,111,0,110,0,46,0,113,0,109,0,
108,0,11,9,204,223,28,0,77,0,101,0,110,0,117,0,
66,0,111,0,120,0,46,0,113,0,109,0,108,0,14,4,
178,56,188,0,77,0,101,0,110,0,117,0,67,0,111,0,
108,0,117,0,109,0,110,0,46,0,113,0,109,0,108,0,
13,1,184,80,156,0,84,0,101,0,120,0,116,0,70,0,
105,0,101,0,108,0,100,0,46,0,113,0,109,0,108,0,
12,0,86,39,220,0,67,0,104,0,101,0,99,0,107,0,
66,0,111,0,120,0,46,0,113,0,109,0,108,0,10,10,
206,21,220,0,83,0,108,0,105,0,100,0,101,0,114,0,
46,0,113,0,109,0,108,0,8,12,247,95,124,0,84,0,
101,0,120,0,116,0,46,0,113,0,109,0,108,0,12,5,
171,3,188,0,76,0,105,0,115,0,116,0,118,0,105,0,
101,0,119,0,46,0,113,0,109,0,108,0,12,0,185,144,
188,0,71,0,114,0,111,0,117,0,112,0,66,0,111,0,
120,0,46,0,113,0,109,0,108,0,9,7,216,248,92,0,
73,0,109,0,97,0,103,0,101,0,46,0,113,0,109,0,
108,0,14,10,17,22,156,0,65,0,100,0,106,0,117,0,
115,0,116,0,84,0,105,0,109,0,101,0,46,0,113,0,
109,0,108,0,13,0,109,102,124,0,77,0,111,0,117,0,
115,0,101,0,65,0,114,0,101,0,97,0,46,0,113,0,
109,0,108,0,12,0,39,38,92,0,67,0,111,0,109,0,
98,0,111,0,66,0,111,0,120,0,46,0,113,0,109,0,
108,0,15,1,143,197,60,0,77,0,101,0,110,0,117,0,
66,0,111,0,120,0,73,0,116,0,101,0,109,0,46,0,
113,0,109,0,108,0,9,8,191,244,220,0,76,0,97,0,
98,0,101,0,108,0,46,0,113,0,109,0,108,0,15,3,
113,243,220,0,82,0,97,0,110,0,103,0,101,0,83,0,
108,0,105,0,100,0,101,0,114,0,46,0,113,0,109,0,
108,0,17,14,31,60,156,0,77,0,97,0,114,0,107,0,
82,0,101,0,99,0,116,0,97,0,110,0,103,0,108,0,
101,0,46,0,113,0,109,0,108,0,17,6,82,190,220,0,
66,0,117,0,116,0,116,0,111,0,110,0,84,0,111,0,
111,0,108,0,84,0,105,0,112,0,46,0,113,0,109,0,
108,0,10,6,234,221,92,0,85,0,112,0,100,0,111,0,
119,0,110,0,46,0,113,0,109,0,108};
static const unsigned char qt_resource_empty_payout[] = { 0, 0, 0, 0, 0 };
QT_BEGIN_NAMESPACE
extern Q_CORE_EXPORT bool qRegisterResourceData(int, const unsigned char *, const unsigned char *, const unsigned char *);
QT_END_NAMESPACE
namespace QmlCacheGeneratedCode {
namespace _qml_basic_Updown_qml { 
    extern const unsigned char qmlData[];
    const QQmlPrivate::CachedQmlUnit unit = {
        reinterpret_cast<const QV4::CompiledData::Unit*>(&qmlData), nullptr, nullptr
    };
}
namespace _qml_basic_ButtonToolTip_qml { 
    extern const unsigned char qmlData[];
    const QQmlPrivate::CachedQmlUnit unit = {
        reinterpret_cast<const QV4::CompiledData::Unit*>(&qmlData), nullptr, nullptr
    };
}
namespace _qml_TopMain_qml { 
    extern const unsigned char qmlData[];
    const QQmlPrivate::CachedQmlUnit unit = {
        reinterpret_cast<const QV4::CompiledData::Unit*>(&qmlData), nullptr, nullptr
    };
}
namespace _qml_basic_MarkRectangle_qml { 
    extern const unsigned char qmlData[];
    const QQmlPrivate::CachedQmlUnit unit = {
        reinterpret_cast<const QV4::CompiledData::Unit*>(&qmlData), nullptr, nullptr
    };
}
namespace _qml_MiddleMain_qml { 
    extern const unsigned char qmlData[];
    const QQmlPrivate::CachedQmlUnit unit = {
        reinterpret_cast<const QV4::CompiledData::Unit*>(&qmlData), nullptr, nullptr
    };
}
namespace _qml_basic_RangeSlider_qml { 
    extern const unsigned char qmlData[];
    const QQmlPrivate::CachedQmlUnit unit = {
        reinterpret_cast<const QV4::CompiledData::Unit*>(&qmlData), nullptr, nullptr
    };
}
namespace _qml_basic_Label_qml { 
    extern const unsigned char qmlData[];
    const QQmlPrivate::CachedQmlUnit unit = {
        reinterpret_cast<const QV4::CompiledData::Unit*>(&qmlData), nullptr, nullptr
    };
}
namespace _qml_basic_MenuBoxItem_qml { 
    extern const unsigned char qmlData[];
    const QQmlPrivate::CachedQmlUnit unit = {
        reinterpret_cast<const QV4::CompiledData::Unit*>(&qmlData), nullptr, nullptr
    };
}
namespace _qml_basic_ComboBox_qml { 
    extern const unsigned char qmlData[];
    const QQmlPrivate::CachedQmlUnit unit = {
        reinterpret_cast<const QV4::CompiledData::Unit*>(&qmlData), nullptr, nullptr
    };
}
namespace _js_zbase_js { 
    extern const unsigned char qmlData[];
    const QQmlPrivate::CachedQmlUnit unit = {
        reinterpret_cast<const QV4::CompiledData::Unit*>(&qmlData), nullptr, nullptr
    };
}
namespace _qml_basic_MouseArea_qml { 
    extern const unsigned char qmlData[];
    const QQmlPrivate::CachedQmlUnit unit = {
        reinterpret_cast<const QV4::CompiledData::Unit*>(&qmlData), nullptr, nullptr
    };
}
namespace _qml_basic_AdjustTime_qml { 
    extern const unsigned char qmlData[];
    const QQmlPrivate::CachedQmlUnit unit = {
        reinterpret_cast<const QV4::CompiledData::Unit*>(&qmlData), nullptr, nullptr
    };
}
namespace _qml_basic_Image_qml { 
    extern const unsigned char qmlData[];
    const QQmlPrivate::CachedQmlUnit unit = {
        reinterpret_cast<const QV4::CompiledData::Unit*>(&qmlData), nullptr, nullptr
    };
}
namespace _qml_basic_GroupBox_qml { 
    extern const unsigned char qmlData[];
    const QQmlPrivate::CachedQmlUnit unit = {
        reinterpret_cast<const QV4::CompiledData::Unit*>(&qmlData), nullptr, nullptr
    };
}
namespace _qml_basic_Listview_qml { 
    extern const unsigned char qmlData[];
    const QQmlPrivate::CachedQmlUnit unit = {
        reinterpret_cast<const QV4::CompiledData::Unit*>(&qmlData), nullptr, nullptr
    };
}
namespace _qml_alert_null_qml { 
    extern const unsigned char qmlData[];
    const QQmlPrivate::CachedQmlUnit unit = {
        reinterpret_cast<const QV4::CompiledData::Unit*>(&qmlData), nullptr, nullptr
    };
}
namespace _qml_basic_Text_qml { 
    extern const unsigned char qmlData[];
    const QQmlPrivate::CachedQmlUnit unit = {
        reinterpret_cast<const QV4::CompiledData::Unit*>(&qmlData), nullptr, nullptr
    };
}
namespace _qml_main_qml { 
    extern const unsigned char qmlData[];
    const QQmlPrivate::CachedQmlUnit unit = {
        reinterpret_cast<const QV4::CompiledData::Unit*>(&qmlData), nullptr, nullptr
    };
}
namespace _qml_basic_Slider_qml { 
    extern const unsigned char qmlData[];
    const QQmlPrivate::CachedQmlUnit unit = {
        reinterpret_cast<const QV4::CompiledData::Unit*>(&qmlData), nullptr, nullptr
    };
}
namespace _js_images_js { 
    extern const unsigned char qmlData[];
    const QQmlPrivate::CachedQmlUnit unit = {
        reinterpret_cast<const QV4::CompiledData::Unit*>(&qmlData), nullptr, nullptr
    };
}
namespace _js_global_js { 
    extern const unsigned char qmlData[];
    const QQmlPrivate::CachedQmlUnit unit = {
        reinterpret_cast<const QV4::CompiledData::Unit*>(&qmlData), nullptr, nullptr
    };
}
namespace _qml_LeftMain_qml { 
    extern const unsigned char qmlData[];
    const QQmlPrivate::CachedQmlUnit unit = {
        reinterpret_cast<const QV4::CompiledData::Unit*>(&qmlData), nullptr, nullptr
    };
}
namespace _qml_basic_CheckBox_qml { 
    extern const unsigned char qmlData[];
    const QQmlPrivate::CachedQmlUnit unit = {
        reinterpret_cast<const QV4::CompiledData::Unit*>(&qmlData), nullptr, nullptr
    };
}
namespace _qml_MainPage_qml { 
    extern const unsigned char qmlData[];
    const QQmlPrivate::CachedQmlUnit unit = {
        reinterpret_cast<const QV4::CompiledData::Unit*>(&qmlData), nullptr, nullptr
    };
}
namespace _qml_BottomMain_qml { 
    extern const unsigned char qmlData[];
    const QQmlPrivate::CachedQmlUnit unit = {
        reinterpret_cast<const QV4::CompiledData::Unit*>(&qmlData), nullptr, nullptr
    };
}
namespace _qml_basic_TextField_qml { 
    extern const unsigned char qmlData[];
    const QQmlPrivate::CachedQmlUnit unit = {
        reinterpret_cast<const QV4::CompiledData::Unit*>(&qmlData), nullptr, nullptr
    };
}
namespace _qml_basic_MenuColumn_qml { 
    extern const unsigned char qmlData[];
    const QQmlPrivate::CachedQmlUnit unit = {
        reinterpret_cast<const QV4::CompiledData::Unit*>(&qmlData), nullptr, nullptr
    };
}
namespace _qml_basic_MenuBox_qml { 
    extern const unsigned char qmlData[];
    const QQmlPrivate::CachedQmlUnit unit = {
        reinterpret_cast<const QV4::CompiledData::Unit*>(&qmlData), nullptr, nullptr
    };
}
namespace _qml_basic_MenuButton_qml { 
    extern const unsigned char qmlData[];
    const QQmlPrivate::CachedQmlUnit unit = {
        reinterpret_cast<const QV4::CompiledData::Unit*>(&qmlData), nullptr, nullptr
    };
}
namespace _qml_basic_Button_qml { 
    extern const unsigned char qmlData[];
    const QQmlPrivate::CachedQmlUnit unit = {
        reinterpret_cast<const QV4::CompiledData::Unit*>(&qmlData), nullptr, nullptr
    };
}
namespace _qml_basic_MenuTextField_qml { 
    extern const unsigned char qmlData[];
    const QQmlPrivate::CachedQmlUnit unit = {
        reinterpret_cast<const QV4::CompiledData::Unit*>(&qmlData), nullptr, nullptr
    };
}
namespace _qml_basic_Dialog_qml { 
    extern const unsigned char qmlData[];
    const QQmlPrivate::CachedQmlUnit unit = {
        reinterpret_cast<const QV4::CompiledData::Unit*>(&qmlData), nullptr, nullptr
    };
}
namespace _qml_basic_BusyIndicator_qml { 
    extern const unsigned char qmlData[];
    const QQmlPrivate::CachedQmlUnit unit = {
        reinterpret_cast<const QV4::CompiledData::Unit*>(&qmlData), nullptr, nullptr
    };
}
namespace _qml_basic_Rectangle_qml { 
    extern const unsigned char qmlData[];
    const QQmlPrivate::CachedQmlUnit unit = {
        reinterpret_cast<const QV4::CompiledData::Unit*>(&qmlData), nullptr, nullptr
    };
}
namespace _qml_RightMain_qml { 
    extern const unsigned char qmlData[];
    const QQmlPrivate::CachedQmlUnit unit = {
        reinterpret_cast<const QV4::CompiledData::Unit*>(&qmlData), nullptr, nullptr
    };
}
namespace _qml_ColorMap_qml { 
    extern const unsigned char qmlData[];
    const QQmlPrivate::CachedQmlUnit unit = {
        reinterpret_cast<const QV4::CompiledData::Unit*>(&qmlData), nullptr, nullptr
    };
}
namespace _qml_basic_MenuRow_qml { 
    extern const unsigned char qmlData[];
    const QQmlPrivate::CachedQmlUnit unit = {
        reinterpret_cast<const QV4::CompiledData::Unit*>(&qmlData), nullptr, nullptr
    };
}
namespace _qml_basic_MarkLine_qml { 
    extern const unsigned char qmlData[];
    const QQmlPrivate::CachedQmlUnit unit = {
        reinterpret_cast<const QV4::CompiledData::Unit*>(&qmlData), nullptr, nullptr
    };
}
namespace _qml_basic_MenuBlank_qml { 
    extern const unsigned char qmlData[];
    const QQmlPrivate::CachedQmlUnit unit = {
        reinterpret_cast<const QV4::CompiledData::Unit*>(&qmlData), nullptr, nullptr
    };
}
namespace _qml_LoginPage_qml { 
    extern const unsigned char qmlData[];
    const QQmlPrivate::CachedQmlUnit unit = {
        reinterpret_cast<const QV4::CompiledData::Unit*>(&qmlData), nullptr, nullptr
    };
}
namespace _qml_alert_error_qml { 
    extern const unsigned char qmlData[];
    const QQmlPrivate::CachedQmlUnit unit = {
        reinterpret_cast<const QV4::CompiledData::Unit*>(&qmlData), nullptr, nullptr
    };
}

}
namespace {
struct Registry {
    Registry();
    ~Registry();
    QHash<QString, const QQmlPrivate::CachedQmlUnit*> resourcePathToCachedUnit;
    static const QQmlPrivate::CachedQmlUnit *lookupCachedUnit(const QUrl &url);
};

Q_GLOBAL_STATIC(Registry, unitRegistry)


Registry::Registry() {
        resourcePathToCachedUnit.insert(QStringLiteral("/qml/basic/Updown.qml"), &QmlCacheGeneratedCode::_qml_basic_Updown_qml::unit);
        resourcePathToCachedUnit.insert(QStringLiteral("/qml/basic/ButtonToolTip.qml"), &QmlCacheGeneratedCode::_qml_basic_ButtonToolTip_qml::unit);
        resourcePathToCachedUnit.insert(QStringLiteral("/qml/TopMain.qml"), &QmlCacheGeneratedCode::_qml_TopMain_qml::unit);
        resourcePathToCachedUnit.insert(QStringLiteral("/qml/basic/MarkRectangle.qml"), &QmlCacheGeneratedCode::_qml_basic_MarkRectangle_qml::unit);
        resourcePathToCachedUnit.insert(QStringLiteral("/qml/MiddleMain.qml"), &QmlCacheGeneratedCode::_qml_MiddleMain_qml::unit);
        resourcePathToCachedUnit.insert(QStringLiteral("/qml/basic/RangeSlider.qml"), &QmlCacheGeneratedCode::_qml_basic_RangeSlider_qml::unit);
        resourcePathToCachedUnit.insert(QStringLiteral("/qml/basic/Label.qml"), &QmlCacheGeneratedCode::_qml_basic_Label_qml::unit);
        resourcePathToCachedUnit.insert(QStringLiteral("/qml/basic/MenuBoxItem.qml"), &QmlCacheGeneratedCode::_qml_basic_MenuBoxItem_qml::unit);
        resourcePathToCachedUnit.insert(QStringLiteral("/qml/basic/ComboBox.qml"), &QmlCacheGeneratedCode::_qml_basic_ComboBox_qml::unit);
        resourcePathToCachedUnit.insert(QStringLiteral("/js/zbase.js"), &QmlCacheGeneratedCode::_js_zbase_js::unit);
        resourcePathToCachedUnit.insert(QStringLiteral("/qml/basic/MouseArea.qml"), &QmlCacheGeneratedCode::_qml_basic_MouseArea_qml::unit);
        resourcePathToCachedUnit.insert(QStringLiteral("/qml/basic/AdjustTime.qml"), &QmlCacheGeneratedCode::_qml_basic_AdjustTime_qml::unit);
        resourcePathToCachedUnit.insert(QStringLiteral("/qml/basic/Image.qml"), &QmlCacheGeneratedCode::_qml_basic_Image_qml::unit);
        resourcePathToCachedUnit.insert(QStringLiteral("/qml/basic/GroupBox.qml"), &QmlCacheGeneratedCode::_qml_basic_GroupBox_qml::unit);
        resourcePathToCachedUnit.insert(QStringLiteral("/qml/basic/Listview.qml"), &QmlCacheGeneratedCode::_qml_basic_Listview_qml::unit);
        resourcePathToCachedUnit.insert(QStringLiteral("/qml/alert/null.qml"), &QmlCacheGeneratedCode::_qml_alert_null_qml::unit);
        resourcePathToCachedUnit.insert(QStringLiteral("/qml/basic/Text.qml"), &QmlCacheGeneratedCode::_qml_basic_Text_qml::unit);
        resourcePathToCachedUnit.insert(QStringLiteral("/qml/main.qml"), &QmlCacheGeneratedCode::_qml_main_qml::unit);
        resourcePathToCachedUnit.insert(QStringLiteral("/qml/basic/Slider.qml"), &QmlCacheGeneratedCode::_qml_basic_Slider_qml::unit);
        resourcePathToCachedUnit.insert(QStringLiteral("/js/images.js"), &QmlCacheGeneratedCode::_js_images_js::unit);
        resourcePathToCachedUnit.insert(QStringLiteral("/js/global.js"), &QmlCacheGeneratedCode::_js_global_js::unit);
        resourcePathToCachedUnit.insert(QStringLiteral("/qml/LeftMain.qml"), &QmlCacheGeneratedCode::_qml_LeftMain_qml::unit);
        resourcePathToCachedUnit.insert(QStringLiteral("/qml/basic/CheckBox.qml"), &QmlCacheGeneratedCode::_qml_basic_CheckBox_qml::unit);
        resourcePathToCachedUnit.insert(QStringLiteral("/qml/MainPage.qml"), &QmlCacheGeneratedCode::_qml_MainPage_qml::unit);
        resourcePathToCachedUnit.insert(QStringLiteral("/qml/BottomMain.qml"), &QmlCacheGeneratedCode::_qml_BottomMain_qml::unit);
        resourcePathToCachedUnit.insert(QStringLiteral("/qml/basic/TextField.qml"), &QmlCacheGeneratedCode::_qml_basic_TextField_qml::unit);
        resourcePathToCachedUnit.insert(QStringLiteral("/qml/basic/MenuColumn.qml"), &QmlCacheGeneratedCode::_qml_basic_MenuColumn_qml::unit);
        resourcePathToCachedUnit.insert(QStringLiteral("/qml/basic/MenuBox.qml"), &QmlCacheGeneratedCode::_qml_basic_MenuBox_qml::unit);
        resourcePathToCachedUnit.insert(QStringLiteral("/qml/basic/MenuButton.qml"), &QmlCacheGeneratedCode::_qml_basic_MenuButton_qml::unit);
        resourcePathToCachedUnit.insert(QStringLiteral("/qml/basic/Button.qml"), &QmlCacheGeneratedCode::_qml_basic_Button_qml::unit);
        resourcePathToCachedUnit.insert(QStringLiteral("/qml/basic/MenuTextField.qml"), &QmlCacheGeneratedCode::_qml_basic_MenuTextField_qml::unit);
        resourcePathToCachedUnit.insert(QStringLiteral("/qml/basic/Dialog.qml"), &QmlCacheGeneratedCode::_qml_basic_Dialog_qml::unit);
        resourcePathToCachedUnit.insert(QStringLiteral("/qml/basic/BusyIndicator.qml"), &QmlCacheGeneratedCode::_qml_basic_BusyIndicator_qml::unit);
        resourcePathToCachedUnit.insert(QStringLiteral("/qml/basic/Rectangle.qml"), &QmlCacheGeneratedCode::_qml_basic_Rectangle_qml::unit);
        resourcePathToCachedUnit.insert(QStringLiteral("/qml/RightMain.qml"), &QmlCacheGeneratedCode::_qml_RightMain_qml::unit);
        resourcePathToCachedUnit.insert(QStringLiteral("/qml/ColorMap.qml"), &QmlCacheGeneratedCode::_qml_ColorMap_qml::unit);
        resourcePathToCachedUnit.insert(QStringLiteral("/qml/basic/MenuRow.qml"), &QmlCacheGeneratedCode::_qml_basic_MenuRow_qml::unit);
        resourcePathToCachedUnit.insert(QStringLiteral("/qml/basic/MarkLine.qml"), &QmlCacheGeneratedCode::_qml_basic_MarkLine_qml::unit);
        resourcePathToCachedUnit.insert(QStringLiteral("/qml/basic/MenuBlank.qml"), &QmlCacheGeneratedCode::_qml_basic_MenuBlank_qml::unit);
        resourcePathToCachedUnit.insert(QStringLiteral("/qml/LoginPage.qml"), &QmlCacheGeneratedCode::_qml_LoginPage_qml::unit);
        resourcePathToCachedUnit.insert(QStringLiteral("/qml/alert/error.qml"), &QmlCacheGeneratedCode::_qml_alert_error_qml::unit);
    QQmlPrivate::RegisterQmlUnitCacheHook registration;
    registration.version = 0;
    registration.lookupCachedQmlUnit = &lookupCachedUnit;
    QQmlPrivate::qmlregister(QQmlPrivate::QmlUnitCacheHookRegistration, &registration);
QT_PREPEND_NAMESPACE(qRegisterResourceData)(/*version*/0x01, qt_resource_tree, qt_resource_names, qt_resource_empty_payout);
}

Registry::~Registry() {
    QQmlPrivate::qmlunregister(QQmlPrivate::QmlUnitCacheHookRegistration, quintptr(&lookupCachedUnit));
}

const QQmlPrivate::CachedQmlUnit *Registry::lookupCachedUnit(const QUrl &url) {
    if (url.scheme() != QLatin1String("qrc"))
        return nullptr;
    QString resourcePath = QDir::cleanPath(url.path());
    if (resourcePath.isEmpty())
        return nullptr;
    if (!resourcePath.startsWith(QLatin1Char('/')))
        resourcePath.prepend(QLatin1Char('/'));
    return unitRegistry()->resourcePathToCachedUnit.value(resourcePath, nullptr);
}
}
int QT_MANGLE_NAMESPACE(qInitResources_js)() {
    ::unitRegistry();
    return 1;
}
Q_CONSTRUCTOR_FUNCTION(QT_MANGLE_NAMESPACE(qInitResources_js))
int QT_MANGLE_NAMESPACE(qCleanupResources_js)() {
    return 1;
}
int QT_MANGLE_NAMESPACE(qInitResources_qml)() {
    ::unitRegistry();
    return 1;
}
Q_CONSTRUCTOR_FUNCTION(QT_MANGLE_NAMESPACE(qInitResources_qml))
int QT_MANGLE_NAMESPACE(qCleanupResources_qml)() {
    return 1;
}
