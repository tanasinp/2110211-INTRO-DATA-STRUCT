#ifndef __STUDENT_H_
#define __STUDENT_H_

#include <algorithm>
#include <iostream>

template <typename T>
void CP::queue<T>::move_to_front(size_t pos) {
    //your code here
    T tmp = mData[pos];
    for (int i=pos ; mFront < i ;i--){
        mData[i] = mData[i-1];
    }
    mData[mFront] = tmp;
}

#endif
