#ifndef __STUDENT_H_
#define __STUDENT_H_

template <typename KeyT,
          typename MappedT,
          typename CompareT >
CP::map_bst<KeyT,MappedT,CompareT> CP::map_bst<KeyT,MappedT,CompareT>::split(KeyT val) {
  //your code here
  CP::map_bst<KeyT,MappedT,CompareT> result;
  node* p = NULL;
  node* now = mRoot;

  while (now != NULL){
    int cmp = compare(val, now->data.first);
    if (cmp == 0 || cmp == -1) {
      break;
    }
    p = now;
    now = now->right;
  }
  result.mRoot = now;
  if (p == NULL){
    node* tmp = mRoot->left;
    mRoot->left = NULL;
    mRoot = tmp;
  } else {
    if (p->left->data.first == now->data.first) {
      p->left = NULL;
    } else {
      p->right = NULL;
    }
  }
  return result;
}

#endif
