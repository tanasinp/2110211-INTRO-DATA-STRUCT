#ifndef __STUDENT_H_
#define __STUDENT_H_

template <typename T>
bool CP::vector<T>::operator<(const CP::vector<T> &other) const {
  //write your code here
  // if you use std::vector, your score will be half (grader will report score BEFORE halving)
  if ((mSize == 0) && (other.mSize >= 1)){
    return true;
  } 
  if (((mSize >=1) && (other.mSize >= 1)) && (mData[0] < other.mData[0])){
    return true;
  } 
  if (((mSize >=1) && (other.mSize >= 1)) && (mData[0] == other.mData[0])) {
    if (mSize < other.mSize){
      return true;
    } else if (mSize > other.mSize){
      return false;
    } else {
      for (int i=0;i<mSize;i++){
        if (mData[i] < other.mData[i]){
          return true;
        }
      }
      return false;
    }
  }
  return false;

}

#endif
