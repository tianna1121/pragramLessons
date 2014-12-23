#include <iostream>
#include "Animal.h"
using namespace std;

Animal::Animal(){ cout << "ANIMAL CONSTRUCT" << endl; }

Animal::Animal(int height, int weight)
{
}

void Animal::eat(){ cout << "animal eat" << endl; }
void Animal::sleep(){ cout << "animal sleep" << endl; }
// without virtual
void Animal::breathe(){ cout << "animal breathe" << endl; }

