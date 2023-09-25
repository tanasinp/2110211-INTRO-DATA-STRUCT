#ifndef __STACK_STUDENT_H__
#define __STACK_STUDENT_H__
#include "stack.h"

//DO NOT INCLUDE ANYTHING


template <typename T>
CP::stack<T>::stack(typename std::set<T>::iterator first,typename std::set<T>::iterator last) {
  //write your code ONLY here
  CP::stack<T> s1;
  CP::stack<T> s2;
  for (auto it = first; it != last;it++){
    s1.push(*it);
  }
  while(!s1.empty()){
    s2.push(s1.top());
    s1.pop();
  }
  *this = s2;

}

#endif
