#include <iostream.h>
#include <string>


using namespace std;
string call(bool val)
{
	string n;
if(val==0)
{
//	n="not married";
return "not married";
}
else
//n="married";
return "married";
//return string(n);
}
int main()
{
	const int day=1;
	int age;
double sal;
	char name[25];
	bool status;
	cout<<"Enter your name:";
	cin>>name;
	cout<<"\n Enter your age:";
	cin>>age;
	cout<<"\n Enter your salary :";
	cin>>sal;
	cout<<"Are you married ? Answer in true or false ";
	cin>>status;
	cout<<"Name of the person:"<<name<<"\n age :"<<age<<"\n salary of the person:"<<sal<<"Married:?"<<call(status);
	cout<<"\n Constant using define "<<position;
	cout<<"\n Constant declared using keyword const:"<<day;
	return 0;
	
	
	
}

