#include "stdafx.h"
#include <iostream> 
#include <math.h>

using namespace std; //��� ����, ��� ��������� cin, cout

int main()
{
	double  x, a, b, h, d, sum;  // a,b - ��������; h- ����; d- �������; sum - ���������
	double y; // y - �������
	int n;

	cout << "Input a: \n";
	cin >> a;

	cout << "Input b: \n";
	cin >> b;

	cout << "Input h: \n";
	cin >> h;

	cout << "Input d: \n";
	cin >> d;

	for (x = a; x <= b; x = x + h)
	{
		sum = 0;
		n = 1;

		do
		{
			y = pow(x - 1, n) / (n * pow(x, n));
			sum = sum + y;
			n++;

		}

		while (fabs(y) > d);

		cout << "x=" << x << "\t" << "y=" << y << "\t" << "sum=" << sum << "\n";
	}
}