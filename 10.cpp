//10. Hacer una función en C++ que, dado un BST y un dato, encuentre el sucesor POST ORDER del
//nodo que contiene dicho dato

Node* postorderSuccessor(Node* root, Node* n) 
{ 
    // Root has no successor in postorder 
    // traversal 
    if (n == root) 
        return NULL; 
  
    Node* parent = n->parent; 
    if (parent->right == NULL || parent->right == n) 
        return parent; 
    Node* curr = parent->right; 
    while (curr->left != NULL) 
        curr = curr->left; 
   
    return curr; 
} 
