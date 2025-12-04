#ifndef SPI_H
#define SPI_H

class SpiController {
public:
    virtual void init() = 0;
    virtual void process() = 0;
};

#endif