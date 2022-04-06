#include<iostream>
#include<string.h>
using namespace std;

int main()
{
	int a, b;
	cin >> a >> b;
	if (a > b) { cout << '>'; }
	else if (a < b) { cout << '<'; } //큰 따옴표는 문자열 받을수 있고, 작은 따옴표는 char로 한글자 받고, 그걸 아스키코드로 변경된후 처리된다.
	else { cout << "=="; }
}
