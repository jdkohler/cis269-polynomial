#include <iostream>
#include <vector>
#include "polynomial.h"


using namespace std;

int main(int argc, char *argv[]) {
	
	Polynomial<int> polyClass;
	vector<int> firstPoly = {1,5,1};
	vector<int> secondPoly = {3,-10,15};
	
	polyClass.multiply(firstPoly, secondPoly);
	polyClass.add(firstPoly, secondPoly);
	
	return 0;	
}