#include <iostream>
#include <queue>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    int n,m;
    vector<int> target,all_sales;
    queue<int> pla,dot;
    int sale = 0;

    cin >> n >> m;
    for (int i = 0; i < m;i++){
        int num;
        cin >> num;
        target.push_back(num);
    }

    for (int i = 0 ; i < n ;i++){
        int option,store,price;
        cin >> option;
        if (option == 1){
            cin >> store >> price;
            if (store == 1){
                pla.push(price);
            } else { // 2
                dot.push(price);
            }
        } else { // 2
            // if (dot.empty() || (pla.front() <= dot.front())){
            //     sale += pla.front();
            //     pla.pop();
                
            // } else if (pla.empty() || (dot.front() < pla.front()) ){
            //     sale += dot.front();
            //     dot.pop();
                
            // } 
            // all_sales.push_back(sale);
            if (dot.empty() && !pla.empty()){
                sale += pla.front();
                pla.pop();
            } else if (!dot.empty() && pla.empty()){
                sale += dot.front();
                dot.pop();
            } else {
                if (pla.front() <= dot.front()){
                    sale += pla.front();
                    pla.pop();
                } else {
                    sale += dot.front();
                    dot.pop();
                }
            }
            all_sales.push_back(sale);
        }
    }

    for (auto x : target){
        auto it = lower_bound(all_sales.begin(),all_sales.end(),x);
        if (it != all_sales.end()){
            int a = it - all_sales.begin() + 1;
            cout << a << " ";
        } else {
            cout << "-1 ";
        }
    }
    // for (auto x : all_sales){
    //     cout << x << endl;
    // }
    cout << endl;
}