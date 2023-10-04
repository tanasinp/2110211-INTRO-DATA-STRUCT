#ifndef __STUDENT_H_
#define __STUDENT_H_

#include <cassert>

template <typename T>
void CP::queue<T>::reverse(int a,int b) {
  //your code here
  CP::queue<T> tmp;

  for (int i=b; a<=i ;i--){
    tmp.push(mData[(mFront+i)%mCap]);
  }

  for (int i=a;i<=b;i++){
    mData[(mFront+i)%mCap] = tmp.front();
    tmp.pop();
  }
}

#endif
