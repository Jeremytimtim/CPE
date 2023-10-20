//Parity
#include <iostream>
#include <string>
using namespace std;
int sum = 0;
void binary(unsigned long long n){
	if(n == 1 || n == 0){
		if(n == 1)sum++;
		cout<<n;
		return;
	}
	else{
		binary(n/2);
		if(n%2 == 1)sum++;
		cout<<n%2;
		return;
	}
}

int main(){
	unsigned long long n;

	while(cin>>n){
		if(n == 0){
			break;
		}
		cout<<"The parity of ";
		binary(n);
		cout<<" is "<<sum<<" (mod 2)."<<endl;
		sum = 0;
	}
	return 0;
}
