#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    //vector
    vector<int> a = {2,3};
    vector<bool> b = {true,false,true};//1 0 1

    a.push_back(10);
    a.insert(a.begin(), 99);
    a.insert(a.end(),-5);

    sort(a.begin(),a.end());

    for (size_t i =0; i < a.size();i++){
        cout << a[i] << " ";
    }
    cout << endl;


    ///
    vector<string> words;
    string token = "babababa";
    if (words.end() == find(words.begin(),words.end(),token)){
        words.push_back(token);
    }


    /////////////////////////////////////////////////////////

    vector<float> v1(10); //สร้างมา10ตัว คือ 0 ค่าdefault

    vector<float> v2(5, 3.55);//สร้างมา5ตัว คือ3.55

    vector<float> v3(v2); //copy constructor

    v2.at(1) =99;// == v2[1] but it will check before

    v2.resize(4);//ลดไซส์เหลือ1ตัว(3.55) แต่ถ้าเพิ้มจะป็นค่าเป็นdefault(0) 
    //การใช้resizeจะเป็นการสร้างmemoryใหม่ ไม่ใช่การเพิ่มขนาดต่อจากเดิม ดังน้ันระวังพวกiterator

    v2.insert(v2.begin()+1,2);//v.end() คือช่องถัดจากช่องสุดท้าย (v.begin()+v.size())

    //v2.erase(position) //ลบแล้วเลื่อน
    //pop_back ลบตัวท้ายสุด



    vector<int> v = {1,2,3,4,5,6,7,8};
    int x = 5;
    if (find(v.begin(),v.end(),x) != v.end()){ //find,return มาเป็น iterator
        cout << "found" << endl;
    } else {
        cout << "not found" << endl ;
    }
        

    /////////////////////////////////////////////////////////
    //sort
    //#include <algorithm> 
    //find(a,b,c) a&b is iterator , find c from a to before b , if not found return b
    // sort(a,b) sort a to before b     time = nlogn

    vector< pair<string,int> > l ;

    //lower_bound upper_bound ต้องsort vector ก่อน
}