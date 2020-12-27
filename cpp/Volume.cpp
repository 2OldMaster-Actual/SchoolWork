#include <iostream>
using namespace std;

int main()
{
	double r,volume,surfarea;
	double pi=3.14;//15926535
	cout<<"User, provide radius for volume and surface area of sphere"<<endl;
	cin>>r;
	volume = pi*r*r*r*4/3;
	surfarea = pi*r*r*4;
	cout<<"Volume: "<<volume<<"."<<endl;
	cout<<"Surface area: "<<surfarea<<"."<<endl;
	return 0;
}
