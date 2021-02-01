#include<iostream>
#include<math.h>
using namespace std;
int main(){
int k,n,w,sum=0,result;
cin >> k >> n >> w;
 	
	for(int i=1; i<=w; i++){
		
		sum = sum + i ;
	}
	
	result = (sum * k)-n;
	if(result<0) {
		cout <<"0";
	}
	else {
		cout << result;
	}
}
