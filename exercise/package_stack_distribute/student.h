#ifndef __STUDENT_H__
#define __STUDENT_H__

template <typename T>
std::vector<std::vector<T>> CP::stack<T>::distribute(size_t k) const {
  //write your code here
  std::vector<std::vector<T>> result;
  if (mSize % k == 0){
    int j = mSize - 1;
    for (int i=0;i<k;i++){
      std::vector<T> tmp;
      int range = mSize/k;
      while (range != 0){
        tmp.push_back(mData[j]);
        j--;
        range--;
      }
      result.push_back(tmp);
    }
  } else {
    int j = mSize - 1;
    int piece = mSize % k;
    for (int i=0;i<k;i++){
      std::vector<T> tmp;
      int range = mSize/k;
      if (piece > 0){
        range++;
      }
      while (range != 0){
        tmp.push_back(mData[j]);
        j--;
        range--;
      }
      piece--;
      result.push_back(tmp);
    }
  }
  return result;
}
#endif
