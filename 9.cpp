\\9. Hacer una función en C++ que, dado un BST y un dato, encuentre el sucesor PRE ORDER del
nodo que contiene dicho dato.

Node* preorderSuccessor(Node* root, Node* n) 
{ 
    if (n->left) 
        return n->left; 
  
    Node *curr = n, *parent = curr->parent; 
    while (parent != NULL && parent->right == curr) { 
        curr = curr->parent; 
        parent = parent->parent; 
    } 
  
    if (parent == NULL) 
        return NULL; 
    return parent->right; 
} 
