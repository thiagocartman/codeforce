#include<iostream>
using namespace std;
int main (){
int n,p,arr;
cin >> n;
cin >> p;

for(int i = 1; i <=n; i++){
    arr[p[i]] = i;
  }
for(int i = 1; i <=n; i++){
	
    cout << arr[i] << " ";
  }
  cout << endl;
	
}
