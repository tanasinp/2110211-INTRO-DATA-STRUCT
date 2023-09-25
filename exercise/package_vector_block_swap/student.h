#ifndef __STUDENT_H_
#define __STUDENT_H_

template <typename T>
bool CP::vector<T>::block_swap(iterator a, iterator b, size_t m) {
  //write your code here
  if (m == 0){
    return false;
  }
  if (!(begin() <= a && a < end())){
    return false;
  }
  if (!(begin() <= b && b < end())){
    return false;
  }
  
  if (a+m-1 >= end() || b+m-1 >= end()){
    return false;
  }
  if (a < b){
    if (a+m-1 >= b){
      return false;
    }
  } else {
    if (b+m-1 >= a){
      return false;
    }
  }
  
  for (int i=0;i<m;i++){
    T tmp = *(b+i);
    *(b+i) = *(a+i);
    *(a+i) = tmp;
  }
  return true;
}

#endif
