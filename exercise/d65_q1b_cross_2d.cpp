#include <iostream>
#include <vector>
using namespace std;
void cross_2d(vector<vector<int>> &m ,int r1, int r2, int c1, int c2) {
 //your code here
//  int all_r = m.size();
//  int all_c = m[0].size();
//  vector<vector<int>> vavo;
//  if (r1 <= r2 && c1 <=c2){
//     for (int i = 0; i < all_r; i++){
//         if ( r1 <= i && i <=r1){
//             continue;
//         } else {
//             vector<int> insite_vavo;
//             for (int j = 0 ; j < all_c ; j++){
//                 if (c1 <= j && j <=c2){
//                     continue;
//                 } else {
//                     insite_vavo.push_back(m[i][j]);
//                 }
//             }
//             vavo.push_back(insite_vavo);
//         }
//     }
//  }
//  m = vavo;
if (r1 <= r2){
    m.erase(m.begin()+r1,m.begin()+r2+1);
    if (c1 <= c2){
        for (int i = 0 ; i < m.size() ; i++){
            m[i].erase(m[i].begin()+c1,m[i].begin()+c2+1);
        }
    }
}
 
}
int main() {
 ios_base::sync_with_stdio(false);cin.tie(0);
 vector<vector<int>> m;
 int r,c,r1,r2,c1,c2;
 cin>> r >> c;
 cin >> r1 >> r2 >> c1 >> c2;
 m.resize(r);
 for (int i =0;i < r;i++) {
 m[i].resize(c);
 for (int j = 0;j < c;j++) {
 cin >> m[i][j];
 }
 }
 cross_2d(m,r1,r2,c1,c2);
 for (int i =0;i < m.size();i++) {
 for (int j = 0;j < m[i].size();j++) {
 cout << m[i][j] << " ";
 }
 cout << "\n";
 }
 return 0;
}