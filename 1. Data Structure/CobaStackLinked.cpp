#include<iostream>
using namespace std;

struct node{
    int data;
    node *next;
};

class linkedstack{
    private:
        node *head=NULL;
        node *tail=NULL;
    public:
        void newnode(int angka){
            node *tmp;
            tmp->data=angka;
            if(head==NULL){
                head=tmp;
                tail=tmp;
            }
        }
        void push(){
            
        }
};
