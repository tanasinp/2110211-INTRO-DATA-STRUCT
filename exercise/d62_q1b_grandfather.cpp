#include <iostream>
#include <set>
#include <vector>
#include <utility>
#include <map>
using namespace std;
int main(){
    int n,m;
    cin >> n >> m;
    // vector< pair<string,string> > v1;

    // set< pair<string,string> > s1;
    // for (int i = 0 ; i < n ; i++){
    //     string f,s;
    //     cin >> f >> s;
    //     s1.insert(make_pair(s,f));
    // }
    // for (int i = 0 ; i < m ; i++){
    //     string gc1,gc2;
    //     cin >> gc1 >> gc2;
    //     if (gc1 == gc2){
    //         cout << "NO\n";
    //     } else {
    //         auto it1 = s1.find(make_pair(gc1,""));
    //         auto it2 = s1.find(make_pair(gc2,""));
    //         if (it1 != s1.end() && it2 != s1.end()){
    //             auto it11 = s1.find(make_pair(it1->second,""));
    //             auto it22 = s1.find(make_pair(it2->second,""));
    //             if(it11 != s1.end() && it22 != s1.end()){
    //                 if (it11->second == it22->second){
    //                     cout << "YES\n";
    //                 } else {
    //                     cout << "NO\n";
    //                 }
    //             } else {
    //                 cout << "NO\n";
    //             }
    //         } else {
    //             cout << "NO\n";
    //         }
    //     }
    // }

    map<string,string> m1;
    for (int i = 0 ; i < n ; i++){
        string f,s;
        cin >> f >> s;
        m1[s] = f;
    }
    for (int i = 0 ; i < m ; i++){
        string gc1,gc2;
        cin >> gc1 >> gc2;
        if (gc1 == gc2){
            cout << "NO\n";
        } else {
            auto it1 = m1.find(gc1);
            auto it2 = m1.find(gc2);
            if ( it1 != m1.end() && it2 != m1.end()){
                auto it11 = m1.find(it1->second);
                auto it22 = m1.find(it2->second);
                if (it11 != m1.end() && it22 != m1.end()){
                    if (it11->second == it22->second){
                        cout << "YES\n";
                    } else {
                        cout << "NO\n";
                    }
                } else {
                    cout << "NO\n";
                }
            } else {
                cout << "NO\n";
            }
        }
    }

} 