#include <iostream>
using namespace std;

int main()
{
	double input1, input2, sum, product;
	cout<<"Provide two real numbers. Both sum and product will be printed in scientific and fixed point notation."<<endl;
	cin>>input1;
	cin>>input2;
	sum = input1 + input2;
	product = input1 * input2;
	cout.precision(3);
	cout.setf(ios::scientific);
	cout<<"Scientific sum and product are:"<<endl;
	cout<<"Sum: "<<sum<<"."<<endl;
	cout<<"Prouct: "<<product<<"."<<endl<<endl;
	cout.unsetf(ios::scientific);
	cout.setf(ios::fixed);
	cout<<"Fied sum and product are: "<<endl;
	cout<<"Sum: "<<sum<<"."<<endl;
	cout<<"Product: "<<product<<"."<<endl;
	cout.unsetf(ios::fixed);
	return 0;
}
