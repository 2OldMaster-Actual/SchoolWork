#include <iostream>
using namespace std;

//Global Variable Declarations
const int STUDENT = 10;
const double EXAM1 = .10;
const double EXAM2 = .25;
const double EXAM3 = .30;
const double EXAM4 = .35;

//Function Declarations
double weighted(double, double, double, double);

int main()
{
	//Declarations
	double i, test1, test2, test3, test4, final;
	double run1, run2, run3, run4, avg1, avg2, avg3, avg4;
	//initializations
	run1 = 0;
	run2 = run1;
	run3 = run2;
	run4 = run3;
	//Future iterations include extracting grades from .csv
	for(i=1;i<=STUDENT;i++)
	{
		cout<<"Enter scores for each student."<<endl;
		cin>>test1>>test2>>test3>>test4;
		final = weighted(test1,test2,test3,test4);
		cout<<"Student "<<i<<"'s final grade is "<<final<<"%."<<endl;
		run1=run1+test1;
		run2=run2+test2;
		run3=run3+test3;
		run4=run4+test4;
	}
	avg1 = run1/STUDENT;
	avg2 = run2/STUDENT;
	avg3 = run3/STUDENT;
	avg4 = run4/STUDENT;
	//Add precision to 2 decimal spots
	cout<<"Exam1 Avg: "<<avg1<<"%."<<endl;
	cout<<"Exam2 Avg: "<<avg2<<"%."<<endl;
	cout<<"Exam3 Avg: "<<avg3<<"%."<<endl;
	cout<<"Exam4 Avg: "<<avg4<<"%."<<endl;
	return 0;
}

double weighted(double score1, double score2, double score3, double score4)
{
	double weight;
	weight = (score1*EXAM1)+(score2*EXAM2)+(score3*EXAM3)+(score4*EXAM4);
	return weight;
}
