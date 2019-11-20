//Hacer una función en C++ que, dado un BST y un dato, encuentre el sucesor IN ORDER del
nodo que contiene dicho dato.

struct node * inOrderSuccessor(struct node *root, struct node *n) 
{ 
    // step 1 of the above algorithm 
    if( n->right != NULL ) 
        return minValue(n->right); 
  
    struct node *succ = NULL; 
  
    // Start from root and search for successor down the tree 
    while (root != NULL) 
    { 
        if (n->data < root->data) 
        { 
            succ = root; 
            root = root->left; 
        } 
        else if (n->data > root->data) 
            root = root->right; 
        else
           break; 
    } 
  
    return succ; 
} 
