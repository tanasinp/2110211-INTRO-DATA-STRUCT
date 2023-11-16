void shift(int k) {
	// TODO: Add your code here
	//first
	// if(mSize == 1)return;
	// if (k > 0){
	// 	for (int i = 0; i < k ;i++){
	// 		node* st = mHeader->next;
	// 		node* ed = mHeader->prev;
	// 		mHeader->next = st->next;
	// 		mHeader->next->prev = mHeader;
	// 		ed->next = st;
	// 		ed->next->prev = ed;
	// 		st->next = mHeader;
	// 		mHeader->prev = st;
	// 	}
	// }else {
	// 	for (int i = 0 ; i > k ; i--){
	// 		node* st = mHeader->next;
	// 		node* ed = mHeader->prev;
	// 		ed->prev->next = mHeader;
	// 		mHeader->prev = ed->prev;
	// 		mHeader->next = ed;
	// 		ed->prev = mHeader;
	// 		ed->next = st;
	// 		st->prev = ed;	
	// 	}
	// }

	//second
	int n;
	if (k < 0){
	  n = k;
	  while(n < 0){
	    n+=mSize;
	  }
	} else {
	  n = k%mSize;
	}
	node* pos = mHeader;
	if (n == 0) return;
	for (int i = 0 ; i < n ; i++){
		pos = pos->next;
	}
	node* st = mHeader->next;
	node* ed = mHeader->prev;

	st->prev = ed;
	ed->next = st;

	mHeader->next = pos->next;
	mHeader->next->prev = mHeader;

	pos->next = mHeader;
  	pos->next->prev = pos;
}

