#include <iostream>
using namespace std;

//Global Variable Declarations
const double gasbasequant = 31;
const double gasbaseprice = 0.504;
const double gasoverprice = 0.824;
const double elecbasequant = 238.7;
const double elecbaseprice = 0.094;
const double elecoverprice = 0.133;

//Function Declaration
double charges(double, double, double, double, double);

int main()
{
	double gasstart, gasend, elecstart, elecend, gas, elec;
	cout<<"What are your start and end readings for gas?"<<endl;
	cin>>gasstart;
	cin>>gasend;
	cout<<"What are your start and end readings for electric?"<<endl;
	cin>>elecstart;
	cin>>elecend;
	gas = charges(gasbasequant, gasbaseprice, gasoverprice, gasstart, gasend);
	elec = charges(elecbasequant, elecbaseprice, elecoverprice, elecstart, elecend);
	cout<<"Your individual bills this month are $"<<gas<<" for gas and $"<<elec<<" for electrcity."<<endl;
	cout<<"Your total bill this month is $"<<gas+elec<<"."<<endl;
	return 0;
}

double charges(double amnt, double bp, double op, double beg, double end)
{
	double usage, overage, total;
	usage = end - beg;
	if(usage > amnt)
	{
		overage = usage - amnt;
		total = (amnt * bp) + (overage * op);
	}
	else
	{
		total = usage * bp;
	}
	//Future edit - format to 0.01 as currency
	return total;
}
