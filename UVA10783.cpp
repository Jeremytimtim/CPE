//Odd sum
#include<iostream>
using namespace std;

int main(){
	int a,b,n;
	int sum = 0;
	cin>>n;
	for(int i = 1;i <= n;i++){
		cin>>a>>b;
		if(a % 2 == 0){
			a = a + 1;
		}
		if(b % 2 == 0){
			b = b - 1;
		}
		for(a ; a <= b ; a+=2){
			sum = sum + a;
		}
		cout<<"Case "<<i<<": "<<sum<<endl;
		sum = 0;
	}
	return 0;
}
