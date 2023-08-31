#include <iostream>
using namespace std;
int main() {
    int colum,row;
    int times;
    cin >> colum >> row;
    cin >> times;
    int a[row][colum];
    // row นอน , collum ตั้ง
    for (int i = 0; i < row; i++){
        for (int j = 0; j < colum; j++){
            cin >> a[i][j];
        }
    } 
    // cout << a[0][1] << endl;

    for (int i=0; i< times; i++){
        int r1,c1,r2,c2;
        cin >> r1 >> c1 >> r2 >> c2;
        if (r1 > r2 || c1 > c2){
            cout << "INVALID" << endl;
        } else if (r1 > row || c1 > colum){
            cout << "OUTSIDE" << endl;
        } 
        else {
            if (r2 > row){
                r2 = row;
            }
            if (c2 > colum){
                c2 = colum;
            }
            int x;
            x = a[r1-1][c1-1];
            for (int j = r1-1 ; j < r2 ; j++){
                for (int k = c1-1 ; k < c2 ; k++){
                if (a[j][k] > x) {
                    x = a[j][k];
                }
            }
        }
        cout << x << endl;
        }
    }
}