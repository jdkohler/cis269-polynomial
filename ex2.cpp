#include <iostream>
#include "genClass.h"

using namespace std;

int main(int argc, char *argv[]) {
	
	genClass<float> genObject(100);
	genObject.addElement(10);
	genObject.addElement(20);
	genObject.addElement(30);
	
	cout << genObject.getSize() << endl;
	cout << genObject.getElement(1) << endl;
	
	return 0;
}