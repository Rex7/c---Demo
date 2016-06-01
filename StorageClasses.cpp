#include <iostream.h>
//declaring a one copy of a variable across the namespace;
static int count=10;
//declaring constant using define 
#define position 69
void display(int count);
int main()
{
	std::cout<<count;
	for (int i=0;i<5;i++)
	{
	count--;
		
	}
	display(count);
	return 0;
}
void display(int counter)
{
	std::cout<<"Value of counter after decrement is :"<<counter;
}
