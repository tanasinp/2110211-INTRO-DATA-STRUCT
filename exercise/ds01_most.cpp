#include <iostream>
#include <map>
using namespace std;
int main(){
    map<string,int> m1;
    int n;
    cin >> n;
    for (int i = 0; i< n; i++){
        string names;
        cin >> names;
        m1[names]++;
    }

    map<int,string> m2;
    for (auto &x : m1){
        m2[x.second] = x.first;
    }

    auto it = m2.end();
    it--;
    cout << it->second << " " << it->first;
    cout << endl;
}