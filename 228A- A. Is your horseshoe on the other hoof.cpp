#include <iostream>
using namespace std;
int main(){
int s1,s2,s3,s4,count=0,count1=0,count2=0;	

cin >> s1 >> s2 >> s3 >> s4;
	
if(s1==s2 || s1==s3 || s1==s3 || s1==s4){
	count++;
}
if(s2==s3 || s2==s4){
	count1++;
}
if(s3==s4){
	count2++;
}	
	
cout << count+count1+count2;	
	
}
