#include<iostream>
#include<stdlib.h> //abs
using namespace std;
int main(){
	
int t,a,b,result;

cin >> t;

for(int i=0; i<t; i++){
	
cin >> a >> b;

result = (abs(a - b) + 9) / 10;	// abs devolve o valor absoluto, ou seja 13-42=-29 mas com abs fica 29. 
	
cout << result << endl;	
}
}
