#include<iostream>

using namespace std;

int main(){
    int num,a;
	cout<<"enter number= ";
	cin>>num;
	for ( a=1; a<=num; a++){
		if (num%a==0){
			cout<<a<<" ";
	}
  }
	
	return 0;
}
