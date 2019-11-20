//Hacer una función en C++ que, dados 2 BST, verifique si son iguales.

int compareTrees(struct node *T1, struct node *T2){
    if (T1 != NULL && T2 != NULL && T1->key == T2->key)
        return compareTrees(T1->left, T2->left) && compareTrees(T1->right, T2->right);
    else
        return T1 == T2;
}
