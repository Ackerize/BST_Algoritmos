//. Hacer una función en C++ que haga el proceso opuesto del ejercicio anterior

void BSTToMinHeap(Node *root, vector<int> arr, int *i) 
{ 
    if (root == NULL) 
        return; 
  
    root->data = arr[++*i]; 
  
    BSTToMinHeap(root->left, arr, i); 
  
    BSTToMinHeap(root->right, arr, i); 
} 
  
void convertToMinHeapUtil(Node *root) 
{ 
 
    vector<int> arr; 
    int i = -1; 

    inorderTraversal(root, arr); 

    BSTToMinHeap(root, arr, &i); 
}
