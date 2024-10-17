#include <iostream>
#include <string>
using namespace std;

int main(){
    string A, B, bigger, sum, reverse;
    int one, diff = 0;
    int raise = 0;
    cin >> A >> B;
    if(A.size() < B.size()){
        bigger = B;
        B = A;
        A = bigger;
    }
    diff = A.size() - B.size();
    if (diff > 0){
        for (int i = 0; i < diff; i++){
            B.insert(B.begin(), '0');
        }
    }
    for (int i = A.length(); i >= 0; i--){
        int a = 0, b = 0;
        if(A[i] > 0){
            a = A[i] - '0';
        }
        if(B[i] > 0){
            b = B[i] - '0';
        }
        int add = 0;
        if(raise  > 0){
            add = a + b + raise;
        }
        else{
            add = a + b;
        }
        raise = add / 10;
        add %= 10;
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
