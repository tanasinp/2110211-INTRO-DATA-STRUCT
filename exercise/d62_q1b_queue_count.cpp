#include <iostream>
#include <vector>
#include <queue>
using namespace std;
size_t qcount(queue<int> q, int k) {
 //write your code here
    // queue<int> q2 = q;
    int sum = 0;
    // for (int i = 0; i < q2.size() ; i++){
    //     if (q2.front() == k){
    //         sum ++;
    //     }
    //     q2.pop();
    // }
    while (!q.empty()){
        if (q.front() == k){
            sum ++;
        }
        q.pop();
    }
    return sum;
}
int main() {
 // for faster cin, cout
 ios_base::sync_with_stdio(false); cin.tie(0);
 int n,k;
 cin >> n >> k;
 queue<int> q;
 for (int i = 0;i < n;i++) {
 int a;
 cin >> a;
 q.push(a);
 }
 cout << qcount(q,k) << endl;
}