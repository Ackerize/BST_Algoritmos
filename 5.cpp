// Hacer una función en C++ que, dado un arreglo de enteros que representa la secuencia IN
ORDER de un BST, construya dicho BST

// obtenemos el maximo valor del arreglo, para nuestra raiz.
int max (int arr[], int strt, int end)  
{  
    int i, max = arr[strt], maxind = strt;  
    for(i = strt + 1; i <= end; i++)  
    {  
        if(arr[i] > max)  
        {  
            max = arr[i];  
            maxind = i;  
        }  
    }  
    return maxind;  
}
/* Initial values of start and end  
should be 0 and len -1. */
node* buildTree (int inorder[], int start, int end)  
{  
    if (start > end)  
        return NULL;  
    int i = max (inorder, start, end);  
    node *root = newNode(inorder[i]);  
    if (start == end)  
        return root;  
    root->left = buildTree (inorder, start, i - 1);  
    root->right = buildTree (inorder, i + 1, end);  
    return root;  
}  
