#include<iostream>
using namespace std;
int main(){
	
int n,count=0,sum=0;	
cin>>n;
int arr[n];	
for(int i=1; i<=n; i++){
	
cin >> arr[i];

if(sum+arr[i]<0){ //ex: 0+1 eh menor que 0? ele verifica se vai ter policial aqui;
	count++;
}
else {
	sum+=arr[i]; //sum=sum+arr[i]
}		
}	

cout << count;	
	
}
