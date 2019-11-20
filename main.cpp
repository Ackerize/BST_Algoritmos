#include<stdio.h>
#include<stdlib.h>

using namespace std;

struct node{
    int key;
    struct node *left, *right;
};

struct node *newNode(int item){
    struct node *temp = new node;
    temp->key = item;
    temp->left = temp->right = NULL;
    return temp;
}

void inorder(struct node *root){
    if (root != NULL){
        inorder(root->left);
        printf("%d ", root->key);
        inorder(root->right);
    }
}

struct node* insert(struct node* node, int key){
    if (node == NULL) return newNode(key);
    if (key < node->key)
        node->left = insert(node->left, key);
    else
        node->right = insert(node->right, key);
    return node;
}


struct node * minValueNode(struct node* node){
    struct node* current = node;
    while (current && current->left != NULL)
        current = current->left;
    return current;
}

struct node * maxValueNode(struct node* node){
    struct node* current = node;
    while (current && current->right != NULL)
        current = current->right;
    return current;
}

struct node* padre(struct node* root, int valueNode1, int valueNode2){

    if(root == NULL) return NULL;

    if((root->key>valueNode1) && (root->key>valueNode2))
        return padre(root->left, valueNode1, valueNode2);

    if((root->key<valueNode1) && (root->key<valueNode2))
        return padre(root->right, valueNode1, valueNode2);

    return root;
}


struct node* deleteNode(struct node* root, int key){
    if (root == NULL) return root;

    if (key < root->key)
        root->left = deleteNode(root->left, key);

    else if (key > root->key)
        root->right = deleteNode(root->right, key);

    // if key is same as root's key, then This is the node to be deleted

    else{

        if (root->left == NULL)
        {
            struct node *temp = root->right;
            free(root);
            return temp;
        }
        else if (root->right == NULL)
        {
            struct node *temp = root->left;
            free(root);
            return temp;
        }

        struct node* temp = minValueNode(root->right);
        root->key = temp->key;
        root->right = deleteNode(root->right, temp->key);
    }
    return root;
}



  
int main(){

/* Let us create following BST
            8
        /       \
    3              10
 /      \             \
1       6             14
    /       \        /
   4         7      13
*/

    struct node *root = NULL;
    root = insert(root, 8);
    root = insert(root, 3);
    root = insert(root, 10);
    root = insert(root, 1);
    root = insert(root, 6);
    root = insert(root, 4);
    root = insert(root, 7);
    root = insert(root, 14);
    root = insert(root, 13);

/*    struct node *secondT = NULL;
    secondT = insert(secondT, 8);
    secondT = insert(secondT, 3);
    secondT = insert(secondT, 10);
    secondT = insert(secondT, 1);
    secondT = insert(secondT, 6);
    secondT = insert(secondT, 4);
    secondT = insert(secondT, 7);
    secondT = insert(secondT, 14);
    secondT = insert(secondT, 11);
    if(compareTrees(root, secondT))
        printf("%s", "Los arboles son iguales");
    else
        printf("%s", "Los arboles NO son iguales");
  
*/


    return 0;
}
