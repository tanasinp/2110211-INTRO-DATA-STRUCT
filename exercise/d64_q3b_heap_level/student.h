#ifndef __STUDENT_H__
#define __STUDENT_H__

#include <algorithm>
#include <vector>
#include "priority_queue.h"

template <typename T,typename Comp >
std::vector<T> CP::priority_queue<T,Comp>::at_level(size_t k) const {
  //write your code here
  //can include anything
  std::vector<T> r;
  int pos = 0;
  int num = 1;
  while (k--){
    pos = (pos*2)+1;
    num *= 2;
  }
  while (pos < mSize && num--){
    r.push_back(mData[pos]);
    pos++;
  }
  
  std::sort(r.begin(),r.end(),mLess);
  std::vector<T> tmp;
  for(int i = r.size()-1 ; i >= 0;i--){
    tmp.push_back(r[i]);
  }
  r = tmp;
  return r;

}


#endif

