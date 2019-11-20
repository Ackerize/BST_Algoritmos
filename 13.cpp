//. Hacer una función en C++ que, dado un BST y un dato, encuentre el antecesor POST ORDER
del nodo que contiene dicho dato.
nodo que contiene dicho dato.

Node* postorderPredecessor(Node* root, Node* n) 
{ 
    // If right child exists, then it is postorder 
    // predecessor. 
    if (n->right) 
        return n->right; 
  
    // If right child does not exist, then 
    // travel up (using parent pointers) 
    // until we reach a node which is right 
    // child of its parent. 
    Node *curr = n, *parent = curr->parent; 
    while (parent != NULL && parent->left == curr) { 
        curr = curr->parent; 
        parent = parent->parent; 
    } 
  
    // If we reached root, then the given 
    // node has no postorder predecessor 
    if (parent == NULL) 
        return NULL; 
  
    return parent->left; 
} 
