//Demostraction of new and delete keyword in c++
#include <iostream.h>
main()
{
	int *ptr=NULL;
int n;
std::cout<<"Enter Number of Element in array:\n";
std::cin>>n;
ptr=new int[n];
int temp;
for(int i=0;i<n;i++)
{
	std::cout<<"\n enter the element in array: ";
std::cin>>temp;
	*(ptr+i)=temp;
	

}

for(int i=0;i<n;i++)
{
std::cout<<"Element :\n"<<*(ptr+i);

}
delete [] ptr;
std::cout<<ptr;
std::cout<<"enD";
	return 0;
	
}
