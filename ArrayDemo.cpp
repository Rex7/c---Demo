//Array related program
#include <iostream.h>
using namespace std;
int main(){
	int a[5];
	int sum=0;
	for(int i=0;i<5;i++)
	{
		cout<<"Enter number in array:";
		cin>>a[i];
	}
	for(int i=0;i<5;i++)
	{
		cout<<"\n Element in array:"<<a[i];
		sum=sum+a[i];
		
	}
	cout<<"\n addition of all element in array:"<<sum;
}
