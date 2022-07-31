#include <iostream>
#include <string>
using namespace std;

int main(){
    string A, B, bigger, sum, reverse;
    int one = 0;
    int raise = 0;
    cin >> A >> B;
    if(A.size() < B.size()){
        bigger = B;
        A = B;
        B = bigger;
    }

    for (int i = A.length(); i >= 0; i--){
        int a = 0, b = 0;
        a = A[i] - '0';
        b = B[i] - '0';
        int add = 0;
        if(raise  > 0){
            add = a + b + raise;
        }
        else{
            add = a + b;
        }
        raise = add / 10;
        add %= 10;
        cout << add + '0' << endl;
        char add_char = add + '0';
        reverse += add_char; 
    }
    if(raise > 0){
        reverse += raise + '0';
    }

    for(int i = reverse.length() - 1; i > 0; i--){
        sum += reverse[i];
    }
    cout << sum << endl;
}
