// CMakeProject1.cpp : Defines the entry point for the application.
//

#include "CMakeProject1.h"

using namespace std;
void fehler()
{
	cout << "Fehler" << endl;
	//throw "Fehler";
}
void test() {
	fehler();
}
int main()
{
	test();
	cout << "Hello CMake.!!" << endl;
	return 0;
}
