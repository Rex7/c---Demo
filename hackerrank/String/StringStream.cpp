#include <sstream>
#include <vector>
#include <iostream>
using namespace std;

vector<int> parseInts(string str) {
  stringstream stream;
  int temp;
  	vector<int> vec ;
  	stream<<str;
  	while(stream>>temp){
  	
  		vec.push_back(temp);
  		if (stream.peek() == ',' || stream.peek() == ' ')
	  	{
	  			stream.ignore();
	  				
		  }
	 
	  		
	  	
	  
	  }
	  return vec;
	  
	 
  	
}

int main() {
    string str;
    cin >> str;
    vector<int> integers = parseInts(str);
    for(int i = 0; i < integers.size(); i++) {
        cout << integers[i] << "\n";
    }
    
    return 0;
}

