#include <iostream>
using namespace std;

int main()
{
	int orig,set3,set6,set9;
	int e1,e2,e3,e4,e5,e6,e7,e8,e9;
	int divtemp,divset3,divset6,divset9;
	cout<<"This program will print a number with commas."<<endl<<"Please enter a whole number."<<endl;
	cin>>orig;
	/*
	Pass into function to separate orig
	Pass into function to separate sections for 0's
	*/
	//orig
		set3 = orig%1000;
		divtemp = orig/1000;
		set6 = divtemp%1000;
		set9 = divtemp/1000;
	//set3
		e1 = set3%10;
		divset3 = set3/10;
		e2 = divset3%10;
		e3 = divset3/10;
	//set6
		e4 = set6%10;
		divset6 = set6/10;
		e5 = divset6%10;
		e6 = divset6/10;
	//set9
		e7 = set9%10;
		divset9 = set9/10;
		e8 = divset9%10;
		e9 = divset9/10;

	cout<<"Your number shall be formatted this way:"<<endl;
	cout<<set9<<","<<e6<<e5<<e4<<","<<e3<<e2<<e1<<endl;
	//e7-9 not included so as to remove leading zeros
	return 0;
}



/*
Future edit
Include function to count digits, divide by 3, then use forloop to add numbers for n sized integers
Count orig
n=(orig/3)+1
?logic to % for hundreds, thousands, millions, billions, trillions, quadrillions, quintillions, etc
?logic to / for next level of numbers
keep values from % and / as variables
*/
