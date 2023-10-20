//You can say 11 
#include <iostream>
#include <string>
using namespace std;
int main(){
	string n;
	int odd,even;
	while(cin>>n){
		if(n.length() == 1 && n[0] == '0'){
			break;
		}
		odd = even = 0;
		for(int i = 0;i<n.length();i++){
			if((i%2) == 0){
				
				even += (n[i] - '0');
			}
			else{
				odd += (n[i] - '0');
			}
		}
		if(((even - odd) % 11) == 0){
			cout<<n<<" is a multiple of 11."<<endl;
		}
		else{
			cout<<n<<" is not a multiple of 11."<<endl;
		}
	}
}
