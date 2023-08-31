#include <iostream>
#include <map>
#include <set>
using namespace std;
int main(){
    int n,k;
    cin >> n >> k;
    map<string,int> m1;
    map<int,string> m2;
    set< pair<int,string> > s1;
    for (int i = 0 ; i < n ; i++){
        string name;
        cin >> name;
        m1[name]++;
    }
    // for (auto &x : m1){
    //     m2[x.second] = x.first;
    // }

    // int size = m2.size();
    // if (size <= k){
    //     auto it = m2.begin();
    //     cout << it->first << endl;
    // } else {
    //     auto it = m2.end();
    //     for (int i = 0; i < k ; i++){
    //         it--;
    //     }
    //     cout << it->first << endl;
    // }

    for (auto &x : m1){
        s1.insert(make_pair(x.second,x.first));
    }
    int size = s1.size();
    if (size <= k){
        auto it = s1.begin();
        cout << it->first << endl;
    } else {
        auto it = s1.end();
        for (int i = 0; i < k ; i++){
            it--;
        }
        cout << it->first << endl;
    }

    // for (auto &x : s1){
    //     cout << x.first << " " << x.second << endl;
    // }
}