#include<iostream>
#include<math.h>
using namespace std;
int main (){
int x=0;
cin >> x;
	if (x%5==0){  
		cout << x/5; // o maximo q pode andar e 5, ou seja sempre vai andar a quantidade de cincos ou cincos+1
	}
	else {
		cout << (x/5)+1;
	}
	return 0;
}
