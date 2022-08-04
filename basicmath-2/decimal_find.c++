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
    int test_case, n, demical = 0;

    cin >> test_case;
    for (int i = 0; i < test_case; i++)
    {
        cin >> n;
        if (n == 1){
            demical = demical;
        }
        else{
            if (isDemical(n)) demical++;
        }
    }
    cout << demical << endl;
}