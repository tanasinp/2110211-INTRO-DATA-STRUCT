#include <iostream>
#include <queue>
#include <set>
#include <map>
#include <vector>
using namespace std;

int a[500112];

int main(){
    std::ios_base::sync_with_stdio(false); std::cin.tie(0);
    int n,m;
    cin >> n >> m;

    map <int,int> mappo;
    multiset<int> multi = {1};
    vector<int> v;

    for (int i = 0 ; i < n ; i++){
        int num;
        cin >> num;
        v.push_back(num);
    }

    for (int i=0 ; i < m ; i++){
        int index;
        cin >> index;

        a[index] = v[i];
        
    }

}