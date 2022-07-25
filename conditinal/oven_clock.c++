#include <iostream>
using namespace std;

int main(){
    int hour, minute, minute_to_add = 0;

    cin >> hour >> minute;
    cin >> minute_to_add;

    if (minute + minute_to_add < 60){
        minute = minute + minute_to_add;
    }
    else{
        hour = (hour + (minute + minute_to_add) / 60) % 24;
        minute = (minute + minute_to_add) % 60;
    }
    cout << hour << " " << minute;        
}