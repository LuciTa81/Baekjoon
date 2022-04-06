#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	int A, B;
	int a, b, c;
	cin >> A;
	cin >> B;
	a = B / 100;
	b = (B - (100 * a)) / 10;
	c = (B - (100 * a) - (b * 10));
	cout << A * c << endl << A * b << endl << A * a << endl<< A * B <<endl;
	return 0;
}
