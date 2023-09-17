#include <iostream>
using namespace std;
int main(){
    int num;
    cin >> num;
    bool loop = true;
    // int sq = 0;
    int result = 1;
    while (loop){
        // for (int i=0 ; i<sq; i++){
        //     result *= 2;
        // }
        if (result >= num){
            loop = false;
        }
        if (loop){
            result *= 2;
        }
        
        // sq++;
    }

    cout << result - num << endl;
}