#include <iostream>
#include <cstdint>

class HalDriver {
public:
    HalDriver(uint32_t base_addr) : base_addr(base_addr) {}
    void write_reg(uint32_t offset, uint32_t val) {
        std::cout << "Writing " << val << " to 0x" << std::hex << base_addr + offset << std::endl;
    }
private:
    uint32_t base_addr;
};