#include "Reg_file.hpp"

int main() {
    Reg_fileDriver driver(0x40000000);
    driver.write_reg(0x0, 0xDEADBEEF);
    return 0;
}