//. Hacer una función en C++ que, dado un BST, borre todas las hojas 
struct Node* leafDelete(struct Node* root) 
{ 
    if (root == NULL) 
        return NULL; 
    if (root->left == NULL && root->right == NULL) { 
        free(root); 
        return NULL; 
    } 
    root->left = leafDelete(root->left); 
    root->right = leafDelete(root->right); 
  
    return root; 
} 
