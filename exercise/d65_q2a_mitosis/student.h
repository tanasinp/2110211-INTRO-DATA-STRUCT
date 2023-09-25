#ifndef __STACK_STUDENT_H__
#define __STACK_STUDENT_H__
#include "stack.h"

template <typename T>
void CP::stack<T>::mitosis(int a, int b)
{
    T *arr = new T[ mSize+b-a+1 ]();
    int k=0;
    for (int i = 0; i<mSize ;i++,k++){
        if ((mSize-1-b) <= i && i <= (mSize-1-a)){

            arr[k]=mData[i];
            k++;
            arr[k]=mData[i];

        } else {
            arr[k] = mData[i];
        }

    }

    delete [] mData;
    mData = arr; 
    mSize = k;
    

    
}

#endif