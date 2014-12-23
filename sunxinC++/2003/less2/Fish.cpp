#include "Fish.h"
#include <iostream>
using namespace std;

//Fish::Fish(){ }
Fish::Fish():Animal(300, 400){ }

void Fish::breathe(){ cout << "fish bubble" << endl; }
