#ifndef __STUDENT_H_
#define __STUDENT_H_


template <typename T>
void CP::stack<T>::multi_pop(size_t K) {
  //write your code here
  while(mSize != 0 && K != 0){
    pop();
    K--;
  }
}

template <typename T>
std::stack<T> CP::stack<T>::remove_top(size_t K) {
  //write your code here
  //
  //don't forget to return an std::stack
  std::vector<T> tmp;
  std::stack<T> result;
  while(mSize != 0 && K != 0){
    tmp.push_back(top());
    pop();
    K--;
  }
  for (int i = tmp.size()-1;i >= 0;i--){
    result.push(tmp[i]);
  }
  return result;

}

#endif
