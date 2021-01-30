#include<iostream>
using namespace std;
int main(){
string num1;
string num2;
cin >> num1 >> num2;
	
for(int i=0;i<num1.size();i++){
	
	if(num1[i] != num2[i]){
		
		cout << "1";
	}
	else {
		cout << "0";
	}
}	
	
	
}
