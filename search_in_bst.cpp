bool searchInBST(BinaryTreeNode<int> *root, int x) {
    // Write your code here.
	if(root == NULL)
		return false ;
	if(root->data == x)
		return true ;
	
	if( x < root->data )
		return searchInBST(root->left, x) ;
	if( x > root->data)
		return searchInBST(root->right, x) ;
}