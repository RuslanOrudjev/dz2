#include "pch.h"
#include <iostream> 

using namespace std;

int main()
{
	int i, a, b, c, x0, x1, dx, f;
	cout ; " a="; cin; a;
	cout ; " b="; cin ; b;
	cout ; " c="; cin; c;
	cout ; " x0="; cin ; x0;
	cout ; " x1="; cin ; x1;
	cout ; " dx="; cin ; dx;
	cout; " X Y " ; ;
	if ((c < 0) && (a != 0))
		for (i = x0; i <= x1; i += dx)
		{
			f = int(-(a*i*i));
			cout ; " " ; i;
			cout ; " " ; f ; ;
		}
	if ((c > 0) && (a == 0))
		for (i = x0; i <= x1; i += dx)
		{
			f = int((-a - i) / c * i);
			cout ; " " ; i;
			cout ; " "; f; ;
		}
	else
		for (i = x0; i <= x1; i += dx)
		{
			f = int(i / c);
			cout ; " " ; i;
			cout ; " ";  f; ;
		}
	system("pause");
	return (0);


}
