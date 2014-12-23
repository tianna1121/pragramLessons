#include <iostream>
using namespace std;

class Animal{
public:
	Animal(){ cout << "animal construct" << endl; }
	// overloaded
	Animal(int height, int weight){ cout << "animal construct overloaded param" << endl; }

	
	void eat(){
		cout << "animal eat" <<endl;
	}

// can only access by inherent class
// cannot access by others
// protected:
	void sleep(){
		cout << "animal sleep" << endl;
	}

// cannot access by inherent class
// private:
	// Note we can virtual breathe()
	// this is called polymorphic, based on address of function
	// at runtime. If the inherent class does not implement this
	// function, it will call father's class's function
	void virtual breathe(){	cout << "animal breathe" << endl; }
	// pure abstract func: the inherent class MUST implement this func
	//void virtual breathe() = 0;

	~Animal(){ cout << "Animal Deconstruct" << endl; }
};

// if father class public, then public
// if father class protected, then protected
class Fish : public Animal{
public:
	// overloaded Animal(int height, int weight)
	Fish() : Animal(400,300),a(1) { cout << "Fish construct" << endl; }
//	void test(){
//		sleep();
//		// if prive: cannot access by inherent class
//		breathe();
//	}
	~Fish(){ cout << "Fish Deconstruct" << endl; }

	// overude: used in the inherented class
	void breathe(){ 
		// Note: the Animal::
		// Animal::breathe();
		cout << "fish bubble" << endl;
	} 
private:
	const int a;

};

void fn(Animal *pAn){
	pAn->breathe();
}

int main(){

//	Animal an;
//	an.eat();
	// cannot be accessed
//	an.breathe();

	Fish fh;
	fh.breathe();
	fh.sleep();

	cout << "test Animal *pAn" << endl;
	Animal *pAn;
	pAn = &fh;
	// call for Animal's breathe()
	// since Animal's object and Fish' object
	// have the same start address
	// However, if we virtual the Animal's breathe()
	// then this will call Fish's breathe()
	fn(pAn);

	// pointers vs reference
	int a = 8;
	// ref: MUST initialize &b
	// This is NOT get address of a
	// It is a alias name, it does have address
	// It can be used to param transfer
	int &b = a;
	b = 5;
	cout << "b = " << b << endl;

	// This is *pC point to c's address
	int c = 9;
	int *pC = &c;
	cout << "*pC = " << *pC << endl;

	return 0;
}

