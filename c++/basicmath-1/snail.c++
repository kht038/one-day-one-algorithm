#include <iostream>
using namespace std;

int main(){
    int a, b, v = 0;
    int total = 0;
    cin >> a >> b >> v;
    total = ((v-a) / (a-b)) + 1;
    if((v-a) % (a-b) != 0)
        total++;
    cout << total << endl;
}