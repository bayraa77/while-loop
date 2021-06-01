#include<iostream>

using namespace std;

int main(){
	int num,multi=1;
	cin>>num;
	while(num>0){
		multi= multi*(num%10);
		num= num/10;
	
	}
	cout<<multi;
}
