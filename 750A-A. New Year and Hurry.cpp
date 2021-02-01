#include<iostream>
using namespace std;
int main(){
	
int n,k,x,count=0;

cin >> n >> k;

x = 240 - k;	
// 240 minutos ele tem, 240min - k(tempo de chegar no local em minutos) representei como x.
	
for(int i=1; i<=n; i++){
	
if(x-(i*5) >= 0){
	count++;
}	

x = x - (i*5);	
}
	
cout << count;	
	
	
	
	
}
