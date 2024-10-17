#include <iostream>
using namespace std;

int main(){
    string string;
    int sum = 0;
    cin >> string;

    for (int i = 0; i < string.length(); i++){
        sum += (string[i] - 65) / 3 + 3;
        if(string[i] == 'S' || string[i] == 'V' || string[i] == 'Y' || string[i] == 'Z' ) sum--;
    }
    cout << sum << endl;
}