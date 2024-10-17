#include <iostream>
using namespace std;

bool isDemical(int num)
{
    for (int t = 2; t * t <= num; t++)
    {
        if (num % t == 0) {
            return false;
        }
    }
    return true;
}

int main()
{
    int testCase1, testCase2, min = 0, demical_sum = 0;

    cin >> testCase1 >> testCase2;
    for (int i = testCase1; i <= testCase2; i++)
    {
        if (i == 1){
            demical_sum = demical_sum;
        }
        else if (isDemical(i)) {
            demical_sum += i;
            if (min == 0) min = i;
        }
    }
    if(min == 0){
        cout << -1 << endl;
    }
    else{
        cout << demical_sum << '\n' << min << endl;
    }
}