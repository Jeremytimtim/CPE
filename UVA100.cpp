//The 3n + 1 problem 
#include <iostream>
using namespace std;
int algo(int n){
	if(n==1){
		return 1;
	}
	else{
		if((n%2)==0){
			return 1 + algo(n/2);
		}
		else{
			return 1 + algo(3 * n + 1);
		}
	}
}
int main(){
	int i,j,a;
	while(cin>>i>>j){
		cout<<i<<" "<<j<<" ";
		if(i>j){
			int temp = i;
			i = j;
			j = temp;
		}
		a = i;
		int max = 0;
		for(i;i<=j;i++){
			if(algo(i)>max){
				max = algo(i);
			}
		}
		cout<<max<<endl;
	
	}

	return 0;
}
