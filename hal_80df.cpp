#ifndef HAL_H
#define HAL_H

class HalController {
public:
    virtual void init() = 0;
    virtual void process() = 0;
};

#endif