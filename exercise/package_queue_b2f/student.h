#ifndef __STUDENT_H_
#define __STUDENT_H_

#include <algorithm>
#include <iostream>


template <typename T>
void CP::queue<T>::back_to_front() {
  //write your code here
  T tmp = mData[(mFront+mSize-1)%mCap];
  mData[(mFront -1 + mCap)%mCap] = tmp;
  mFront = (mFront -1 + mCap)%mCap;
}

#endif
