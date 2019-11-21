//. Hacer una función en C++ que, dado un BST y un entero N, encuentre el dato más grande en el BST que sea menor o igual a N.


int findMaxforN(Node* root, int N) 
{ 
    // Base cases 
    if (root == NULL) 
        return -1; 
    if (root->key == N) 
        return N; 
  
    // If root's value is smaller, try in rght 
    // subtree 
    else if (root->key < N) { 
        int k = findMaxforN(root->right, N); 
        if (k == -1) 
            return root->key; 
        else
            return k; 
    } 
  
    // If root's key is greater, return value 
    // from left subtree. 
    else if (root->key > N)  
        return findMaxforN(root->left, N);     
} 
