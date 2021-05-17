//
// Created by philip on 2021-05-14.
//

#include "AnimalFactory.h"
#include "Animal.h"
#include "Duck.h"
#include "Dog.h"

AnimalFactory::AnimalFactory() = default;

Animal AnimalFactory::create(char code) {
    if (code == 'a') {
        return Dog();
    } else if(code == 'b') {
        return Duck();
    }
}
