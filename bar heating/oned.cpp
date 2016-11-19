#include "oned.h"
#include <fstream>
#include <string>
#include <iostream>
#include"conio.h"

//double res(double* t1,double*t2,unsigned int N)
//{
//	double max=0;
//	for(int i=0;i<N;i++)
//	{
//
//		
//		if(fabs(t1[i]-t2[i])>max)
//			max=fabs(t1[i]-t2[i]);
//		//cout<<fabs(t1[i]-t2[i])<<'\n';
//	}
//	//getch();
//
//	return max;
//	
//	//for(int i=0;i<t1.size;i++)
//	//	if(abs(t1.at(i)-t2.at(i))>max)
//	//		max=abs(t1.at(i)-t2.at(i))>max;  // max=abs(t1->at(i)-t2->at(i))>max?abs(t1->at(i)-t2->at(i)):max;
//	//return max;
//	//for(vector<double>::iterator i=t1->begin,
//}

oned::oned(void)
{
	ta=0;
	N=0;
	
	// result=vector< double* >();
}
using namespace std;
		 oned::oned(double _ta,double _N, double _left, double _right, double (*bf) ( double))	
{
	ta=_ta;
	N=_N;
	left=_left;
	right=_right;
	
	btemp=new double[N];
	
	if(!((left==bf(0))&&(right==bf(1))))
		return;
	
	btemp[0]=left;
	for(int i=1;i<N;i++)
		btemp[i]=bf(i*1./N);
}
	void oned::setta(double _ta)
	{
		ta=_ta;
	}
	void oned::setN(unsigned int _N)
	{
		N=_N;
	}
	void oned::setbf(double (*bf) ( double))
	{
		if(!((left==bf(0))&&(right==bf(1))))
		return;
	


		/*if(btemp.size()!=0)
			btemp.clear();*/
		
		for(int i=0;i<N;i++)
			btemp[i]=bf(i*1./N);
	}
	void oned::solve1(double eps)
	{

		

		//ofstream fout("re.txt");
		//if (ta*N*N-1>=eps)   //сойдется?
		// return;

		//result.push_back(btemp);

		unsigned int c=0;
		double *t1,*t2;
		t1=btemp;
		t2=new double[N];
		double T=ta;
		double ts=ta*10;
		/*
		double*l=new double[N];
		for(int i=0;i<N;i++)
		{
			l[i]=i*1./N-1;
		}
*/

	
	double max=0;
		do
		{


			max=0;
			t2[0]=left;
			double *p=t2;
			for(int i=1;i<N-1;i++)
				{
					t2[i]=(t1[i-1]-2*t1[i]+t1[i+1])*ta*N*N+t1[i];
					if(fabs(t2[i]-i*1./(N-1))>max)
						max=fabs(t2[i]-i*1./(N-1));
				}
			t2[N-1]=right;

			double*t=t1;
			t1=t2;
			t2=t;
			
			//result.push_back(t1);
			
			//if(c%10==0)	
			/*{
			for(int i=0;i<N;i++)
				fout<<t1[i]<<'\t';
			fout<<T<<'\n';
			}
			c++;
			
*/				
			T+=ta;
			char*s=new char[];
			if(T>ts)
			{
				c++;
				sprintf(s,"a%d.txt",c);
				cout<<s;
				ofstream fout(s);
				for(int i=0;i<N;i++)
					fout<<i*1./(N-1)<<' '<<t1[i]<<'\n';
				fout.close();		
				ts+=ta*100;
			}
			
			cout<<max<<'\n';
		}
		while(max>eps);
		//vector<double> *t1,*t2;
		//t1=new vector<double>(btemp);
		//t2=new vector<double>();
		//
		//vector<double> lin;
		//for(int i=0;i<N;i++)
		//	lin.push_back(i*1./N);
		//while(res(*t1,lin)>eps)
		//{
		//	t2->push_back(left);
		//	for(int i=1;i<N;i++)
		//		t2->( (t1->at(i+1)-2.*t1->at(i)+t1->at(i-1))*ta*N*N + t1->at(i));
		//	if(res(*t1,*t2)>10*eps)    //когда стоит добавлять
		//		result.push_back(*t2);
		//	
		//		vector<double>
		//		t2
		//	
		//	
		//	
		//	
		//	c=(c+1)%2; // добавлять только 10-ые? или оставить так
		//}
		
			
		
		
		//fout.close();
		cout<<"Done\n";
		cout<<c;
		getch();
		
	
	}

oned::~oned(void)
{
}


