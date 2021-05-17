//
// Created by philip on 2021-05-14.
//

#ifndef ANITEST_ANIMALFACTORY_H
#define ANITEST_ANIMALFACTORY_H

#include "Animal.h"

class AnimalFactory {
public:
    AnimalFactory();
    Animal create(char code);
};

#endif //ANITEST_ANIMALFACTORY_H
