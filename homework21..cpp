#include<iostream>

using namespace std;

int main(){
	int num, power, result=1;
	cout<< " enter number = ";
	cin>>num>>power;
	
	while(power>0){
		result=result*num;
		power--;
	}
	cout<<result;
}
