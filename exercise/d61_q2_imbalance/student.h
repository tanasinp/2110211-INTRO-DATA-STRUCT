// Your code here
int getHeight(node* n){
    if (n == NULL) return -1;
    return 1 + std::max(getHeight(n->left) , getHeight(n->right));
}
int abs(int n){
    if (n < 0){
        return n*-1;
    }
    return n;
}
void compute(node* n , int& max , KeyT& ans){
    if(n == NULL)return;
    if(mSize == 1){
        ans = n->data.first;
        return;
    }
    node* nl = n->left;
    node* nr = n->right;

    int rank = abs(getHeight(nl) - getHeight(nr));
    if (rank > max){
        max = rank;
        ans = n->data.first;
    }
    if (rank == max){
        if(mLess(n->data.first,ans)){
            ans = n->data.first;
        }
    }

    compute(n->right,max,ans);
    compute(n->left,max,ans);
}


KeyT getValueOfMostImbalanceNode() {
    // Your code here
    KeyT ans;
    int max = 0;
    compute(mRoot,max,ans);
    return ans;
}
