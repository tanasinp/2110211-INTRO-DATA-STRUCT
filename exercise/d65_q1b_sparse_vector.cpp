#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
using namespace std;
void insert_into_sv(map<int,int> &v, int pos, int value) {
 //your code here
   // if (v.empty()){
   //    v.insert({pos,value});
   // } else {
   //    for (auto it = v.rbegin() ; it != v.rend() ; it++){
   //       if (it->first >= pos){
   //          int a = it->first;
   //          v.insert({it->first +1, it->second});
   //          v.erase(a);
   //       } else {
   //          break;
   //       } 
   //    }
   //    v.insert({pos,value});
   // }
   vector<pair<int,int>> vovo ;
   if (v.empty()){
      v.insert({pos,value});
   } else {
      auto it = v.lower_bound(pos);
      for (auto it2 = it ; it2 != v.end() ; it2++ ){
         vovo.push_back(make_pair(it2->first + 1, it2->second));
      }
      v.erase(it,v.end());
      v.insert({pos,value});
      v.insert(vovo.begin(),vovo.end());
   }
}
int main() {
 ios_base::sync_with_stdio(false);cin.tie(0);
 int n;
 map<int,int> v;
 cin >> n;
 for (int i = 0;i < n;i++) {
 int a,b;
 cin >> a >> b;
 insert_into_sv(v,a,b);
 }
 cout << v.size() << "\n";
 for (auto &x : v) {
 cout << x.first << ": " << x.second << "\n";
 }
}