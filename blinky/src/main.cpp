#include <cstdlib>

#include <SEGGER_RTT.h>

#include "board.hpp"

extern "C" int main() {
    board::init();

    SEGGER_RTT_printf(0, "Test\n");

    for (;;) {
    }
}
