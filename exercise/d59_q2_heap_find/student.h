#ifndef __STUDENT_H_
#define __STUDENT_H_

#include <stdio.h>
#include "priority_queue.h"
#include <iostream>

template <typename T,typename Comp >
bool CP::priority_queue<T,Comp>::find(T k) const {
  //your code here
  for (int i = 0 ; i < mSize ; i++ ){
    if (mData[i] == k) return true;
  }
  return false;
}

template <typename T,typename Comp >
int CP::priority_queue<T,Comp>::find_level(T k) const {
  //your code here
  bool check = false;
  int s = mSize-1;
  for (int i = mSize-1; i >= 0 ; i--,s--){
    if (mData[i] == k) {
      check = true;
      break;
    }
  }

  if (check){
    int n = 0;
    while (s > 0){
      s = (s-1)/2;
      n++;
    }
    return n;
  }
  return -1;

}

#endif

