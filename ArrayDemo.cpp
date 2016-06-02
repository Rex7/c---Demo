//Array related program
#include <iostream.h>
using namespace std;
int main(){
	int a[5],b[3][3],c[3][3],d[3][3];
	int sum=0;
	//1 D Array Demo below
	/*
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
	*/
	cout<<"\n Input for 2D Array:";
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
		cout<<"\n["<<i<<"]"<<"["<<j<<"]";
			cin>>b[i][j];
		}
	}
	cout<<" \n Input For Second Array :";
		for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
		cout<<"\n["<<i<<"]"<<"["<<j<<"]";
			cin>>c[i][j];
		}
	}
	cout<<"\n Adition Of Two Array ";
for(int i=0;i<3;i++)
{
	for(int j=0;j<3;j++)
	{
		d[i][j]=b[i][j]+c[i][j];
	}
}
	cout<<"\n Printing Array :\n";
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			cout<<"\t "<<d[i][j];
		}
		cout<<"\n";
	}
}
