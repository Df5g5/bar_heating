

#pragma once

//#include <vector>
#include <math.h>

using namespace std;
double res(double*,double*,unsigned int);
class oned
{
private:
	double left,right;
	double* btemp;
	double ta;
	unsigned int N;
	//vector< double* > result;
		
	


public:
	oned(void);
	oned(double _ta,double _N, double left, double right, double (*bf) ( double));

	void setbf(double (*bf) ( double));
	void setta(double);
	void setN(unsigned int);
	void solve1(double);
	
	//void print(string);
	~oned(void);
};

