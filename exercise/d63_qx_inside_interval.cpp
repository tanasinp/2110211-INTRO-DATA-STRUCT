#include <iostream>
#include <vector>
#include <map>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(0);

    int n,m;
    map<int,int> m1;
    cin >> n >> m;
    for (int i=0;i<n;i++){
        int a,b;
        cin >> a >> b;
        m1[b] = a;
    }
    for (int i=0;i<m;i++){
        int a;
        cin >> a;
        auto it = m1.lower_bound(a);
        if(it!=m1.end()){
            if (a >= it->second){ // (*it).second
                cout << "1 ";
            } else {
                cout << "0 ";
            }
        } else {
            cout << "0 ";
        }
    }
    cout << endl;
}