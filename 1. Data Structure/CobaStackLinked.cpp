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
            node *tmp=new node;
            tmp->data=angka;
            tmp->next=NULL;
            if(head==NULL){
                head=tmp;
                tail=tmp;
            }
            else{
                tail->next=tmp;
                tail=tail->next;
            }
            
        }
        void push(int number){
            newnode(number);
        }

        void pop(){
            node *tmp;
            int tempor,count;
            int *ptempor=new int;
            tmp=head;
            while(tmp!=NULL){
                tempor=tmp->data;
                ptempor=&tempor;
                ptempor++;
                count++;
                tmp=tmp->next;
            }
            for (int i=0;i<count;i++){
                cout<<*(--ptempor)<<"-";
            }
        }   
};

int main (){
    linkedstack a;
    a.push(5);
    a.push(6);
    a.push(7);
    a.pop();
}
