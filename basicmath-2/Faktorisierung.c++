#include <iostream>
using namespace std;

int main() {
  int n, m = 0;
  cin >> n;
  while (n > 1)
  {
    for (int i = 2; i <= n; i++){
      if(n % i == 0){
        cout << i << endl;
        n = n/i;
        break;
      }
    }
  }
  
}