#include <iostream>
#include <vector>

using namespace std;

template <class T>
class Polynomial {
private:
		vector<T> poly;		
public:
		Polynomial(T first, T second, T third)
		{
			poly.push_back(first);
			poly.push_back(second);
			poly.push_back(third);
		}
		T getValue(int requestedValue)
		{
			return *(poly.begin()+requestedValue);
		}
		void print()
		{
			for ( vector<int>::iterator it = poly.begin(); it != poly.end(); ++it )
			{
				cout << *it << endl;
			}
		}
};

template <class T>
T addPoly(T poly1, T poly2)
{
	return poly1.getValue(0) + poly2.getValue(0);
}

int main(int argc, char *argv[])
{
	Polynomial<int> firstPoly(3,2,1);
	Polynomial<int> secondPoly(1,-2,3);
	
	firstPoly.print();
	secondPoly.print();
	
	cout << firstPoly.getValue(0) << endl;
	cout << firstPoly.getValue(1) << endl;
	cout << firstPoly.getValue(2) << endl;
	
	return 0;
}