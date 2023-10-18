#include <iostream>
#include <vector>

using namespace std;

int relation(long long S, long long a, long long b) {
    long long p;
    long long c;
    long long count_c = 0;
    long long count_p = 0;

    if (a < b){
        p = a;
        c = b;
    } else if (a > b){
        p = b;
        c = a;
    } else {
        return 4;
    }

    while ( c > p ){
        c = (c-1)/S;
        count_c++;
    }

    if (c == p && count_c == 1){
        return 1;
    }
    if (c == p){
        return 2;
    }

    while (c > 0){
        c = (c-1)/S;
        count_c++;
    }
    while (p > 0){
        p = (p-1)/S;
        count_p++;
    }

    if (count_c != count_p){
        return 3;
    } else {
        return 4;
    }
}

int main() {
    ios_base::sync_with_stdio(false); cin.tie(0);
    int n;
    long long S,a,b;
    cin >> n;
    while (n--) {
    cin >> S >> a >> b;
    cout << relation(S,a,b) << " ";
    }
    cout << endl;

}