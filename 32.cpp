//Hacer una función en C++ que, dado un BST y un entero N, devuelva la profundidad del nodo que contenga el dato N. 

int distanceFromRoot(struct Node* root, int x) 
{ 
    if (root->key == x) 
        return 0; 
    else if (root->key > x) 
        return 1 + distanceFromRoot(root->left, x); 
    return 1 + distanceFromRoot(root->right, x); 
} 
