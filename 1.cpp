//Auxiliares
bool estaVacio(struct node* T){
    return (T == NULL)?true:false;
}

bool esta(struct node* T, int n){
    if(estaVacio(T)) return false;
    if(T->key == n) return true;
    if(n <= T->key) return esta(T->left, n);
    else return esta(T->right, n);
}

//. Hacer una función en C++ que, dado un BST T y un entero N, borre todos los nodos cuyo dato sea igual a N
struct node* BSTBorrar(struct node* node, int N){
    if(esta(node, N)) return BSTBorrar(deleteNode(node, N), N);
    return node;
}
