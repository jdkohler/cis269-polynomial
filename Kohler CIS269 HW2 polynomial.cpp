// Kohler CIS269 HW2

#include <iostream>
#include <vector>
#include "polynomial.h"


using namespace std;

int main(int argc, char *argv[]) {
	
	Polynomial<int> intPolyCalc;
	vector<int> intPoly1 = {1,5,1};
	vector<int> intPoly2 = {3,-10,15};
	
	intPolyCalc.print(intPoly1);
	intPolyCalc.print(intPoly2);
	intPolyCalc.multiply(intPoly1, intPoly2);
	intPolyCalc.add(intPoly1, intPoly2);
	
	Polynomial<double> doublePolyCalc;
	vector<double> doublePoly1 = {1.5,2.5,3.5};
	vector<double> doublePoly2 = {3.5,-5.5,2.5};
	
	doublePolyCalc.print(doublePoly1);
	doublePolyCalc.print(doublePoly2);
	doublePolyCalc.multiply(doublePoly1, doublePoly2);
	doublePolyCalc.add(doublePoly1, doublePoly2);
	
	return 0;	
}