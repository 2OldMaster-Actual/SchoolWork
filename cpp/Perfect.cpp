#include <iostream>
using namespace std;

//Global Variable Declaration
const int SIZE=5000;/*5000*/

//Function Declaration
int math (int);

int main()
{
	int i, Perf, Abnd, Defc, sum;
	double RatPerf, RatAbnd, RatDefc;
	Perf=0; Abnd=0; Defc=0; //Variable initializations
	for(i=1;i<=SIZE;i++)
	{
		//i passed to function. Return value compared to i.
		sum = math(i);
		if(sum == i) //Perfects
		{
			Perf=Perf+1;
			cout<<i<<" is a perfect number."<<endl;
		}
		else if(sum > i) //Abundants
		{
			Abnd=Abnd+1;
			if(i%2==1)
			{
				cout<<i<<" is an odd abundant number."<<endl;
			}
		}
		else if(sum < i) //Deficients
		{
			Defc=Defc+1;
		}
		else
		{
			cout<<"Something went terribly wrong here. Goodbye."<<endl;
			break;
		}
	}
	//Math is wrong. Unsure how.
	RatPerf=(Perf/SIZE*100); RatAbnd=(Abnd/SIZE)*100; RatDefc=(Defc/SIZE)*100; //Ratio Calc
	cout<<"Below the number "<<SIZE<<", "<<RatPerf<<"% are perfect, "<<RatAbnd<<"% are abundant, and "<<RatDefc<<"% are deficient."<<endl;
	cout<<"There are "<<Perf<<" perfect numbers."<<endl;
	return 0;
}

int math (int y)
{
	//Division calculation
	int x, run;
	run=0;
	for(x=1; x<=y-1; x++)
	{
		if(y%x==0)
		{
			run=run+x;
		}
	}
	return run;
}
