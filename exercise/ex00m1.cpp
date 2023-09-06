#include <iostream>
#include <queue>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    int n,m;
    vector<int> chef;
    cin >> n >> m;

    for (int i = 0; i < n;i++){
        int num;
        cin >> num;
        chef.push_back(num);
    }
    sort(chef.begin(),chef.end());

    int times = 0;
    int ctm = 0;
    while (ctm < m){
        if (times == 0){
            for (int i = 0 ; i < chef.size();i++){
                cout << times << "\n";
                ctm++;
                if (ctm >= m){
                        break;
                    }
            }
        } else {
            for (auto x : chef){
                if (times % x == 0){
                    cout << times << "\n";
                    ctm++;
                    if (ctm >= m){
                        break;
                    }
                }
            }
        }

        times++;

    }
}