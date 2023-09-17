#ifndef __STUDENT_H_
#define __STUDENT_H_

#include "vector-sm.h"
#include <algorithm>
#include <iostream>
#include <vector>

template <typename T>
void CP::vector_some_move<T>::insert(int index, std::vector<T> &value) {
  // Your code here
  mSize++;
  ensureCapacity(mSize);
  for (int i = mSize-1 ; i > index ; i--){
    mData[i] = mData[i-1];
  }
  mData[index] = value;
  
}

#endif