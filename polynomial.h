// Kohler CIS269 HW2

#include <vector>

using namespace std;

#ifndef _polynomial_h_
#define _polynomial_h_

template <class T>
class Polynomial
{
	public:
		void print(vector<T>& poly);
		void add(vector<T>& poly1, vector<T>& poly2);
		void multiply(vector<T>& poly1, vector<T>& poly2);
		
	private:
};

template <class T>
void Polynomial<T>::print(vector<T>& poly)
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
void Polynomial<T>::multiply(vector<T>& poly1, vector<T>& poly2)
{
	vector<T> resultPoly = {0,0,0,0,0};

	for(int i = 0; i < poly1.size(); i++)
		for(int j = 0; j < poly2.size(); j++)
			resultPoly[i+j] += (poly1[i] * poly2[j]);

	print(resultPoly);
}

template <class T>
void Polynomial<T>::add(vector<T>& poly1, vector<T>& poly2)
{
	vector<T> resultPoly = {0,0,0};
	
	for (int i = 0; i < resultPoly.size(); i++)
		resultPoly[i] = poly1[i] + poly2[i];
	
	print(resultPoly);

}

#endif