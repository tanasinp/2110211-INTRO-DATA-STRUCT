#ifndef __STUDENT_H__
#define __STUDENT_H__

#include <algorithm>
#include <vector>
#include "map_bst.h"

template <typename KeyT,typename MappedT, typename CompareT >
size_t CP::map_bst<KeyT,MappedT,CompareT>::process(node* n) {
  //write your code here
  if (n == NULL) return 0;
  return 1 + process(n->left) + process(n->right);
}

template <typename KeyT,typename MappedT, typename CompareT >
std::pair<KeyT,MappedT> CP::map_bst<KeyT,MappedT,CompareT>::subtree(map_bst<KeyT,MappedT,CompareT> &left, map_bst<KeyT,MappedT,CompareT> &right) {
  //write your code here
  if (mRoot == NULL){
    return std::pair<KeyT,MappedT>();
  }
  left.mSize = process(mRoot->left);
  right.mSize = process(mRoot->right);
  
  left.mRoot = mRoot->left;
  right.mRoot = mRoot->right;

  mRoot->left = NULL;
  mRoot->right = NULL;

  this->mSize = 1;

  return mRoot->data;
  
  
}

#endif

