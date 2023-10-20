//Primary Arithmetic 
#include <iostream>
using namespace std;

int main(){
	int a,b;
	int carry;
	while(cin>>a>>b){
		if(a == 0 && b == 0){
			break;
		}
		carry = 0;
		while(a != 0 && b != 0){
			if((a % 10) + (b % 10) >= 10){
				carry++;
				a+=10;
			}
			a/=10;
			b/=10;
		}
		if(carry == 0){
			cout<<"No carry operation."<<endl;
		}
		else if(carry == 1){
			cout<<"1 carry operation."<<endl;
		}
		else{
			cout<<carry<<" carry operations."<<endl;
		}
	}
}
