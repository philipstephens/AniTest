//
// Created by philip on 2021-05-14.
//

#ifndef ANITEST_DOG_H
#define ANITEST_DOG_H

#include "Animal.h"

class Dog : public Animal {

public:
    Dog();
    void speak() override;
};

#endif //ANITEST_DOG_H
