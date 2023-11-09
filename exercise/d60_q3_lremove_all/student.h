#ifndef __STUDENT_H_
#define __STUDENT_H_

template <typename T>
void CP::list<T>::remove_all(const T& value) {
  //write your code here
  node *tmp = mHeader->next;
  while (tmp != mHeader){
    if (tmp->data == value){
      node *n = tmp->next;
      tmp->prev->next = tmp->next;
      tmp->next->prev = tmp->prev;
      delete tmp;
      tmp = n;
      mSize--;
    } else {
      tmp = tmp->next;
    }
  }
}

#endif
