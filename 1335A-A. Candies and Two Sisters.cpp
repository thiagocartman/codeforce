#include <iostream>
using namespace std;
int main(){
	
int t;
cin >> t;
int n;


for (int i=0; i<t; i++){
	cin>> n;
	
	if(n < 3){
		
		cout<<"0"<<endl;
	}
	else{
		cout<<(n-1)/2<<endl;
	}
	
}	
	
	
	
}
