#include <iostream>
#include <string>
using namespace std;
int main(){
	int maiuscula=0,minuscula=0;
	string s;
	cin >> s;
	for(int i=0;i<s.size();i++){
		if(isupper(s[i])){ //essa funcao verifica se contem letra maiuscula, se sim conta++
			maiuscula++;
		}
		else{
			minuscula++;
		}
	}
	if(maiuscula>minuscula){ // se tiver mais maiusculas do que minuscula 
		for(int i=0;i<s.size();i++){
			s[i]=toupper(s[i]); // transforma tudo em maiuscula
		}
		cout<<s<<endl;
    }
	if(maiuscula<minuscula) { // se tiver mais minuscula do que maiscula
		for(int i=0;i<s.size();i++){
			s[i]=tolower(s[i]); // transforma tudo em minuscula
		}
		cout<<s<<endl;
	}
	if(maiuscula==minuscula) { // mesma quantidade tudo minuscula
		for(int i=0;i<s.size();i++){
			s[i]=tolower(s[i]);
		}
		cout<<s<<endl;
	}
	
}
