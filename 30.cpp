//Hacer una función en C++ que, dado un BST y un entero N, encuentre el nodo con el dato más cercano a N

void maxDiffUtil(struct Node *ptr, int k, int &min_diff,int &min_diff_key) 
{ 
    if (ptr == NULL) 
        return ; 
    if (ptr->key == k) 
    { 
        min_diff_key = k; 
        return; 
    } 
    if (min_diff > abs(ptr->key - k)) 
    { 
        min_diff = abs(ptr->key - k); 
        min_diff_key = ptr->key; 
    } 
    if (k < ptr->key) 
        maxDiffUtil(ptr->left, k, min_diff, min_diff_key); 
    else
        maxDiffUtil(ptr->right, k, min_diff, min_diff_key); 
} 
  
int maxDiff(Node *root, int k) 
{ 
    int min_diff = INT_MAX, min_diff_key = -1; 
    maxDiffUtil(root, k, min_diff, min_diff_key); 
    return min_diff_key; 
} 
