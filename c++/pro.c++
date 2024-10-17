#include <string>
#include <vector>
#include <iostream>
using namespace std;

int main() {
    char alpha[26] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};
    int  last_idx = 0, counter = 0;
    string input;
    cin >> input;
    for (int i = 0; i < input.length(); i++){
        int sum = 0, idx = 0;
        for (int j = 0; j < 26; j++){
            if(input[i] == alpha[j]){
                idx = j + 1;
            }
        }
        if(last_idx > idx){
            sum = last_idx - idx;
        }
        else{
            sum = idx - last_idx;
        }
        if(idx > 13){
            if(last_idx > idx){
                sum = last_idx - idx;
            }
            else{
                sum = idx - last_idx;
            }
        }
        else{
            if(last_idx > idx){
                sum = last_idx - idx;
            }
            else{
                sum = idx - last_idx;
            }
        }
        counter += sum;
        last_idx = idx;
    }
    cout << counter;
    return counter;
}