//Hacer una función en C++ que, dado un BST y dos enteros A y B, verifique si A es ancestro de B en el BST.
bool bandera;
  
bool Ancestors(struct node *root, int target, int padre) 
{ 
  if (root == NULL) 
     return false; 
  if (root->data == target) 
     return true; 
  if ( Ancestors(root->left, target, padre) || 
       Ancestors(root->right, target, padre) ) 
  { 
    if(root->data == padre)
      bandera = true;
    return true;
  } 
  return false; 
} 
