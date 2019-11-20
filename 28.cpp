//. Hacer una función en C++ que, dado un BST y dos datos, encuentre la distancia entre los nodos que contengan los dos datos dados.

int distanceFromRoot(struct Node* root, int x) 
{ 
    if (root->key == x) 
        return 0; 
    else if (root->key > x) 
        return 1 + distanceFromRoot(root->left, x); 
    return 1 + distanceFromRoot(root->right, x); 
} 
  
int distanceBetween2(struct Node* root, int a, int b) 
{ 
    if (!root) 
        return 0; 
  
    if (root->key > a && root->key > b) 
        return distanceBetween2(root->left, a, b); 
  
    if (root->key < a && root->key < b) // same path 
        return distanceBetween2(root->right, a, b); 
  
    if (root->key >= a && root->key <= b) 
        return distanceFromRoot(root, a) +  
               distanceFromRoot(root, b); 
} 

int findDistWrapper(Node *root, int a, int b) 
{ 
   if (a > b) 
     swap(a, b); 
   return distanceBetween2(root, a, b);    
} 
