#ifndef __STUDENT_H_
#define __STUDENT_H_


template <typename T>
std::vector<T> CP::queue<T>::to_vector(int k) const {
  std::vector<T> res;
  //write your code only here
  //
  if (k > mSize){
    k = mSize;
  }
  res.resize(k);
  for (int i=0;i<k;i++){
    res[i] = mData[(mFront+i) % mCap];
  }
  return res;
}

template <typename T>
CP::queue<T>::queue(iterator from,iterator to) {
  //write your code only here
  mCap = to - from;
  mData = new T[mCap]();
  mSize = 0;
  for (auto it=from;it!=to;it++){
    mData[mSize++]=*it;
  }
  mFront = 0;
}

#endif
