#ifndef __STUDENT_H_
#define __STUDENT_H_

#include <algorithm>

template <typename T>
void CP::vector<T>::swap(CP::vector<T> &other) {
  // your code here
  size_t tmp_size = mSize;
  size_t tmp_cap = mCap;
  T *tmp = new T[mSize];
  for (int i = 0;i<mSize;i++){
    tmp[i] = mData[i];
  }

  delete [] mData;
  mData = other.mData;
  mSize = other.mSize;
  mCap = other.mCap;

  delete [] other.mData;
  other.mData = tmp;
  other.mSize = tmp_size;
  other.mCap = tmp_cap;



}

#endif
