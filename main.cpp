#include <iostream>
#include "AnimalFactory.h"
#include "Animal.h"
#include "Dog.h"
#include "Duck.h"

int main() {
    AnimalFactory af = AnimalFactory();

    Animal dog;
    Animal duck;

    dog = af.create('a');
    duck = af.create('b');

    duck.speak();
    dog.speak();

    return 0;
}
