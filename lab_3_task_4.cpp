#include <iostream>
#include <stdio.h>
#include <bitset>
#include <cmath>
#include <limits>
#include <iomanip>
#include <sstream>
#include "lab_3.h"
using namespace std;

int printAnimal(Animals animal) {
switch (animal) {
case Animals::PIG:
std::cout << "Pig" << std::endl;
break;
case Animals::CHICKEN:
std::cout << "Chicken" << std::endl;
break;
case Animals::GOAT:
std::cout << "Goat" << std::endl;
break;
case Animals::CAT:
std::cout << "Cat" << std::endl;
break;
case Animals::DOG:
std::cout << "Dog" << std::endl;
break;
default:
std::cout << "Unknown" << std::endl;
break;
  }
return 0;
}

int printNumberOfLegs(Legs number) {
switch (number) {
case Legs::PIG_LEGS:
std::cout << "Pig has 4 legs" << std::endl;
break;
case Legs::CHICKEN_LEGS:
std::cout << "Chicken has 2 legs" << std::endl;
break;
case Legs::GOAT_LEGS:
std::cout << " Goat has 4 legs" << std::endl;
break;
case Legs::CAT_LEGS:
std::cout << "Cat has 4 legs" << std::endl;
break;
case Legs::DOG_LEGS:
std::cout << "Dog has 4 legs" << std::endl;
break;
default:
std::cout << "Unknown" << std::endl; // Если ничего Не совпало
break;
  }
return 0;
}
