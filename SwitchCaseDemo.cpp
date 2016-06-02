//Switch case Demonstration 
#include <iostream.h>
using namespace std;
int main()
{
int ch, a,b,result;

do
{
	cout<<"\n :1Addition \n 2:Substraction \n 3:Multiplication\n4:Division";
	cout<<"\n Choice  from the above mentioned  options";
	cin>>ch;
	switch(ch)
	{
		case 1:
			cout<<" \n Addition\n ";
			cout<<"Enter two numbers for addition";
			cin>>a>>b;
			result=a+b;
			cout<<"Addition of Numbers "<<a<<","<<b<<":"<<result;
			break;
		case 2:
			cout<<" \n Substraction\n ";
			cout<<"Enter two numbers for Substraction";
			cin>>a>>b;
			result=a-b;
			cout<<"\nSubstraction of Numbers "<<a<<","<<b<<":"<<result;
			break;
		case 3:
			cout<<" \n Multiplication\n ";
			cout<<"Enter two numbers for Multiplication";
			cin>>a>>b;
			result=a*b;
			cout<<"\nMultiplication of Numbers "<<a<<","<<b<<":"<<result;
			break;
		case 4:
			cout<<" \n Division\n ";
			cout<<"Enter two numbers for Division";
			cin>>a>>b;
			result=a/b;
			cout<<"\n Division of Numbers "<<a<<","<<b<<":"<<result;
			break;
		default :
			cout<<"\n Wronge choice";
			
			
	}
}while(ch<=4);
return 0;
}
