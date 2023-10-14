#ifndef __STUDENT_H_
#define __STUDENT_H_

#include <stdio.h>
#include "priority_queue.h"
#include <iostream>

template <typename T,typename Comp >
int CP::priority_queue<T,Comp>::height() const {
  //write your code here
  if (mSize == 0) return -1;
  if (mSize == 1) return 0;
  int sum = 0;
  int n = 1;
  int h = 0;
  while (sum < mSize){
    sum += n;
    n *= 2;
    h++;
  }
  return --h;

}

#endif

