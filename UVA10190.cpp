//Divide, But Not Quite Conquer!
#include <iostream>
#define MAX_ARRAY 500
using namespace std;
int main(){
	int n, m;
	int x,y;
	int check = 1;
	int count = 1;
	while(cin>>n>>m){
		check = 1;
		x = n;
		y = m;
		if(n==1 || m == 1){
			check = 0;
		}
			
		while(n != 1 && check){
			if((n%m)!= 0){
				check = 0;
				break;
			}
			n/=m;
		}
		if(check){
			cout<<x;
			while(x != 1){
				cout<<" "<<x/y;
				x/=y;
			}
			cout<<endl;
		}
		else{
			cout<<"Boring!"<<endl;
		}
	}
}
