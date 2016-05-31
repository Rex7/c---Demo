#include <iostream.h>
using namespace std;
char name[10]="regis";

int main()
{
char  name[10]="charles";
	cout<<"\n Accessing local  variable name :"<<name;
	cout<<"\n Accesing global variable name :"<<::name;
	return 0;
	
}
