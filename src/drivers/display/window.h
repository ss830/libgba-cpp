#ifndef GBA_DRIVERS_DISPLAY_CONTROL_H
#define GBA_DRIVERS_DISPLAY_CONTROL_H

#include "control.h"

namespace gba::display {

enum class Window {
    WIN0,
    WIN1,
    OBJ,
};

inline void window_visible(Window window, bool visible) {
    lcd_control[13 + utils::value_of(window)] = visible;
}

}

#endif
