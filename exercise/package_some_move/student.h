#ifndef __STUDENT_H_
#define __STUDENT_H_

#include "vector-sm.h"
#include <algorithm>
#include <iostream>
#include <vector>

template <typename T>
void CP::vector_some_move<T>::insert(int index, std::vector<T> &value) {
  // Your code here
  int colum,row;
  auto it = std::upper_bound(aux.begin(),aux.end(),index);
  if (it == aux.begin()){
    colum = index;
  } else {
    colum = index - *(it-1);
  }
  row = it - aux.begin();

  if (colum == 0){
    mData.insert(mData.begin()+row,value);
    aux.insert(aux.begin()+row,value.size());
    for (int i = row + 1 ; i < aux.size() ; i++){
      aux[i] += value.size();
    }
  } else {
    mData[row].insert(mData[row].begin()+colum, value.begin(), value.end());
    for (int i = row ; i < aux.size() ; i++){
      aux[i] += value.size();
    }
  }
  mCap += value.size();
  mSize += value.size();
  


}

#endif