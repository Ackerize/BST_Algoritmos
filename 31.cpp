// Hacer una función en C++ que, dado un BST, verifique que esté completo. (Un árbol es
//completo, si en el penúltimo nivel todos los nodos tienen 2 hijos).

int countNodes(struct Node* root) 
{ 
    if (root == NULL) 
        return (0); 
    return (1 + countNodes(root->left) + countNodes(root->right)); 
} 

bool isComplete (struct Node* root, int index, int number_nodes) 
{ 
    if (root == NULL) 
        return (true); 
    if (index >= number_nodes) 
        return (false); 
    return (isComplete(root->left, 2*index + 1, number_nodes) && 
            isComplete(root->right, 2*index + 2, number_nodes)); 
} 
