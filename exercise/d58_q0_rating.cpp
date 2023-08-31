#include <iostream>
#include <set>
#include <map>
#include <vector>
#include <iomanip>
using namespace std;
int main(){
    cout << std::fixed << std::setprecision(2);
    
    int n,grade;
    string subject,teacher;

    map<string,int> count;
    map<string,int> sum;

    cin >> n;
    for (int i = 0; i < n ; i++){
        cin >> subject >> teacher >> grade;
        count[subject]++;
        count[teacher]++;

        sum[subject] += grade;
        sum[teacher] += grade;

    }
    for (auto x : sum){
        int a = x.second;
        auto it = count.find(x.first);
        int b = it->second;
        cout << x.first << " " << (a+0.0)/b << "\n";
    }

}