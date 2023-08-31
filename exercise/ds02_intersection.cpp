#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    int n,m;
    cin >> n >> m;
    vector<int> v1;
    vector<int> v2;

    for (int i = 0 ; i < n ; i++){
        int num;
        cin >> num;
        v1.push_back(num);
    }
    for (int i = 0; i < m; i++){
        int num;
        cin >> num;
        v2.push_back(num);
    }

    sort(v1.begin(),v1.end());
    sort(v2.begin(),v2.end());

    for (int i = v1.size()-1 ; i > 0 ; i--){
        if (v1[i] == v1[i-1]){
            v1.erase(v1.begin() + i);
        }
    }
    for (int i = v2.size()-1 ; i > 0 ; i--){
        if (v2[i] == v2[i-1]){
            v2.erase(v2.begin() + i);
        }
    }

    for (int i = 0 ; i < v1.size() ; i++){
        for (int j = 0; j < v2.size() ; j++){
            if (v1[i] == v2[j]){
                cout << v1[i] << " ";
            } 
        }
    }
    cout << endl;


    // for (auto l : v1){
    //     cout << l << endl;
    // }
}