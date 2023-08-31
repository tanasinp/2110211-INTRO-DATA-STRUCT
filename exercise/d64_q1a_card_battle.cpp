#include <iostream>
#include <map>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false); cin.tie(0);
    int n,m;
    map<int,int> m1;

    cin >> n >> m;
    for (int i = 0 ; i < n ; i++){
        int p;
        cin >> p;
        m1[p]++;
    }
    // vector<int> v1;
    int result = 1;
    for (int i = 0 ; i < m ; i++){
        bool win;
        int times,p;
        cin >> times;
        vector<int> v1;
        for (int j = 0; j < times; j++){
            cin >> p;
            v1.push_back(p);
        }
        for (auto x : v1){
            auto it = m1.upper_bound(x);
            if (it != m1.end()){
                // result ++;
                win = true;
                it->second -= 1;
                if (it->second == 0){
                    m1.erase(it->first);
                }
            } else {
                win = false;
                break;
            }
        }
        if (win){
            result ++;
        } 
    }

    // int result = 1;
    // for (auto x : v1){
    //     auto it = m1.upper_bound(x);
    //     if (it != m1.end()){
    //         result ++;
    //         it->second -= 1;
    //         if (it->second == 0){
    //             m1.erase(it->first);
    //         }
    //     } else {
    //         break;
    //     }
    // }

    // for (auto x : m1){
    //     cout << x.first << " " << x.second << endl;
    // }
    // for (auto x : v1){
    //     cout << x << endl;
    // }
    cout << result << endl;
}