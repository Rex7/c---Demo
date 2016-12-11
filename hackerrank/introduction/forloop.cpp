#include <sstream>
#include <vector>
#include <iostream>
int main(){
	int no,n2;
	std::cin>>no>>n2;
	for(int i=no;i<=n2;i++){
	
	if(i<=9){
			if(i==1){
		std::cout<<"one";
	}
	else if(i==2){
		std::cout<<"two";
	}
	else if(i==3){
		std::cout<<"three";
	}
	else if(i==4){
		std::cout<<"four";
	}
	else if(i==5){
		std::cout<<"five";
	}else if(i==6){
		std::cout<<"six";
	}else if(i==7){
		std::cout<<"seven";
	}else if(i==8){
		std::cout<<"eight";
	}else if(i==9){
		std::cout<<"nine";
	}
	std::cout<<"\n";
}
else if(i>9){
	if(i%2==0){
		std::cout<<"even";
		
	}
	else{
		std::cout<<"odd";
	}
	std::cout<<"\n";
}
	}

}


