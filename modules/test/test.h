#ifndef TEST_H
#define TEST_H

#include "reference.h"

class Test : public Reference {
    OBJ_TYPE(Test,Reference);

    int count;

protected:
    static void _bind_methods();

public:
    void add(int value);
    void reset();
    int get_total() const;

    Test();
};

#endif // TEST_H
