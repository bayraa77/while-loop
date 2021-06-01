#include<iostream>

using namespace std;

int main(){
	int num, one=0, two=0, three=0, four=0, five=0, six=0, seven=0, eight=0, nine=0;
	cout<<" enter numbers = ";
	cin>>num;
	
	while(num>0){
		switch(num%10){
		
	    case 1:
	    	one++;
	    	break;
		case 2:
			two++;
			break;
		case 3:
			three++;
			break;
		case 4:
			four++;
			break;
		case 5:
			five++;
			break;
		case 6:
			six++;
			break;
		case 7:
			seven++;
			break;
		case 8:
			eight++;
			break;
		case 9:
			nine++;
			break;
			}
    num=num/10;	
	}
	
	cout<< "frequency of 1 = "<<one<<endl;
	cout<< "frequency of 2 = "<<two<<endl;
	cout<< "frequency of 3 = "<<three<<endl;
	cout<< "frequency of 4 = "<<four<<endl;
	cout<< "frequency of 5 = "<<five<<endl;
	cout<< "frequency of 6 = "<<six<<endl;
	cout<<"frequency of 7 = " <<seven<<endl;
	cout<< "frequency of 8 = "<<eight<<endl;
	cout<< "frequency of 9 = "<<nine<<endl;
	
	
	return 0;
}
