#include <iostream>

using namespace std;

//struct Point
struct Point{
public:
	int x;
	int y;
	void output(){
		cout << x << endl << y << endl;
	}
};

int main()
{
	Point pt;
	pt.x = 5;
	pt.y = 10;
	pt.output();

	return 0;

}

