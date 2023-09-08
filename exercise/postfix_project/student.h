#ifndef __STUDENT_H__
#define __STUDENT_H__
#include <vector>
#include <stack>

using namespace std;

int eval_postfix(vector<pair<int,int> > v) {
  //WRITE YOUR CODE HERE
  stack<int> s;
  for (auto x : v){
    if (x.first == 1){
      s.push(x.second);
    } else if (x.first == 0){
      int a = s.top();
      s.pop();
      int b = s.top();
      s.pop();
      int result;
      if (x.second == 0){
        result = b+a;
      } else if(x.second == 1){
        result = b-a;
      } else if (x.second == 2){
        result = b*a;
      } else if (x.second == 3){
        result = b/a;
      }
      s.push(result);
    }
  }
  return s.top();
  //DON"T FORGET TO RETURN THE RESULT
}

#endif
