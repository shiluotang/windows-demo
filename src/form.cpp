#include <string>
#include <cstring>

#include <stdexcept>

#include "window.hpp"
#include "form.hpp"

namespace org {
    namespace sqg {

        struct wndclass {
            xstring _M_className;
            xstring _M_menuName;

            WNDCLASSEX _M_data;

            wndclass() { std::memset(&_M_data, 0, sizeof(_M_data)); }
            virtual ~wndclass() { }

            xstring getMenuName() const { return _M_menuName; }
            wndclass& setMenuName(xstring const &name) { _M_menuName = name; return *this; }

            xstring getClassName() const { return _M_className; }
            wndclass& setClassName(xstring const &name) { _M_className = name; return *this; }
        };

        struct form::impl_data {
            wndclass    _M_class;
            HINSTANCE   _M_instance;
            HMENU       _M_menu;
            HACCEL      _M_accelarators;
            HWND        _M_window;
            xstring     _M_name;
        };

        form::form() :_M_data(new form::impl_data()) {
            if (!_M_data)
                throw std::runtime_error("Can't initialize form!");
        }

        form::~form() {
            if (_M_data) {
                delete _M_data;
                _M_data = NULL;
            }
        }

        form& form::name(xstring const &name) {
            _M_data->_M_name = name;
            return *this;
        }

        xstring form::name() const {
            return _M_data->_M_name;
        }
    }
}
