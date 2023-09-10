#include <iostream>
#include <queue>
#include <vector>
#include <map>
#include <algorithm>
using namespace std;

// priority_queue< pair<pair<int,int> ,int>> dota[1000112];
// map<int,int> mappo[1000112];
// vector<int> stock;

map<pair<int,int>,int> mappo;
map<int,int> stock;
priority_queue< pair<int,int> > dota[1000112];
vector<int> result[1000112];

int main(){
    int n,m,a;
    cin >> n >> m >> a;

    for (int i = 1 ; i <= n ; i++){
        int num;
        cin >> num;
        // stock.push_back(num);
        stock[i] = num;
    }

    for (int i = 0; i< a ;i++){
        // int user,type,price;
        char comm;
        cin >> comm;
        if (comm == 'B'){
            int user,type,price;
            cin >> user >> type >> price;
            mappo[{user,type}] = price;

        } else if (comm == 'W'){
            int user,type;
            cin >> user >> type;
            mappo.erase({user,type});
        }
    }

    for (auto x : mappo){
        int user,type,price;
        type = (x.first).second;
        user = (x.first).first;
        price = x.second;

        dota[type].push(make_pair(price , user));
        // dota[(x.first).second].push(make_pair(x.second , (x.first).first));
    }

    for (int i = 1 ; i <= n ; i++){
        int stock_num = stock[i];
        while (stock_num != 0 && !dota[i].empty()){
            auto top = dota[i].top();
            dota[i].pop();

            result[top.second].push_back(i);
            stock_num--;
        }
    }

    for (int i=1 ; i <=m ;i++){
        if (result[i].empty()){
            cout << "NONE\n";
        } else {
            for (auto x : result[i]){
                cout << x << " ";
            }
            cout << "\n";
        }
    }
    
}