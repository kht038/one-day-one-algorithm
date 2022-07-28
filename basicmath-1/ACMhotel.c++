#include <iostream>
using namespace std;

int main(){
    int test_case = 0;

    cin >> test_case;
    for (int i = 0; i < test_case; i++){
        int h, w, n = 0;
        int print_h = 0;
        int print_w = 1;
        cin >> h >> w >> n;

        for (int j = 0; j < n; j++){
            if(print_h == h){
                print_h = 1;
                print_w++;
            }
            else{
                print_h++;
            }
        }
        printf("%d%02d\n", print_h, print_w);
    }
}