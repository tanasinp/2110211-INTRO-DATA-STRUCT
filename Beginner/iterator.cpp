#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    vector<int> v1 = {0,1,2,3,4};
    vector<int>::iterator it1 = v1.begin() + 2;
    cout << *it1 << endl;
    // *(it1-2)
    // *it1+2

    vector<int>::iterator it3 = it1 +2;
    cout << it3 - it1 << endl; //2

    //
    auto it = v1.begin();
    while (it != v1.end()){//****
        cout << it - v1.begin() << ": " << *it << endl;
        it++;
    }

    //
    auto it4 = min_element(v1.begin(), v1.end());//max_element

    vector<string> v2 = {"t","n","s","p"};
    for (string x : v2){
        cout << x << ", ";
    }
    cout << endl;
    for (auto &x : v2 ){
        x.replace(0,4,"--");
    }
    
     vector<int> v3 = {10,20};
     auto it5 = v3.end()-1;
     v3.resize(10);
     //ระวังเอาไว้ การ resize จะเป็นการจองmemoryใหม่เลย10ตัว ไม่ใช่จองต่อ8ตัว

}