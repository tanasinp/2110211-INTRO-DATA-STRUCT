#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
using namespace std;

int a[1000112];
void list_erase(vector<int> &v, vector<int> &pos) {
 //write your code here
    vector<int> v1;
    // int a[1000112];
    // sort(pos.begin(),pos.end(),greater<int>());
    // for (auto x : pos){
    //     v.erase(v.begin()+x);
    // }
    for (auto x : pos){
        a[x] = 1;
    }
    for (int i=0;i<v.size();i++){
        if (a[i] != 1){
            v1.push_back(v[i]);
        }
    }
    v = v1;
    
}
int main() {
 std::ios_base::sync_with_stdio(false);
 cin.tie(0);
 int n,m;
 cin >> n >> m;
 vector<int> v(n), pos(m);
 for (int i = 0;i < n;i++) cin >> v[i];
 for (int i = 0;i < m;i++) cin >> pos[i];
 list_erase(v,pos);
 cout << "After call list_erase" << endl << "Size = " << v.size() << endl;
 for (auto &x : v) cout << x << " ";
 cout << endl;
}