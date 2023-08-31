#include <iostream>
#include <map>
#include <vector>
#include <set>
#include <algorithm>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false); cin.tie(0);
    // map<int,vector<int>> m1;
    map<int,set<int>> m1;
    int n,m;
    cin >> n >> m;
    for (int i=0;i<n;i++){
        int year,month;
        cin >> year >>month;
        // m1[year].push_back(month*(-1));
        m1[year*(-1)].insert(month*(-1));
    }
    for (int i=0;i<m;i++){
        int year,month;
        cin >> year >>month;
        auto it_year = m1.lower_bound(year*(-1));
        if (it_year != m1.end()){
            if (year > it_year->first*(-1)){
                auto it_month = (it_year->second).begin();
                cout << it_year->first*(-1) << " " <<  *it_month*(-1) << " ";
            } else {
                auto it_month = (it_year->second).lower_bound(month*(-1));
                if (it_month != it_year->second.end()){ 
                    if (month*(-1) == *it_month){
                        cout << "0 0 ";
                    } else {
                        cout << it_year->first*(-1) << " " << *it_month*(-1) << " ";
                    }
                } else {
                    auto it_year = m1.lower_bound(year*(-1)+1);
                    if (it_year != m1.end()){
                        it_month = (it_year->second).begin();
                        cout << it_year->first*(-1) << " " <<  *it_month*(-1) << " ";
                    } else {
                        cout << "-1 -1 ";
                    }
                }
            }
            
        } else {
            cout << "-1 -1 ";
        }

    }
    cout << endl;
}