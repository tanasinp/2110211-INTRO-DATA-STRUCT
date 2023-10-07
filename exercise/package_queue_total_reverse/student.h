#ifndef _STUDENT_H_INCLUDED
#define _STUDENT_H_INCLUDED
#include "queue.h"

template <typename T>
void CP::queue<T>::reverse() {
  // Your code here
  if  (aux == 0){
    aux = 1;
  } else {
    aux = 0;
  }
}

template <typename T>
const T& CP::queue<T>::front() const {
  // You MAY need to edit this function
  if (aux == 0){
    return mData[mFront];
  } else if(aux == 1){
    return mData[(mFront + mSize - 1) % mCap];
  }  
}

template <typename T>
const T& CP::queue<T>::back() const {
  // You MAY need to edit this function
  if (aux == 0){
    return mData[(mFront + mSize - 1) % mCap];
  } else if(aux == 1){
    return mData[mFront];
  }
}

template <typename T>
void CP::queue<T>::push(const T& element) {
  // You MAY need to edit this function
  if (aux == 0){
    ensureCapacity(mSize + 1);
    mData[(mFront + mSize) % mCap] = element;
    mSize++;
  } else if(aux == 1){
    ensureCapacity(mSize + 1);
    mFront = (mFront + mCap -1)%mCap;
    mData[mFront] = element;
    mSize++;
  }
  
}

template <typename T>
void CP::queue<T>::pop() {
  // You MAY need to edit this function
  if (aux == 0){
    mFront = (mFront + 1) % mCap;
    mSize--;
  } else if(aux == 1){
    mSize--;
  }
  
}

#endif