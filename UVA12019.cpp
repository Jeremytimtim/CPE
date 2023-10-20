//Doom's Day Algorithm 
#include <iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	for(int i = 0;i<n;i++){
		int d, m;
		int date;
		while(cin>>d>>m){
			if(d == 1){
					date = (m - 10) % 7;
			}
			else if(d == 2){
				date = (m - 21) % 7;
			}

			else if(d == 4 || d == 6 || d == 8 || d == 10 || d == 12){
				date = (m - d) % 7;
			}
			else if(d == 3 || d == 5 || d == 7){
				date = (-1 * ((31 - m) + (d + 1)))% 7;
			}
			else{
				date = (-1 * ((30 - m) + (d + 1)))% 7;
			}
			if(date == 0){
				cout<<"Monday"<<endl;
			}
			else if(date == 1 || date == -6){
				cout<<"Tuesday"<<endl;
				}
			else if(date == 2|| date == -5){
				cout<<"Wednesday"<<endl;
				}
			else if(date == 3 || date == -4){
				cout<<"Thursday"<<endl;
			}
			else if(date == 4 || date == -3){
				cout<<"Friday"<<endl;
			}
			else if(date == 5 || date == -2){
				cout<<"Saturday"<<endl;
			}
			else if(date == 6 || date == -1){
				cout<<"Sunday"<<endl;
			}
		}
	}
	
	
}
