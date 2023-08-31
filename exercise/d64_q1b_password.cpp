#include <iostream>
#include <map>
#include <set>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    std::ios_base::sync_with_stdio(false); std::cin.tie(0);
    // map<char,int> m1 = {{'a',1},{'b',2},{'c',3},{'d',4},{'e',5},{'f',6},{'g',7},{'h',8},{'i',9},{'j',10},{'k',11},{'l',12},{'m',13},
    //                     {'n',14},{'o',15},{'p',16},{'q',17},{'r',18},{'s',19},{'t',20},{'u',21},{'v',22},{'w',23},{'x',24},{'y',25},{'z',26}};
    // // map<string,int> m1;
    // // m1['a'] = 1;
    // int n,m,l;
    // vector<int> k1;
    // // vector<string> data1;
    // vector<string> data2;
    // set< vector<char> > super_data;
    // cin >> n >> m >> l;
    // for (int i=0;i<l;i++){
    //     int k;
    //     cin >> k;
    //     k1.push_back(k);
    // }
    // // vector<char> data1;
    // for (int i=0;i<n;i++){
    //     vector<char> data1;
    //     string psw;
    //     cin >> psw;
    //     for (int j = 0 ; j < l ; j++){
    //         // data1.push_back(psw[j]);
    //         data1.push_back(m1[psw[j]]);
    //     }
    //     super_data.insert(data1);
    // }
    // for(int i=0;i<m;i++){
    //     string psw;
    //     cin >> psw;
    //     // v2.push_back(psw);
    // }
    ///////

    // for (int i=0;i<n;i++){
    //     string psw;
    //     cin >> psw;
    //     vector<int> temp;
    //     for (int j=0;j<l;j++){
    //         temp.push_back(m1[psw[j]]);
    //     }
    // }
    // cout << m1['c'] << endl;
    // for (auto x : data1){
    //     cout << x << endl;
    //     cout << m1[x] << endl;
    // }


    int n,m,l;
    cin >> n >> m >> l;

    vector<int> v_k;
    for (int i = 0 ; i < l ; i++){
        int k;
        cin >> k;
        k = k%26;
        v_k.push_back(k);
    }

    set<vector<char>> data_psw;
    for (int i = 0; i < n ; i++){
        string psw;
        cin >> psw;
        vector<char> data;
        for (int j = 0; j < l ; j++){
            data.push_back(psw[j]);
        }
        data_psw.insert(data);
    }

    for (int i=0; i<m; i++){
        string psw;
        cin >> psw;
        vector<char> data;
        for (int j = 0 ; j < l ; j++){
            int first = psw[j] + v_k[j];
            first -= int('a');
            // cout << first << endl;
            if (first >= 26){
                data.push_back(char('a') + first%26);
            } else {
                data.push_back(char('a') + first);
            }
        }
        // for (auto x : data){
        //     cout << x << endl;
        // }
        auto it = data_psw.find(data);
        if (it != data_psw.end()){
            cout << "Match\n";
        } else {
            cout << "Unknown\n";
        }
    }
}