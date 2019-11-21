// Hacer una función en C++ que, dada una lista doblemente enlazada, cree un BST con los datos
// de la lista recorriéndola de 2 en 2. 

Node * DLLtoBST(Node *inicio, Node* root)  
{  
    Node *temp = inicio; 
    if(inicio == nullptr){
        return root
    }
    int cont = 0
    while(temp)  
    {  
        if(cont%2 == 0){
            root = insert(root, temp->dato);
            borrarNodoDLL(temp);
        }
        temp = temp->sig;
        cont++;
    }
    DLLtoBST(inicio, root);
}
