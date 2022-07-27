#include <iostream>
using namespace std;

int main(){
    int x = 0;
    int loop;
    cin >> x;
    for(loop = 1; loop < x; loop++){
        x -= loop;
    }
    if(loop % 2 == 1){
        cout << loop + 1 - x << '/' << x;
    }
    else{
        cout << x << '/' << loop + 1 - x;
    }
}