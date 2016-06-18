#include <iostream.h>
#include <string>
class FriendFunctionDemo
{
	private :
	int age;
	std::string name;
	public:
		void read_data()
		{
		std::cout<<"\nEnter Your Name:";
		std::getline(std::cin,name);
		std::cout<<"\n ENter Your Age:";
		std::cin>>age;	
			std::cin.ignore();
		}
	friend	void display(FriendFunctionDemo demo);
	
	
};
void display(FriendFunctionDemo demo)
{
	std::cout<<"\n name of the person:"<<demo.name<<"\n Age:"<<demo.age;
}
int main()
{
	FriendFunctionDemo d;
	d.read_data();
	display(d);
}














