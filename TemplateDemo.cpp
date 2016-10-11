#include <iostream.h>
template <class T> T 
opera(T a,T b){
	return (a+b);
}

int main(){
float a=5.5,b=5,total;
total=opera(a,b);
std::cout<<"\nTotal :"<<total;

}
