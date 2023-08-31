#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int a[2000112];
int main(){
    int n,m;
    cin >> n >> m;
    vector<int> v;

    for (int i =0; i < n; i++){
        int x;
        cin >> x;
        v.push_back(x);
    }

    for (int i = 0 ; i < n; i++){
        for (int j = i+1; j < n ; j++){
            a[v[i] + v[j]] = 1;
        }
    }

    for (int i = 0; i < m; i++){
        int pairsum;
        cin >> pairsum;
        if (a[pairsum] == 1){
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }

    //array
    // int a[n];
    // for (int i = 0; i < n; i++){
    //     int x;
    //     cin >> x;
    //     a[i] = x;
    // }
    // for (int i=0;i < m; i++){
    //     int sum;
    //     cin >> sum;
    //     bool pair = false;
    //     for (int j = 0; j < n-1 ; j++){
    //         for (int k = j+1 ; k < n ; k++){
    //             if (a[j] + a[k] == sum){
    //                 pair = true;
    //                 break;
    //             }
    //         }
    //     }
    //     if (pair){
    //         cout << "YES" << endl;
    //     } else {
    //         cout << "NO" << endl;
    //     }
    // }

    //vector
    // vector<int> v;
    // for (int i = 0; i<n ; i++){
    //     int x;
    //     cin >> x;
    //     v.push_back(x);
    // }
    // for (int i=0;i < m; i++){
    //     int sum;
    //     cin >> sum;
    //     bool pair = false;
    //     for (int j = 0; j < n-1 ; j++){
    //         for (int k = j+1 ; k < n ; k++){
    //             if (v[j] + v[k] == sum){
    //                 pair = true;
    //                 break;
    //             }
    //         }
    //     }
    //     if (pair){
    //         cout << "YES\n";
    //     } else {
    //         cout << "NO\n";
    //     }
    // }
}