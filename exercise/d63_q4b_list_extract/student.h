#ifndef __STUDENT_H_
#define __STUDENT_H_

#include <algorithm>

template <typename T>
void CP::list<T>::extract(const T& value,iterator a, iterator b,CP::list<T>& output) {
  //write your code here

  // for (auto it = a; it < b ; it++){
  //   if (*it == value){
  //     output.push_front(*it);

  //   }
  // }
  if (size() == 0 || a == b){
    return;
  }

  CP::list<T>::iterator it = a;
  while (it != b){
    if (*it == value){
      // output.push_front(*it);
      CP::list<T>::iterator it2 = output.begin();
      node *n = new node(*it , it2.ptr->prev , it2.ptr);
      it2.ptr->prev->next = n;
      it2.ptr->prev = n;
      output.mSize++;
      
      // it = erase(it);
      CP::list<T>::iterator tmp = it.ptr->next;
      it.ptr->prev->next = it.ptr->next;
      it.ptr->next->prev = it.ptr->prev;
      delete it.ptr;
      mSize--;
      it = tmp;
    } else {
      // it++;
      it = it.ptr->next;
    }
  }

}

#endif
