#include<iostream>
using namespace std;
int main(){
	long long x,y;
	
	while(cin>>x>>y){
		if((x-y)>=0){
			cout<<x-y<<endl;
		}
		else{
			cout<<y-x<<endl;
		}
	}
	return 0;
}

