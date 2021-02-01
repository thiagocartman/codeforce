#include <iostream>
#include<cmath>
using namespace std;
int main(){
int n,a,b,sum=0,c=0; 
cin >> n;
for (int i=0;i<n;i++){
	cin >> a >> b;
	sum = sum - a;
	sum = sum + b;
	c=max(c,sum); // ele compara o maior valor q passou por essas duas variaveis c e sum q coloquei.
}
	
	cout << c;
	
	return 0;
}
