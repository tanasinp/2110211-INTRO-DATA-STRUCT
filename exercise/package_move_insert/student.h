#ifndef __STUDENT_H__
#define __STUDENT_H__

template <typename T>
void CP::stack<T>::moveInsert(int k,CP::stack<T> &s2, int m) {
  //your code here
  T *arr = new T[mSize + m]();

  if (m > s2.size()){
    m = s2.size();
  }

  int j=0;
  int w = mSize-k;

  for(int i = 0 ;i<mSize+m;i++){
    if (i < mSize-k){
      arr[i] = mData[i];
    } else if (mSize-k <= i && i < mSize-k+m){
      arr[i] = s2.mData[s2.size()-m+j];
      j++;
    } else {
      arr[i] = mData[w];
      w++;
    }
  }

  for (int x=0;x<m;x++){
    s2.pop();
  }

  delete [] mData;
  mData = arr;
  mSize = mSize+m;

  
}
#endif
