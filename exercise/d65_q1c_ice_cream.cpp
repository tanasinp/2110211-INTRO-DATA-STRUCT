#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false); cin.tie(0);

    // priority_queue<pair<int,int>> data;
    vector<pair<int,int>> data;
    vector<int> v;
    int n,m,start;
    cin >> n >> m >> start;
    
    for (int i = 0 ; i < n ; i++){
        int day,baht;
        cin >> day >> baht;
        data.push_back(make_pair(day,baht));
    }
    sort(data.begin(),data.end());
    
    int money = start;
    int day = 0;
    int sum = 0;
    int i = 0;
    while( day < 100112){
        if (data.size() != 0 && day == data[i].first){
            money = data[i].second;
            i++;
        }
        sum += money;
        v.push_back(sum);
        day++;
    }
    
    // for (int i = 0 ; i<15 ; i++){
    //     cout << v[i] << endl;
    // }


    for (int i = 0 ; i < m; i++){
        int price,x;
        cin >> price >> x;

        auto it = lower_bound(v.begin(),v.end(),price);
        if (it == v.begin()){
            cout << "0 ";
        } else {
            if (it - v.begin() <= x){
                cout << it - v.begin() << " ";
            } else {
                auto it2 = lower_bound(v.begin(),v.end(),price + v[x]);
                cout << it2 - v.begin() << " ";
            }
        }


    //     auto it = lower_bound(v.begin(),v.end(),price);
    //     if (it != v.end()){
    //         if ((it - v.begin()) <= x){
    //             cout << it - v.begin() << " "; //T
    //         } else { //scam
    //             auto it2 = lower_bound(v.begin(),v.end(),price+(*it));
    //             if (it2 != v.end()){
    //                 cout << it2 - it << " "; //T
    //             } else {
    //                 if (x < v.size()){
    //                     int a = price + v[x] - v[v.size()-1];
    //                     int b = v.size() -x -1;
    //                     if (a % money > 0){
    //                         // cout << b + (a/money) + 1 << " ";
    //                         cout << v.size() -1 + (a/money) + 1 << " ";
    //                     } else {
    //                         // cout << b + (a/money) << " ";
    //                         cout << v.size() -1 + (a/money) << " ";
    //                     }
    //                 } else {
    //                     // int between_lastday = x - v.size() -1;
    //                     // int scam = v[v.size()-1] + between_lastday*money;
    //                     if (price % money > 0){
    //                         cout << x + (price/money) + 1 << " ";
    //                     } else {
    //                         cout << x + (price/money) << " ";
    //                     }
    //                 }
    //             }
    //         }
    //     } else {
    //         if (x < v.size()){
    //             int a = price + v[x] - v[v.size()-1];
    //             int b = v.size() -x -1;
    //             if (a % money > 0){
    //                 // cout << b + (a/money) + 1 << " ";
    //                 cout << v.size() -1 + (a/money) + 1 << " ";
    //             } else {
    //                 // cout << b + (a/money) << " ";
    //                 cout << v.size() -1 + (a/money) << " ";
    //             }
    //         } else {
    //             if (price % money > 0){
    //                 cout << x + (price/money) + 1 << " ";
    //             } else {
    //                 cout << x + (price/money) << " ";
    //             }
    //         }
    //     }

    }
}