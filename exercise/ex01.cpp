#include <iostream>

using namespace std;

int main(){
    // cout << "Enter time;" << endl;
    int main_hours,main_minutes,x;
    cin >> main_hours >> main_minutes;
    cin >> x;
    int hourX = x/60;
    int minuteX = x%60;

    main_minutes += minuteX;
    int hourY = main_minutes/60;
    main_minutes = main_minutes%60;
    main_hours = (main_hours + hourX + hourY)%24;
    if (main_hours < 10){
        cout << "0";
    } 
    cout << main_hours << " ";
    if (main_minutes < 10){
        cout << "0";
    }
    cout << main_minutes << endl;
}