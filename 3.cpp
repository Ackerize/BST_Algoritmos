//Hacer una función en C++ que, dado un arreglo de enteros, los traslade a un BST.
struct node* arrayToBST(int *A, int n, struct node* node){
    for(int i=0; i<n; i++){
        node = insert(node, A[i]);
    }
    return  node;
}
