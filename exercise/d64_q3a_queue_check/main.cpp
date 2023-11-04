#include <iostream>
using namespace std;
int main(){
    std::ios_base::sync_with_stdio(false); std::cin.tie(0);
    int n;
    cin >> n;
    for (int i=0;i<n;i++){
        int mFront,mSize,mCap,last,correction;
        cin >> mFront >> mSize >> mCap >> last >> correction;
        
            if (correction == 0){
                if (mSize > mCap){
                    cout << "WRONG\n";
                } else if ( (mFront + mSize )%mCap != last){
                    cout << "WRONG\n";
                } else {
                    cout << "OK\n";
                }
            } else if (correction == 1){
                if ((mFront + mSize)%mCap != last){
                    cout << "WRONG" << " " << (mCap-mSize + last)%mCap << "\n";//+1
                } else {
                    cout << "OK\n";
                }
            } else if (correction == 2){
                if (mSize <= mCap){
                    if ((last-mFront+mCap)%mCap != mSize){
                        cout << "WRONG" << " " << (last-mFront+mCap)%mCap << "\n";
                    } else {
                        cout << "OK\n";
                    }
                } else {
                    cout << "WRONG" << " " << (last-mFront+mCap)%mCap << "\n";
                }
            } else if (correction == 3){
                if (mFront + mSize != last){
                    cout << "WRONG" << " " << mFront+mSize-last << "\n";
                } else {  
                    cout << "WRONG" << " " << last+1 << "\n";
                    
                }
            } else if (correction == 4){
                if ((mFront + mSize)%mCap != last){
                    cout << "WRONG" << " " << (mFront+mSize)%mCap << "\n";
                } else {
                    cout << "OK\n";
                }
            }
    }
}