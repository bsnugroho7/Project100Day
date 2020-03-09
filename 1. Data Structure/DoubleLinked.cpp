#include<iostream>
using namespace std;

struct Node{
    int data;
    Node *Next=NULL,*Prev=NULL;

};

class DLink{
    private:
        Node *head=NULL,*tail=NULL;
    public:
        void newLink(int angka){
            Node *tmp=new Node;
            tmp->data=angka;
            if(head==NULL){
                head=tmp;
                tail=tmp;
            }
            else{
                Node *sementara;
                sementara=tail;
                tail->Next=tmp;
                tail=tail->Next;
                tail->Prev=sementara;
            }
        }
        void display(){
            Node *temp;
            temp=head;
            while(temp!=NULL){
                cout<<temp->data<<"  ";
                temp=temp->Next;
            }
        }
        void displayR(){
            Node *temp;
            temp=tail;
            while(temp!=NULL){
                cout<<temp->data<<"  ";
                temp=temp->Prev;
            }
        }
};

int main(){
    DLink a;
    a.newLink(5);
    a.newLink(6);
    a.newLink(7);
    a.display();
    cout<<endl;
    a.displayR();
}