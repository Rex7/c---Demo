#include <iostream.h>
#include <string>
class Pointer2Object
{
	private :
		int age;
		std::string name;
	public:
		//default Constructor
		Pointer2Object()
		{
		std::cout<<"\nConstructor Called";
		}
		~Pointer2Object()
		{
			std::cout<<"\nObject Destroyed ";
		}
		void insert()
		{
			std::cout<<"\nEnter Name";
	std::cin>>name;
	std::cout<<"\nEnter Age:";
	std::cin>>age;
			}	
		void display()
		{
			std::cout<<"\n Name Of The Person:"<<name<<"\nAge:"<<age;
		}
};
int main()
{
	
Pointer2Object *ptr;
ptr=new Pointer2Object[3];

for(int i=0;i<3;i++)
{
	
(ptr+i)->insert();
}
for(int i=0;i<3;i++)
{
	(ptr+i)->display();
}






delete []ptr;
	return 0;
	
}





