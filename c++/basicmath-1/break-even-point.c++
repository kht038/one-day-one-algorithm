#include <iostream>
using namespace std;

int main(){
    int fixed_cost, variable_cost, price = 0;
    cin >> fixed_cost >> variable_cost >> price;

    if(variable_cost >= price){
        cout << -1 << endl;
    }
    else{
        cout << fixed_cost / (price - variable_cost) + 1 << endl;
    }
}