//14. Hacer una función en C++ que, dado un BST y dos enteros A y B, borre del BST todos los nodos
//que contengan datos en el rango [A, B].

// A Utility function to find leftMost node 
BSTnode* leftMost(BSTnode* root) 
{ 
    if (!root) 
        return NULL; 
    while (root->left) 
        root = root->left; 
    return root; 
} 
  
// A Utility function to delete the give node 
BSTnode* deleteNode(BSTnode* root) 
{ 
    // node with only one chile or no child 
    if (!root->left) { 
        BSTnode* child = root->right; 
        root = NULL; 
        return child; 
    } 
    else if (!root->right) { 
        BSTnode* child = root->left; 
        root = NULL; 
        return child; 
    } 
  
    // node with two children: get inorder successor 
    // in the right subtree 
    BSTnode* next = leftMost(root->right); 
  
    // copy the inorder successor's content to this node 
    root->data = next->data; 
  
    // delete the inorder successor 
    root->right = deleteNode(root->right); 
  
    return root; 
} 
  
// function to find node in given range and delete 
// it in preorder manner 
BSTnode* removeRange(BSTnode* node, int low, int high) 
{ 
  
    // Base case 
    if (!node) 
        return NULL; 
  
    // First fix the left and right subtrees of node 
    node->left = removeRange(node->left, low, high); 
    node->right = removeRange(node->right, low, high); 
  
    // Now fix the node. 
    // if given node is in Range then delete it 
    if (node->data >= low && node->data <= high) 
        return deleteNode(node); 
  
    // Root is out of range 
    return node; 
} 
