#include <iostream.h>
int main()
{
	int *p,b=56;
	int array[5];
	p=&b;
	
//Without the use of  Pointer printing address of variable;
std::cout<<"\n Address of variable without using  pointer"<<&b;
std::cout<<"\n Value of variable"<<b;
//With The Use Of Pointe,printing address;
	std::cout<<"\naddress is:"<<p;
std::cout<<"\nvalue of the variable is:"<<*p;	
std::cout<<"Address of array:\n"<<array;
for(int i=0;i<5;i++)
	std::cout<<"\nAddress of array at index" << i<<":"<<&array[i];
	std::cout<<"end of address";
	
	
	
}
