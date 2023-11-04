void splitList(list<T>& list1, list<T>& list2) {
    // Add your code here
    size_t sz2 = mSize/2;
    size_t sz1 = mSize-sz2;
    int n = sz1;

    node *tmp = mHeader->next;
    while (n--){
        tmp = tmp->next;
    }


    list1.mHeader->prev->next = mHeader->next;
    mHeader->next->prev = list1.mHeader->prev;
    
    list1.mHeader->prev = tmp->prev;
    list1.mHeader->prev->next = list1.mHeader;

    list2.mHeader->prev->next = tmp;
    tmp->prev = list2.mHeader->prev;

    list2.mHeader->prev = mHeader->prev;
    list2.mHeader->prev->next = list2.mHeader;


    list1.mSize = sz1;
    list2.mSize = sz2;

    mHeader->next = mHeader;
    mHeader->prev = mHeader;
    mSize = 0;

}
