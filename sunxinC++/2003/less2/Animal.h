#ifndef ANIMAL_H_H
#define ANIMAL_H_H

class Animal{
public:
	Animal();
	// overloaded
	Animal(int height, int weight);
	void eat();
	void sleep();

	void virtual breathe();
	// pure abstract func: the inherent class MUST implement this func
	//void virtual breathe() = 0;

};
#endif

