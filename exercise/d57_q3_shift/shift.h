void shift(int k) {
	// TODO: Add your code here
	k %= mSize;
	node *pos = mHeader;
	if (k == 0) return;
	if (k<0){
		k = (k+mSize) % mSize;
	}
	for (int i = 0 ; i < k ; i++){
		pos = pos->next;
	}
	node *st = mHeader->next;
	node *ed = mHeader->prev;

	st->prev = ed;
	ed->next = st;

	mHeader->next = pos->next;
	mHeader->next->prev = mHeader;

	pos->next = mHeader;
	mHeader->prev = pos;

}

