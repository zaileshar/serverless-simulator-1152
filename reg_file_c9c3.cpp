#ifndef REG_FILE_H
#define REG_FILE_H

class Reg_fileController {
public:
    virtual void init() = 0;
    virtual void process() = 0;
};

#endif