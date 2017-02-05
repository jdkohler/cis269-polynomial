#include <iostream>
#include <vector>


using namespace std;

template <class T>
void print(vector<T>& poly)
{
	int exponent = poly.size();
	
	for (T i : poly)
	{
		--exponent;
		switch ( exponent )
		{
			case 0 : cout << i << endl;
				break;
			case 1 : cout << i << "x" << " + ";
				break;
			default : cout << i << "x^" << exponent << " + ";
		}
	}

}

template <class T>
void multiply(vector<T>& poly1, vector<T>& poly2)
{
	vector<T> resultPoly = {0,0,0,0,0};

	for(int i = 0; i < poly1.size(); i++)
		for(int j = 0; j < poly2.size(); j++)
			resultPoly[i+j] += (poly1[i] * poly2[j]);

	print(resultPoly);
}

template <class T>
void add(vector<T>& poly1, vector<T>& poly2)
{
	vector<T> resultPoly = {0,0,0};
	
	for (int i = 0; i < resultPoly.size(); i++)
		resultPoly[i] = poly1[i] + poly2[i];
	
	print(resultPoly);

}

int main(int argc, char *argv[]) {
	vector<int> firstPoly = {1,5,1};
	vector<int> secondPoly = {3,-10,15};
	
	multiply(firstPoly, secondPoly);
	add(firstPoly, secondPoly);
	
	return 0;	
}