#include <iostream>
using namespace std;

int main(){
    pair<int,float> x;
    x.first = 10;
    x.second = 20.95;

    //ค่า default ของ sreing,boolean คือ " ",false

    pair<string,bool> y = {"tanasin", true};

    pair<bool,int> p2;
    p2 = make_pair(false,10);

    pair<bool,int> p3(p2);

    pair< pair<float,int> , string> p4 = { {20.5,3}, "abs"};
    // cout << p4.first.first << endl;

    //ex
    // pair< pair<string,int> , array > x;
    ///ex
}