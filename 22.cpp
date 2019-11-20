//. Hacer una función en C++ que haga el proceso opuesto del ejercicio anterior

void BSTToMinHeap(Node *root, vector<int> arr, int *i) 
{ 
    if (root == NULL) 
        return; 
  
    // first copy data at index 'i' of 'arr' to 
    // the node 
    root->data = arr[++*i]; 
  
    // then recur on left subtree 
    BSTToMinHeap(root->left, arr, i); 
  
    // now recur on right subtree 
    BSTToMinHeap(root->right, arr, i); 
} 
  
void convertToMinHeapUtil(Node *root) 
{ 
    // vector to store the data of all the 
    // nodes of the BST 
    vector<int> arr; 
    int i = -1; 
  
    // inorder traversal to populate 'arr' 
    inorderTraversal(root, arr); 
  
    // BST to MIN HEAP conversion 
    BSTToMinHeap(root, arr, &i); 
}
