#include <bits/stdc++.h> 
using namespace std; 

//MEMBUAT NODE SEBAGAI TIPE DATA
class node { 
    public: 
    int data; 
    node* left; 
    node* right; 
}; 

//FUNGSI MENGHITUNG TINGGI POHON
int maxDepth(node* node) { 
    //JIKA NODE TIDAK ADA MAKA LEVEL=0
    if (node == NULL)  return 0;

    else{ 
        int lDepth = maxDepth(node->left); 
        int rDepth = maxDepth(node->right); 

        if (lDepth > rDepth)    return(lDepth + 1); 
        else                    return(rDepth + 1); 
        } 
} 

//MEMBUAT NODE BARU YANG DIISI DENGAN DATA
node* newNode(int data) { 
    node* Node = new node(); 
    Node->data = data; 
    Node->left = NULL; 
    Node->right = NULL; 
    
    return(Node); 
} 
 
int main() { 
    //MENGISI BINARY TREE
    node *root = newNode(1); 
    root->left = newNode(2); 
    root->right = newNode(3); 
    root->left->left = newNode(4); 
    root->left->right = newNode(5); 
    
    cout << "Tinggi Pohon adalah : " << maxDepth(root); 
    return 0; 
} 