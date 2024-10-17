#include <iostream>
using namespace std;

int main(){
    string input;
    int count = 0;

    cin >> input;

    for (int i = 0; i < input.length(); i++){
        if(input[i] == 'c'){
            if(input[i + 1] == '='){
                i++;
            }
            else if(input[i + 1] == '-'){
                i ++;
            }
        }
        else if(input[i] == 'd'){
            if(input[i + 1] == '-'){
                i++;
            }
            else if(input[i + 1] == 'z' && input[i + 2] == '='){
                i += 2;
            }
        }
        else if(input[i] == 'l'){
            if(input[i + 1] == 'j') i++;
        }
        else if(input[i] == 'n'){
            if(input[i + 1] == 'j') i++;
        }
        else if(input[i] == 's'){
            if(input[i + 1] == '=') i++;
        }
        else if(input[i] == 'z'){
            if(input[i + 1] == '=') i++;
        }
        count++;
    }
    cout << count << endl;
}
