#include "Hal.hpp"

int main() {
    HalDriver driver(0x40000000);
    driver.write_reg(0x0, 0xDEADBEEF);
    return 0;
}