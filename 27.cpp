//Hacer una función en C++ que, dado un BST y un entero N, encuentre el dato más pequeño en el BST que sea mayor o igual a N.

int findMinforN(Node* root, int N) 
{ 
    if (root->left == NULL && root->right == NULL && root->data < N) 
        return -1; 
    if ((root->data >= N && root->left == NULL) || (root->data >= N && root->left->data < N)) 
        return root->data; 
    if (root->data <= N) 
        return findMinforN(root->right, N); 
    else
        return findMinforN(root->left, N); 
} 
