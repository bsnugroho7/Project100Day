
// C++ program for linked list implementation of stack 
#include <bits/stdc++.h> 
using namespace std; 
  
// A structure to represent a stack 
class StackNode { 
public: 
    int data; 
    StackNode* next; 
}; 
  
StackNode* newNode(int data) 
{ 
    StackNode* stackNode = new StackNode(); 
    stackNode->data = data; 
    stackNode->next = NULL; 
    return stackNode; 
} 
  
int isEmpty(StackNode* root) 
{ 
    return !root; 
} 
  
void push(StackNode** root, int data) 
{ 
    StackNode* stackNode = newNode(data); 
    
    stackNode->next = *root; 
    // cout<<"Root 1 : "<<stackNode->next<<endl;
    *root = stackNode; 
    // cout<<"Root 2 : "<<root<<endl;
    cout << data << " pushed to stack\n";
} 
  
void pop(StackNode** root) 
{ 
    // if (isEmpty(*root)) 
    //     return INT_MIN; 
    StackNode* temp = *root; 
    // cout<<"*root : "<<*root<<endl;
    *root = (*root)->next; 
    // cout<<"*root 2 : "<<*root<<endl;
    int popped = temp->data; 
    free(temp); 
    cout<<"Pop Item : "<<popped<<endl;
    // return popped; 
} 
  
int peek(StackNode* root) 
{ 
    if (isEmpty(root)) 
        return INT_MIN; 
    return root->data; 
} 
  
int main() 
{ 
    StackNode* root = NULL; 
    // cout<<&root<<endl;
    push(&root, 10); 
    push(&root, 20); 
    push(&root, 30); 
  
    // cout << pop(&root) << " popped from stack\n"; 
    pop(&root);
  
    cout << "Top element is " << peek(root) << endl; 
  
    return 0; 
} 
  
// This is code is contributed by rathbhupendra 
