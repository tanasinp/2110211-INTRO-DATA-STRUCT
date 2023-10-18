#ifndef __STUDENT_H_
#define __STUDENT_H_

using namespace std;

template <typename T,typename Comp>
size_t CP::priority_queue<T,Comp>::get_rank(size_t pos) const {
  //write your code here
  // CP::priority_queue<T,Comp> tmp(*this);
  // size_t n = 0;
  // while (!tmp.empty()){
  //   if (tmp.top() == mData[pos]){
  //     break;
  //   }
  //   tmp.pop();
  //   n++;
  // }
  // return n;
  size_t n = 0;
  for (int i=0 ;i < mSize ; i++){
    if (mLess(mData[pos],mData[i])) n++;
  }
  return n;

}

#endif
