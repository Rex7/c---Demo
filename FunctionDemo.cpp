//Function Demo 
/*
Note:default argument should be passed as the last argument to a function ,
else a error message is raised 
*/
#include <iostream.h>
#include <string>
using namespace std;
void show();
void show(string);
void arg(int pass,string name="admin");

int main()
{
	// if no argumnet is passed then no argument function is called
	show();
	//if username is not passed then default username is passed
	arg(982157);
	return 0;
}
void show()
{
	cout<<"Welcome anonymous ";
}
void show(string name)
{
	cout<<"\n welcome user "<<name;
}
void arg(int pass,string name)
{
	cout<<"\n name of the user "<<name<<"\n password: "<<pass;
}

