#include <iostream.h>
class Unary
{
	private:
		int no;
	public:
		//parametrized constructor
		Unary(int no)
		{
			this->no=no;
		}
		//default constructor
		Unary()
		{
			no=0;
		}
		//unary minus operator
		Unary operator- (Unary s)
		{
			Unary y;
			y.no=this->no-s.no;
			return y;
		}
		//unary plus operator
			Unary operator+ (Unary s)
		{
			Unary y;
			y.no=this->no+s.no;
			return y;
		}
		//unary increment operator prefix
		void operator++(){
			no+=1;
		}
		//unary decrement operator prefix
		void operator--(){
			no-=1;
		}
		//unary increment operator postfix
		void operator++(int){
			no+=1;
		}
		//unary decrement operator postfix
		void operator--(int){
			no-=1;
		}
		void display(){
			std::cout<<"\n"<<no;
		}
		
		
};
int main()
{
	Unary one(500),two(200),total;
	total=one-two;
	std::cout<<"\nSubstraction:";
	total.display();
	total=one+two;
	std::cout<<"\n Addition";
	total.display();
	std::cout<<"\napplying prefix increment operation on object one";
	++one;
	one.display();
	std::cout<<"\napplying prefix derement operation on object one";
	--one;
	one.display();
	std::cout<<"\napplying postfix increment operation on object two";
	two++;
	two.display();
	std::cout<<"\napplying postfix derement operation on object two";
	two--;
	two.display();
	return 0;
}
