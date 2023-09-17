#ifndef __STUDENT_H_
#define __STUDENT_H_


template <typename T>
void CP::vector<T>::erase_many(const std::vector<int> &pos) {
  //write your code here
  vector<T> result;
  int k = 0;
  for (auto it = begin();it!= end();it++){
    if (it - begin() == pos[k++]){
      continue;
    } else {
      result.push_back(*it);
    }
  } 
  *this = result;
}
#endif
