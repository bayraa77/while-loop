#include<iostream>

using namespace std;

int main(){
    int num, sum, fdigit, ldigit;
    cout<<" enter number = ";
    cin>>num;
    ldigit= num%10;
    for(; num>10;){
    	num= num/10;
	}
	fdigit=num;
	sum=fdigit+ldigit;
	cout<<" first and last digits sum = "<<sum;
}
