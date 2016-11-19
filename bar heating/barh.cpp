#include "oned.h"
#include <iostream>
#include <math.h>

const double PI=4*atan(1);
using namespace std;
double begf(double t)
{
	return sin(5*PI*t/2);
}

void main()
{
	double ta,left,right;
	unsigned int N;
	cout<<"Tao:";
	cin>>ta;
	cout<<"N";
	cin>>N;
	//cin>>left; cout<<".."; cin>>right;
	left=0;
	right=1;

	
	double eps;
	cout<<"eps?!";
	cin>>eps;

	oned bar(ta,N,left,right,begf);
	bar.solve1(eps);


}