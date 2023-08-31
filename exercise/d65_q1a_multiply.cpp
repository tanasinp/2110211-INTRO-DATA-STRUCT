#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
using namespace std;
void member_multiply(vector<int> &v,
vector<pair<vector<int>::iterator,int>> &multiply) {
    //write your code here
    // vector< pair<int,int>> v2;
    // for (auto x : multiply){
    //     v2.push_back(make_pair(x.first - v.begin(), x.second));
    // }
    // sort(v2.begin(), v2.end());
    // for (int i = v2.size()-1 ; i >= 0 ; i-- ){
    //     v.insert(v.begin()+v2[i].first, v2[i].second, v[v2[i].first]);
    // }

    // map<int,int> m1;
    // for (auto x : multiply){
    //     m1[-(x.first - v.begin())] = x.second;
    // }
    // for (auto x : m1){
    //     int n = x.first * -1;
    //     v.insert(v.begin()+n, m1[x.first], v[n]);
    // }

    vector<int> temp;
    map<int,int> m1;
    for (auto x : multiply){
        m1[*(x.first)] = x.second;
    }
    for (int x : v){
        for (int i = 0; i <= m1[x] ; i++){
            temp.push_back(x);
        }
    }
    v = temp;
    


}
int main() {
    ios_base::sync_with_stdio(false);cin.tie(0);
    int n,m;
    cin >> n >> m;
    vector<int> v(n);
    vector<pair<vector<int>::iterator,int>> multiply(m);
    for (int i = 0;i < n;i++) cin >> v[i];
    for (int i = 0;i < m;i++) {
    int a,b;
    cin >> a >> b;
    multiply[i].first = v.begin()+a;
    multiply[i].second = b;
    }
    member_multiply(v,multiply);
    cout << "======= result ========" << endl;
    cout << v.size() << endl;
    for (auto &x : v) {
    cout << x << " ";
    }
    cout << endl;
}