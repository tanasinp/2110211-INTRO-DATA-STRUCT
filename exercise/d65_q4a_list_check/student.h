#ifndef __STUDENT_H__
#define __STUDENT_H__


template <typename T>
bool CP::list<T>::check() {
  //your code here
  if(mHeader == NULL || mHeader->next == NULL || mHeader->prev == NULL) return false;
  iterator it = begin();
  for (int i = 0 ; i < mSize ; i++,it++){
    if (it.ptr->next == NULL || it.ptr->prev == NULL || it.ptr->next->prev != it.ptr || it.ptr->prev->next != it.ptr) return false;
  }
  return it.ptr == mHeader;
  
}


#endif
