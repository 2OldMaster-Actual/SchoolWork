#include <iostream>
using namespace std;

//Function delaration
int math (int);
char checkletter(int);

int main()
{
	int input,calc;
	char alpha;
	cout<<"Adds a checkletter. Please enter an 8 digit number."<<endl;
	cin>>input;
	calc = math(input);
	cout<<"CheckNumber: "<<calc<<"."<<endl;
	alpha = checkletter(calc);
	cout<<"Letter: "<<alpha<<"."<<endl;
	cout<<"Therefore, your checkletter is "<<input<<alpha<<"."<<endl;
	return 0;
}

//calculates number used for letter
int math(int r)
{
	int halfbot,halftop,quartbot,quartmid1,quartmid2,quarttop,sum;
	halfbot=r%10000;
	halftop=r/10000;
	quartbot=halfbot%100;
	quartmid1=halfbot/100;
	quartmid2=halftop%100;
	quarttop=halftop/100;
	sum=(quartbot+quartmid1+quartmid2+quarttop)%26;
	cout<<sum<<endl;
	return sum;
}

//calculates letter
char checkletter(int x)
{
	char letter;
	letter = 'A' + x;
	//Takes 'A' as in unicode(?) value and adds onto that to determine checkletter
	return letter;
}
