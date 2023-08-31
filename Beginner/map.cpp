#include <iostream>
#include <map>
using namespace std;
int main(){
    //คล้ายๆ dict
    map<string,int> m;
    m["somchai"] = 10;
    m["somying"] = -5;
    cout << "Size = " << m.size() << endl;

    for (auto it = m.begin(); it != m.end(); it++){
        cout << it->first << " is mapped to " << it->second << endl;
    }

}