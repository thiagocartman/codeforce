#include <iostream>
using namespace std;
int main(){
int n,count=0,count1=0;
int p[n];
int q[n];
cin >> n;
for(int i=1; i<=n; i++){
	cin >> p[i];
	if(p[i]==i){
		
		count++;
	}
	
}	
for(int i=1; i<=n; i++){
	cin >> q[i];
	if(q[i]==i){
		
		count1++;
	}
	
}	
if(count+count1 >= n){
	cout << "I become the guy"; 
}
else{
	cout << "Oh, my keyboard!";
}	
	
	
}
