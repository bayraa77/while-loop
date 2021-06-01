#include<iostream>

using namespace std;

int main(){
	int num, fdigit, ldigit, sum;
    cout<<" enter number = ";
	cin>>num;
	ldigit= num%10;
	while(num>10){
		num= num/10;
	}
	fdigit = num;
	sum= fdigit+ldigit;
	cout<<"  first and last digits sum = "<<sum;
}
