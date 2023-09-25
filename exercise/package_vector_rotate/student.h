#ifndef __STUDENT_H_
#define __STUDENT_H_

template <typename T>
void CP::vector<T>::rotate(iterator first, iterator last, size_t k) {
  //write your code here
  vector<T> tmp;
  // T *arr = new T[last-first]();

  // int i = 0;
  for (auto it = first+k ; it != last ; it++){
    // arr[i] = *it;
    // i++;
    tmp.push_back(*it);
  }

  for (auto it = first ; it != first+k ; it++){
    // arr[i] = *it;
    // i++;
    tmp.push_back(*it);
  }

  // i = 0;
  // for (int j=first-begin();j<last-begin();j++){
  //   mData[j] = arr[i];
  //   i++;
  // }
  for (int i=0;i<tmp.size();i++){
    mData[first-begin()+i] = tmp[i];
  }


  

}

#endif
