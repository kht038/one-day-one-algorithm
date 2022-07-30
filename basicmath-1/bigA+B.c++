#include <iostream>
using namespace std;

int main(){
    string A, B, bigger, sum, reverse;
    int ten, one = 0;
    cin >> A >> B;
    if(A.size() < B.size()){
        bigger = B;
        A = B;
        B = bigger;
    }
    for (int i = A.length(); i >= 0; i--){
        cout << A[i] << endl;
        if(A[i] + B[i] > 9){

            ten = int(A[i] + B[i]) / 10;
            one = int(A[i] + B[i]) / 10;
            reverse += one;
            // A[i - 1] += 1;
        }
        else{
            reverse = A[i] + B[i];
        }

    }
    for(int i = reverse.length(); i >= 0; i--){

        sum += reverse[i];
    }
}
