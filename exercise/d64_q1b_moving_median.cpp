#include <iostream>
#include <map>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    std::ios_base::sync_with_stdio(false); std::cin.tie(0);
    int n,w;
    map<int,int> data;
    vector<int> v1;
    cin >> n >> w;

    for (int i = 0; i < n ; i++){
        int num;
        cin >> num;
        data[i] = num;
    }

    for (int i = 0; i <= w ; i++){
        v1.push_back(data[i]);
    }
    sort(v1.begin(),v1.end());

    cout << v1[v1.size()/2] << " ";

    for (int i = 0; i < n-w-1; i++){
        int a = data[i];// a is the number that we want remove in v1
        auto it1 = find(v1.begin(),v1.end(),a);
        v1.erase(it1);

        auto it2 = upper_bound(v1.begin(),v1.end(),data[w+1+i]);
        v1.insert(it2,data[w+1+i]);

        int median;
        median = v1[v1.size()/2];

        cout << median << " ";
    }
    cout << endl;

    
}