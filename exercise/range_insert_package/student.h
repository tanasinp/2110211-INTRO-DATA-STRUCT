#ifndef __STUDENT_H_
#define __STUDENT_H_


template <typename T>
void CP::vector<T>::insert(iterator position,iterator first,iterator last) {
  //write your code here
  vector<T> result;
  CP::vector<T>::iterator it;
  for (it = begin() ; it != position ; it++){
    result.push_back(*it);
  }
  for (it = first ; it != last ; it++){
    result.push_back(*it);
  }
  for (it = position ;it!=end(); it++){
    result.push_back(*it);
  }
  *this = result;
}

#endif
