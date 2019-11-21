// Hacer una función en C++ que, dada una lista doblemente enlazada, cree un BST con los datos
// de la lista recorriéndola de 2 en 2.

Node* sortedListToBST(Node *head)  
{  
    int n = countNodes(head);  
    return sortedListToBSTRecur(&head, n);  
}  

Node* sortedListToBSTRecur(Node **head_ref, int n)  
{  
    if (n <= 0)  
        return NULL;  
    Node *left = sortedListToBSTRecur(head_ref, n/2);  
    Node *root = *head_ref;  
    root->prev = left;  
    *head_ref = (*head_ref)->next;  
    root->next = sortedListToBSTRecur(head_ref, n-n/2-1);  
    return root;  
}  

int countNodes(Node *head)  
{  
    int count = 0;  
    Node *temp = head;  
    while(temp)  
    {  
        temp = temp->next;  
        count++;  
    }  
    return count;  
}   
