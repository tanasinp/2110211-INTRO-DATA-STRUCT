#ifndef __STUDENT_H_
#define __STUDENT_H_

#include <map>

template <typename T>
std::vector<std::pair<T,size_t>> CP::queue<T>::count_multi(std::vector<T> &k) const {
    //write your code her
    std::vector<std::pair<T,size_t>> res;
    std::map<T,int> tmp;

    for (int i=0;i<mSize;i++){
        tmp[mData[(mFront + i) % mCap]]++;
    }
    for (int i=0;i<k.size();i++){
        auto it = tmp.find(k[i]);
        if (it!=tmp.end()){
            res.push_back({k[i],it->second});
        } else {
            res.push_back({k[i],0});
        }
    }
    return res;
}

#endif
