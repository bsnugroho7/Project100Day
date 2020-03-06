#include<iostream>
using namespace std;

int count=0;

struct Node{
    int data;
    Node *next;
};

class QueueLinked{
    private:
        Node *head=NULL, *tail=NULL;
    public:
        void newNode(int angka){
            Node *tmp=new Node;
            tmp->data=angka;
            tmp->next=NULL;
            count++;
            if(head==NULL){
                head=tmp;
                tail=tmp;
            }
            else{
                tail->next=tmp;
                tmp=tail->next;
            }
        }
        void remove(){
            head+=2;
            count--;
        }
        void display(){
            int cnt;
            for(int i=0;i<count;i++){
                cout<<head->data<<"  ";
                head+=2;
                cnt+=2;
            }
            head-=cnt;
        }
};

int main(){
    QueueLinked a;
    a.newNode(5);
    a.newNode(6);
    a.newNode(7);
    a.display();
}