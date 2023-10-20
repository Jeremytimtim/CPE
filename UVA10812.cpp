//Beat the Spread! 
#include <iostream>
using namespace std;

int main(){
	int n;
	int x,y;
	int s,d;
	cin>>n;
	for(int i = 0;i<n;i++){
		cin>>s>>d;
		x = (s + d)/2;
		y = s - x;
		if(((s + d)%2) == 1){
			cout<<"impossible"<<endl;
		}
		else if((x > 0) && (y > 0)){
			cout<<x<<" "<<y<<endl;
		}
		else{
			cout<<"impossible"<<endl;
		}
	}
}
