#ifndef __STUDENT_H_
#define __STUDENT_H_
#include <map>

template <typename T>
void CP::vector<T>::insert_many(CP::vector<std::pair<int,T>> data) {
  //write your code here
  vector<T> result;
  std::map<int,T> dato;

  for (int i = 0;i < data.size();i++){
    dato[data[i].first] = data[i].second;
  }
  
  for (int i = 0 ; i <= mSize ; i++){
    auto it = dato.find(i);

    // if (it == dato.end()){ //not found
    //   result.push_back(mData[i]);
    // } else { // found
    //   if (i == mSize){
    //     result.push_back(dato[i]);
    //   } else {
    //     result.push_back(dato[i]);
    //     result.push_back(mData[i]);
    //   }
    // }

    if ((it != dato.end()) || (it != dato.end() && i == mSize) ){
      result.push_back(dato[i]);
    }
    if (i < mSize){
      result.push_back(mData[i]);
    }
  }
  
  *this = result;

}

#endif
