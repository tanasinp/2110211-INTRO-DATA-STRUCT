#ifndef __STUDENT_H_
#define __STUDENT_H_
#include <set>

//you can include any other file here
//you are allow to use any data structure


template <typename T>
void CP::vector<T>::uniq() {
  //do someting here

  vector<T> result;

  std::set<T> dato;

  for (int i = 0; i < mSize ; i++){
    auto it = dato.find(mData[i]);
    if (it == dato.end()){
      dato.insert(mData[i]);
      result.push_back(mData[i]);
    }
  }

  *this = result;

}

#endif
