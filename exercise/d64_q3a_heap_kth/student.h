#ifndef __STUDENT_H__
#define __STUDENT_H__

#include <algorithm>
#include <vector>
#include "priority_queue.h"

template <typename T,typename Comp >
T CP::priority_queue<T,Comp>::get_kth(size_t k) const {
  //write your code here
  //can include anything

  // 50/100
  // CP::priority_queue<T,Comp> tmp(*this);
  // size_t num = k-1;
  // while(num--){
  //   tmp.pop();
  // }
  // return tmp.top();

  // 33.33/100
  // std::vector<T> tmp;
  // for (int i=0;i<mSize;i++){
  //   tmp.push_back(mData[i]);
  // }
  // std::sort(tmp.begin(),tmp.end());
  // return tmp[tmp.size()-k];

  // if (k == 1){
  //   return mData[0];
  // }
  // if (k == 2){
  //   if (mLess(mData[1],mData[2])) {
  //     return mData[2];
  //   }
  //   return mData[1];
  // }
  // if (k == 3){
  //   if (mLess(mData[1],mData[2])){
  //     if (mLess(mData[5],mData[6])){
  //       return mData[6];
  //     }
  //     return mData[5];
  //   } else {
  //     if (mLess(mData[3],mData[4])){
  //       return mData[4];
  //     }
  //     return mData[3];
  //   }
  // }

  std::vector<T> tmp;
  for (int i=0;i<7;i++){
    if (i < mSize ) {
      tmp.push_back(mData[i]);
    }
  }
  std::sort(tmp.begin(),tmp.end(), mLess);
  return tmp[tmp.size()-k];

}
#endif