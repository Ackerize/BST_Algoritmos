//. Hacer una función en C++ que, dados dos BST, los fusione en uno solo

node* mergeTrees(node *root1, node *root2, int m, int n)  
{  
    int *arr1 = new int[m];  
    int i = 0;  
    storeInorder(root1, arr1, &i);  

    int *arr2 = new int[n];  
    int j = 0;  
    storeInorder(root2, arr2, &j);  

    int *mergedArr = merge(arr1, arr2, m, n);  
    
    return sortedArrayToBST (mergedArr, 0, m + n - 1);  
}  

int *merge(int arr1[], int arr2[], int m, int n)  
{  
    int *mergedArr = new int[m + n];  
    int i = 0, j = 0, k = 0;  
    while (i < m && j < n)  
    {  
        if (arr1[i] < arr2[j])  
        {  
            mergedArr[k] = arr1[i];  
            i++;  
        }  
        else
        {  
            mergedArr[k] = arr2[j];  
            j++;  
        }  
        k++;  
    }  
    while (i < m)  
    {  
        mergedArr[k] = arr1[i];  
        i++; k++;  
    }  
    while (j < n)  
    {  
        mergedArr[k] = arr2[j];  
        j++; k++;  
    }  
    return mergedArr;  
}  

node* sortedArrayToBST(int arr[], int start, int end)  
{  
    if (start > end)  
    return NULL;  
  
    int mid = (start + end)/2;  
    node *root = newNode(arr[mid]);  
    root->left = sortedArrayToBST(arr, start, mid-1);  
    root->right = sortedArrayToBST(arr, mid+1, end);  
    return root;  
}  
