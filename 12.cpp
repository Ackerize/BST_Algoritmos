Node* preorderPredecessor(Node* root, Node* n) 
{ 
    // Root has no predecessor in preorder 
    // traversal 
    if (n == root) 
        return NULL; 
  
    // If given node is left child of its 
    // parent or parent's left is empty, then  
    // parent is Preorder Predecessor. 
    Node* parent = n->parent; 
    if (parent->left == NULL || parent->left == n) 
        return parent; 
  
    // In all other cases, find the rightmost  
    // child in left substree of parent. 
    Node* curr = parent->left; 
    while (curr->right != NULL) 
        curr = curr->right; 
  
    return curr; 
} 
