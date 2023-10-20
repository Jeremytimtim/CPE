//Square Numbers 
#include <iostream>
#include <math.h>
#include <typeinfo>
using namespace std;

int main(){
	int a,b;
	int x,y;
	int sum;
	while(cin>>a>>b){
		if(a == 0 && b == 0){
			break;
		}
		sum = 0;
		x = sqrt(a);
		if((x*x)==a){
			sum++;
			x++;
		}
		else
		x++;
		while((x*x)<= b){
			//cout<<"x*x = "<<x*x<<endl;
			sum++;
			x+=1;
		}
		cout<<sum<<endl;
	}
}
