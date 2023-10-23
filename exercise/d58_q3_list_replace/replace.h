void replace(const T& x, list<T>& y) {
  //write your code here
  CP::list<T>::iterator it = begin();
  while(it != end()){
    if (*it == x){
      it = erase(it);
      for (auto &x : y){
        insert(it , x);
      }
    } else {
      it++;
    }
  }
}
