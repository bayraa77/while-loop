#include<iostream>

using namespace std;

int main(){
    int num, count=0;
    cout<<" enter numbers = ";
    cin>>num;
    
    while(num>0){
    	count++;
    	num= num/10;
	}
    cout<<" number of digits = "<<count;
}
