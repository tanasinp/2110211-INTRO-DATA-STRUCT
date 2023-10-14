#ifndef __STUDENT_H_
#define __STUDENT_H_

template <typename T>
void CP::vector<T>::rotate(iterator first, iterator last, size_t k) {
  //write your code here
  CP::vector<T> tmp;
  
  // for (auto it = first+k ; it != last ; it++){
  //   tmp.push_back(*it);
  // }

  // for (auto it = first ; it != first+k ; it++){
  //   tmp.push_back(*it);
  // }

  // for (int i=0;i<tmp.size();i++){
  //   mData[first-begin()+i] = tmp[i];
  // }

  for (auto it = first ; it < first+k ; it++){
    tmp.push_back(*it);
  }
  for (auto it = first ; it < last-k ; it++){
    *it = *(it+1);
  }
  for (int i = 0 ; i < tmp.size();i++){
    *(last-k+i) = tmp[i];
  }


  

}

#endif
