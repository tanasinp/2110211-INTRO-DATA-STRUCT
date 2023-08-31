#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    int times;
    cin >> times;
    vector<int> v;
    for (int i = 0 ; i < times ; i++){
        string str;
        int x;
        cin >> str;

        if (str == "pb"){
            cin >> x;
            v.push_back(x);

        } else if (str == "sa"){
            // for (int j = 0 ; j < v.size() ; j++){
            //     for (int k = j+1 ; k < v.size() ; k++){
            //         if (v[j] > v[k]){
            //             auto temp = v[j];
            //             v[j] = v[k];
            //             v[k] = temp;
            //         }
            //     }
            // }
            sort(v.begin(),v.end());
        } else if (str == "d"){
            cin >> x;
            v.erase(v.begin() + x);
        } else if (str == "sd"){
            // for (int j = 0 ; j < v.size() ; j++){
            //     for (int k = j+1 ; k < v.size() ; k++){
            //         if (v[j] < v[k]){
            //             auto temp = v[j];
            //             v[j] = v[k];
            //             v[k] = temp;
            //         }
            //     }
            // }
            sort(v.begin(), v.end(), greater<int>());
        } else if (str == "r"){
            for (int j = 0 ; j < v.size()/2 ; j++){
                // auto temp = v[j];
                // v[j] = v[v.size()-1-j];
                // v[v.size()-1-j] = temp;
                swap(v[j], v[v.size()-1-j]);
            }
        }
    }
    for (auto l : v){
            cout << l << " ";
        }
    cout << endl;
}