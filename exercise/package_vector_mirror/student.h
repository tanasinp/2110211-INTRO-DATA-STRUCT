#ifndef __STUDENT_H_
#define __STUDENT_H_

template <typename T>
void CP::vector<T>::mirror() {
  //write your code here
  ensureCapacity(mSize *2);
  int k = mSize;
  int i = 0;
  for (i;i<k;i++){
    mData[2k-i-1] = mData[i];
  }
  mSize *= 2;

}

#endif
