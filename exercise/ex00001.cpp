#include<iostream>
#include<set>
#include<algorithm>
#include<map>
#include<vector>
class Item
{
public:
   int type;
   int value;
bool operator<(const Item& other) const{
    if(value == other.value){
        return type > other.type;
    }
    return value > other.value;
};
};


using namespace std;
int main()
{
    set<Item> st;
    int k=6;

    Item item;
    item.type=3;
    item.value= 6;
    st.insert(item);
    
     item.type=2;
    item.value= 4;
    st.insert(item);

     item.type=1;
    item.value= 4;
    st.insert(item);

    item.type=4;
    item.value= 3;
    st.insert(item);

    item.type=5;
    item.value= 1;
    st.insert(item);


    for(auto item : st){
    cout << "{"<< item.type <<","<< item.value <<"} ";
   }

    Item finder;
    finder.type = -1;
    finder.value = 4;

    auto it = st.lower_bound(finder);

    if(it == st.end()) cout << "NONE";
    else cout <<"\nmax but less than k : "<<it->type;

    return 0;
}