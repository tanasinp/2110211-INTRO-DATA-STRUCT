#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    int n,a;
    cin >> n >> a;

    vector<int> res;
    res.push_back(a);
    int round = 1;

    bool check = true;


    while(check){

        vector<int> tmp;
        
        for (int i = round ; i >= 1 ; i--){
            if ((res[res.size()-i]*2) + 1 < n){
                tmp.push_back((res[res.size()-i]*2) + 1);
            } else { 
                check = false;
                break;
            }

            if ((res[res.size()-i]*2) + 2 < n){
                tmp.push_back((res[res.size()-i]*2) + 2);
            } else { 
                check = false;
                break;
            }

        }

        res.insert(res.end(),tmp.begin(),tmp.end());
        round *= 2;
    }
    
    cout << res.size() << "\n";

    for (auto &x : res){
        cout << x << " ";
    }
    cout << endl;
}