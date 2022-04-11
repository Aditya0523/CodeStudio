// Since Inorder works by L-N-R . So once the key is found that means, 
// the right most in the left subtree is predecessor while the left most in the right subtree is successor.

BST* findMin(BST* root)
{
   while(root->left != NULL) 
   {
       root = root->left ;
   }
   return root ;
}

BST* findMax(BST* root)
{
   while(root->right != NULL) 
   {
       root = root->right ;
   }
   return root ;
}

void findPreSuc(BST* root, BST* &pre, BST* &suc, int t)
{
    BST* temp = root ;
    
// Searching for the key 
    while(temp->data != t)
    {
      if(temp->data > t)  
       {
            suc = temp ;
            temp = temp->left ;
       }
      if(temp->data < t)
       {
            pre = temp ;
            temp = temp->right ;
       }
    }
 // once the key is found   
    pre = findMax(temp->left) ; // max in the right subtree is predecessor
    suc = findMin(temp->right) ; // min in the left subtree is successor
}
