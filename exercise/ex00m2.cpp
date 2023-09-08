#include <iostream>
#include <queue>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    int n,m,a;
    cin >> n >> m >> a;

    vector<int> v;

    for (int i = 0 ; i< n ; i++){
        int num;
        cin >> num;
        v.push_back(num);
    }

    for (auto x : v){
        cout << x << "\n";
    }

}