#include<iostream>

using namespace std;

int main(){
	int num, a,b,temp=0;
	cout<<" enetr numbers = ";
	cin>>num;
	b =num;
	while(num>0){
		a=num%10;
		num=num/10;
		temp=temp*10+a;
	}if(temp==b){
		cout<<temp<< " is palindrome ";	
	}else{
		cout<<temp<<" is not palindrome ";
	}
}
