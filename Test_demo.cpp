#include <iostream.h>
template <class T > T
swap_data(T *a,T *b){
	T dat;
	dat=*a;
	*a=*b;
	*b=dat;
}
int main(){
	int a=78,b=56;
	std::cout<<"\n Function call:"<<swap_data(&a,&b);
	std::cout<<"\n Values of a:"<<a<<"\n Value of B:"<<b;
}
