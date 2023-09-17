#ifndef __STUDENT_H_
#define __STUDENT_H_

#include <algorithm>

template <typename T>
T& CP::vector_no_move<T>::operator[](int idx) {
  //your code here
  int row,colum;
  row = upper_bound(aux.begin(),aux.end(),idx) - aux.begin() - 1;
  if (row == 0){
    colum = idx;
    return mData[row][colum];
  } else {
    colum = idx - aux[row];
    return mData[row][colum];
  }
}

template <typename T>
void CP::vector_no_move<T>::expand_hook() {
  //your code here
  //you MAY need this function
  if (aux.size() == 0){
    aux.push_back(0);
  }
  aux.push_back(mData.back().size() + aux.back());
}

#endif