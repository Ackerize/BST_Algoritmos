//. Hacer una función en C++ que, dado un BST y un entero N, encuentre el dato más grande en el BST que sea menor o igual a N.


int findMaxforN(Node* root, int N) 
{ 
    if (root == NULL) 
        return -1; 
    if (root->key == N) 
        return N; 
    else if (root->key < N) { 
        int k = findMaxforN(root->right, N); 
        if (k == -1) 
            return root->key; 
        else
            return k; 
    } 
    else if (root->key > N)  
        return findMaxforN(root->left, N);     
} 
