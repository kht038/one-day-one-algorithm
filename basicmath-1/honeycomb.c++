#include <iostream>
using namespace std;

int main(){
    int n, sum = 0;
    cin >> n;
    if (n == 1){
        cout << 1 << endl;
    }
    else{
        for (int i = 2; i <= n; sum++){
            i += sum * 6;
        }
        cout << sum << endl;
    }
}