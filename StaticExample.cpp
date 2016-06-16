#include <iostream.h>
#include <string>

class StaticExample
{
	private :
		int age;
		std::string person_name;
	public :
		// default Constructor
		StaticExample()
		{
			std::cout<<"\nObject Created";
		}
		static int no_of_people;
		void read_data(void)
		{
			
			no_of_people++;
			std::cout<<"\n Enter Persons Name:";
			std::getline(std::cin,person_name);
			std::cout<<"\n Enter Age Of Person:";
			std::cin>>age;
			std::cin.ignore();
		
		}
		void display(void)
		{
			
			std::cout<<"\n Name Of The Person:"<<person_name<"\n Age:";
			
		}
		//destructor
		~StaticExample()
		{
			std::cout<<"\n Object Destroyed";
		}
		static void people_count(void)
		{
		std::cout<<"\nHuman Count So Far :"<<no_of_people;
			
		}
};
int StaticExample::no_of_people=0;
int main()
{
	int no;
StaticExample *person;
std::cout<<"\nEnter The No Of Object To Create ?";
std::cin>>no;
std::cin.ignore();
person=new StaticExample[no];
for(int i=0;i<no;i++)
{
(person+i)->read_data();	
}
for(int i=0;i<no;i++)
{
	(person+i)->display();
}
StaticExample::people_count();
delete []person;

return 0;
}






