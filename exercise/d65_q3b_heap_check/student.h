#ifndef __STUDENT_H
#define __STUDENT_H

#include "priority_queue.h"
#include <vector>

template <typename T, typename Comp>
bool CP::priority_queue<T, Comp>::check() {
  // Your code here
  // Return something
  // for (int i = 1; i < mSize ; i++){
  //   int p = (i-1)/2;
  //   while (p >= 0){
  //     if(mLess(mData[p],mData[i])){
  //       return false;
  //     }
  //     p = (p-1)/2;
  //   }
  // }
  // return true;
  for (int i = 0 ; i < mSize ; i++){
    if ((i*2)+1 < mSize && mLess(mData[i],mData[(i*2)+1])) return false;
    if ((i*2)+2 < mSize && mLess(mData[i],mData[(i*2)+2])) return false;
  }
  return true;
}

#endif