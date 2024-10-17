#include <iostream>
using namespace std; 

int main(){
    int n, checker = 0;
    cin >> n;
    
    while(n > 0){
		if(n % 5 == 0){
			n -=5;
			checker++;
		}
		else if(n % 3 ==0){
			n -=3;
			checker++;
		}
		else if(n > 5){
			n -=5;
			checker++;
		}
		else{
			checker = -1;
			break;
		}
	}
    cout << checker << endl;
}