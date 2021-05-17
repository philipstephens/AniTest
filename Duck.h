//
// Created by philip on 2021-05-14.
//

#ifndef ANITEST_DUCK_H
#define ANITEST_DUCK_H
#include "Animal.h"

class Duck : public Animal {

public:
    Duck();
    void speak() override;
};

#endif //ANITEST_DUCK_H
