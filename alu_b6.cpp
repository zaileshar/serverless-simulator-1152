#ifndef ALU_H
#define ALU_H

class AluController {
public:
    virtual void init() = 0;
    virtual void process() = 0;
};

#endif