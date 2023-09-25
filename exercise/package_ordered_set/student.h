#include <vector>
using namespace std;

template <typename T>
vector<T> Union(const vector<T>& A, const vector<T>& B) {
    vector<T> v;
    vector<int> dato(100111);
    for (auto &x : A){
        dato[x] = 1;
        v.push_back(x);
    }
    for (auto &x:B){
        if (dato[x] == 0){
            dato[x] = 1;
            v.push_back(x);
        }
    }
    return v;
}

template <typename T>
vector<T> Intersect(const vector<T>& A, const vector<T>& B) {
    vector<T> v;
    vector<int> dato(100111);
    for (auto &x : B){
        dato[x] = 1;
    }
    for (auto &x : A){
        if (dato[x] == 1){
            v.push_back(x);
        }
    }
    return v;
}
