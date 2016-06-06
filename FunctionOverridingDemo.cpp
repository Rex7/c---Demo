//Fuction Overriding in c++
#include <iostream.h>
#include <string>
class OuterScope
{
	protected:
	std::string name="regis charles";
	public:
		void display(void);
};
//function defination outside class using scope operator
void OuterScope::display(void)
{
	std::cout<<"whats up : "<<name;
}
class Second : public OuterScope
{
//if display is not overriden then base clss display is used
	public:
	void display(void);
};
//function defination outside class using scope operator
void Second::display(void)
{
	std::cout<<"\n Am  refined";
}
main()
{
	OuterScope outer;
	outer.display();
	Second d;
	d.display();
	return 0;
}

