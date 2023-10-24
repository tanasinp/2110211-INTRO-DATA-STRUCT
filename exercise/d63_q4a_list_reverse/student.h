#ifndef __STUDENT_H_
#define __STUDENT_H_

#include <algorithm>

template <typename T>
typename CP::list<T>::iterator CP::list<T>::reverse(iterator a, iterator b) {
  // write your code here
  // auto tmp = b.ptr->prev;
  // a.ptr->prev->next = b.ptr->prev;
  // a.ptr->next = b.ptr;
  // b.ptr->prev->prev = a.ptr->prev;
  // b.ptr->prev = a.ptr;
  // auto x = b;
  // x--;
  // auto bb = x;
  // while (x != a){
  //   x.ptr->next = (--x).ptr;
  // }
  // auto y = a;
  // while (y != bb){
  //   y.ptr->prev = (++y).ptr;
  // }
  // return tmp;
  auto it1 = a;
  auto it2 = b;
  if (a==b){
    return a;
  }
  it2--;
  while(it1 != it2){
    std::swap(*it1,*it2);
    it1++;
    if (it1 == it2){
      break;
    }
    it2--;
  }
  return a;
}

#endif
