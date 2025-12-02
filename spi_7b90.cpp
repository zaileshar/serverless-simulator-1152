#include "Spi.hpp"

int main() {
    SpiDriver driver(0x40000000);
    driver.write_reg(0x0, 0xDEADBEEF);
    return 0;
}