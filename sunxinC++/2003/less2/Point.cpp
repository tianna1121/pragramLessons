#include <iostream>

using namespace std;

//struct Point
class Point{
public:
	int x;
	int y;

	/*
	void init(){
		x = 0;
		y = 0;
	}
	*/

	// constructor: can have params
	// can allocate heap
	Point(){
		x = 1;
		y = 1;
	}

	// constructor overload: different params 
	// Note: void output(int a, int b=5);
	//       void output(int a)
	// these two cannot overload
	Point(int a, int b){
		x = a;
		y = b;
	}

	// deconstructor: OS call this, only one for a class
	// no params, no returns
	// should delete allocated heap here
	~Point(){

	}

	void output(){
		cout << x << endl << y << endl;
	}
	// overloaded
	// Note: this point to object, not class
	// every object has its this point
	void output(int x, int y){
		this->x = x;
		this->y = y;
	}
};

int main()
{
	Point pt(3, 4);

	// pt.x = 5;
	// pt.y = 10;
	// if pt.x and pt.y not initialized, then output:
	// 1569634440
	// 32767

	// we can use init() just as buy a Lenovo Computer
	// all the hardware and software are pre-allocated.
	// pt.init();
	// Note: (5,6) cannot assign to x,y, use this->x
	pt.output(5, 6);
	pt.output();

	return 0;

}

