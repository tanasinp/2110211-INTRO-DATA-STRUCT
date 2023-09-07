#include <iostream>
#include <queue>
#include <set>
#include <map>
#include <vector>
using namespace std;

int a[500112];

int main(){
    fill_n(a,500112,1);
    std::ios_base::sync_with_stdio(false); std::cin.tie(0);
    int n,m;
    cin >> n >> m;

    map <int, vector<int>> mappo;
    multiset<int> multi ;
    vector<int> v;

    for (int i = 0 ; i < n ; i++){
        int num;
        cin >> num;
        v.push_back(num);
    }

    for (int i = 0 ; i < m; i++){
        multi.insert(1);
    }

    for (int i=0 ; i < n ; i++){
        int index;
        cin >> index;

        // if (a[index] == 0){
        //     a[index] = v[i];
        //     multi.insert(a[index]);
        // } else {
        //     if (v[i] > a[index]){
        //         auto it2 = multi.find(a[index]);
        //         multi.erase(it2);

        //         a[index] = v[i];
        //         multi.insert(a[index]);


        //     }
        // }

        if (v[i] > a[index]){
            auto it2 = multi.find(a[index]);
            multi.erase(it2);

            a[index] = v[i];
            multi.insert(a[index]);

        }

        // for (auto x : multi){
        //     cout << x << " ";
        // }
        auto it = multi.begin();        
        cout << *it << " ";
    }
    cout << endl;

}