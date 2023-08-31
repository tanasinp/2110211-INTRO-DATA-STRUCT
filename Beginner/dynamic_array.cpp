#include <iostream>
using namespace std;
int main(){
    int cap = 1;
    string *words = new string[cap];
    int n = 0;
    //....//
    if (n == cap){
        string *a = new string[2*cap];
        for (int i =0; i<n ;i++){
            a[i] = words[i];
        }
        delete[] words;
        words = a;
        cap *= 2;
    }
}