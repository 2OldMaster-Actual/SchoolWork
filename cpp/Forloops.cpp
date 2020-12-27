#include <iostream>
using namespace std;

void Num();
void Letter();
void Column();
void Chars();

int main()
{
	Num();
	cout<<endl;
	Letter();
	cout<<endl;
	Column();
	cout<<endl;
	Chars();
	return 0;
}

//Prints every even number between 3 and 43
void Num()
{
	for(int i=4; i<43; i=i+2)
	{
		cout<<i<<" ";
	}
	cout<<endl;
}

//Prints every third letter from B
void Letter()
{
	for(char a='B'; a<='Z'; a=a+3)
	{
		cout<<a<<" ";
	}
	cout<<endl;
}

//Prints 1-20 in left column and 20-1 in right column
void Column()
{

	cout<<endl;
}

//Prints every printable character in computer's character set
void Chars()
{

	cout<<endl;
}
