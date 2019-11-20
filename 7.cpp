// Hacer una función en C++ que, dado un arreglo de enteros que representa la secuencia POST
ORDER de un BST, construya dicho BST.

struct node* constructTreeUtil(int post[], int* postIndex, 
                               int key, int min, int max,  
                               int size) 
{ 
    if (*postIndex < 0) 
        return NULL; 
  
    struct node* root = NULL; 
    if (key > min && key < max) 
    { 
        root = newNode(key); 
        *postIndex = *postIndex - 1; 
  
        if (*postIndex >= 0) 
        { 
  
        root->right = constructTreeUtil(post, postIndex,  
                                        post[*postIndex], 
                                        key, max, size ); 
                                        
        root->left = constructTreeUtil(post, postIndex, 
                                       post[*postIndex], 
                                       min, key, size ); 
        } 
    } 
    return root; 
}
struct node *constructTree (int post[],  
                            int size) 
{ 
    int postIndex = size-1; 
    return constructTreeUtil(post, &postIndex,  
                             post[postIndex], 
                             INT_MIN, INT_MAX, size); 
} 
