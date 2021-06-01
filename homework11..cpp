#include<iostream>

using namespace std;

int main(){
    int num,ldigit, fdigit;
    cout<<" enter numbers = ";
    cin>>num;
    ldigit=num%10;
    while(num>10){
    	num=num/10;
    
	}
    fdigit=num;
	cout<<" first digit = "<<fdigit<<endl;
	cout<<" last digit = "<<ldigit;
}
