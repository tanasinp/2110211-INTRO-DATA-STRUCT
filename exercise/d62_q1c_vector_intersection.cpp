#include <iostream>
#include <set>
#include <algorithm>
using namespace std;
int main(){
    set<int> s1;
    set<int> s2;
    int n,m;
    cin >> n >> m;
    for (int i =0; i< n; i++){
        int number;
        cin >> number;
        s1.insert(number);
    }
    for (int i = 0 ; i < m ; i++){
        int number;
        cin >> number;
        s2.insert(number);
    }
    
    for (auto it1 = s1.begin(); it1 != s1.end(); it1++){
        auto it2 = s2.find(*it1);
        if (it2 != s2.end()){
            cout << *it1 << " ";
        }
    }
    // for (auto it1 = s1.begin(); it1 != s1.end(); it1++){
    //     cout << *it1 << " ";
    // }
    cout << endl;
}