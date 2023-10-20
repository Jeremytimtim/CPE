//The Hotel with Infinite Rooms 
#include <iostream>
using namespace std;

int main(){
	int n;
	unsigned long long m,sum;
	while(cin>>n>>m){
		sum = 0;
		while(n<m){
			sum+=n;
			if(sum>=m)break;
			n++;
		}
		cout<<n<<endl;
	}
}
