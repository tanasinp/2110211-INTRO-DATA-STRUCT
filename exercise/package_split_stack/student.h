#ifndef __STACK_STUDENT_H__
#define __STACK_STUDENT_H__
#include "stack.h"
#include <algorithm>

template <typename T>
std::vector<std::vector<T>>  CP::stack<T>::split_stack(int k) const {
  //your code here
  //should return something
  std::vector<std::vector<T>> res(k);
  for (int i=1; i <= mSize ; i++){
    res[(i-1)%k].insert(res[(i-1)%k].begin(), mData[mSize-i]);
  }
  return res;
}

#endif

