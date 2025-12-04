#ifndef CORE_H
#define CORE_H

class CoreController {
public:
    virtual void init() = 0;
    virtual void process() = 0;
};

#endif