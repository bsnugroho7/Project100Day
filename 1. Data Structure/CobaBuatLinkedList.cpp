#include<iostream>
using namespace std;

struct node{
    int data;
    node *next;
};

class linked{
    private:
        node *head;
        node *tail;
    public:
        linked(){
            head = NULL;
            tail = NULL;
        }
        void add_link(int angka){
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
        void cetak(){
                node *tmp;
                tmp=head;
                while(tmp!=NULL){
                    cout<<tmp->data;
                    tmp=tmp->next;
                    // head->next=tmp;
                }  
        }

};

int main (){
    linked a;
    a.add_link(5);
    a.add_link(6);
    a.add_link(7);
    a.cetak();
return 0;
}