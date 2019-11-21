//. Hacer una función en C++ que, dado un BST y un entero N, devuelva una lista enlazada circular
// con todos los datos menores o iguales a N que estén en el BST.

//LC = Lista Circular

LC inorderTraversal(struct node *root, int N, LC lista){
    if (root != NULL){
        inorder(root->left, N, lista);
        if(root->key <= N)
            lista.agregarElemento(root->key);
        inorder(root->right, N, lista);
    }
}
