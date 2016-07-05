#include <iostream.h>
#include <string>
class outer
{
	
class inner
{
private:
	int password=982157;
	public:
	void read_pass(int pass)
	{
		if(pass==password)
		{
			std::cout<<"your a valid user";
		}
		else
			std::cout<<"your a invalid user";
		}	
};	
private:
	inner r;
public:
	void read(int pass)
	{
		r.read_pass(pass);
	}


};
int main()
{
	outer s;
	s.read(982157);

	return 0;
}
