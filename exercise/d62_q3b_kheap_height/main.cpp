#include <iostream>
using namespace std;
int main(){
    long long sum = 0;
    long long num = 1;
    int i = -1;
    long long n;
    int k;
    cin >> n >> k;
    if (k == 1){
        cout << n-k << endl;
    } else {
        while (sum < n){
            sum += num;
            num *= k;
            i++;
        }
        cout << i << endl;
    }
    // cout << i << endl;
}