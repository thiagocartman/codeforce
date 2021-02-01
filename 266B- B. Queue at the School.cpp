#include<iostream>
#include<string>
using namespace std;
int main(){

int n,t;
string s;	
	cin >> n >> t;
	cin >> s;
	for (int j=0;j<t;j++){
		for(int i=0;i<s.size()-1;i++){
			
			if(s[i]=='B' && s[i+1]=='G'){
			
			swap(s[i],s[i+1]);
			i++;
		}
		}
	}
	cout << s;
	
}
