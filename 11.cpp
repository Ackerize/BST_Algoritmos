//11. Hacer una función en C++ que, dado un BST y un dato, encuentre el antecesor IN ORDER del
//nodo que contiene dicho dato.

Node *inorderPredecessor(Node *root, int K){
  
    Node *predecessor   = NULL;
    Node *current       = root;
     
    if(!root)
        return NULL;
  
    while(current && current->value != K){
         /* Else take left turn and no need to update predecessor pointer */
        if(current->value >K){
            current= current->left;
        }
        /* If node value is less than the node which are looking for, then go to right sub tree
        Also when we move right, update the predecessor pointer to keep track of last right turn */
        else{
            predecessor = current;
            current = current->right;
        }
    }
    /*Once we reached at the node for which inorder predecessor is to be found,
    check if it has left sub tree, if yes then find the maximum in that right sub tree and return that node 
    Else last right turn taken node is already stored in predecessor pointer and will be returned*/
    if(current && current->left){
        predecessor = findMaximum(current->left);
    }
    return predecessor;
}
