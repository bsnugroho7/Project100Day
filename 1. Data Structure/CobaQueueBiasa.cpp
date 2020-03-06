#include <iostream>
using namespace std;
#define MAX_SIZE 5

class Queue{
    private:
        int antri[MAX_SIZE],front=0,rear=-1,count=0;
    public:
        void insert(int angka){
            if(!isFull()){
                rear++;
                antri[rear]=angka;
                // cout<<antri[rear]<<"  ";
                count++;
            }
            else cout<<"Penuh Gan, Sorry\n";
        }
        void remove(){
            if(!isEmpty()){
                // for(int i=0;i<MAX_SIZE;i++){
                //     antri[i]=antri[i+1];
                //     cout<<endl<<"remove : "<<antri[i];
                // }
                front++;
                count--;
                // cout<<endl<<"Counter:"<<count;
            }
            else cout<<"Sorry Gan Kosong\n";
        }
        void peek(){
            if(!isEmpty())    cout<<antri[front];
            else            cout<<"Kosong Gan";
        }
        bool isEmpty(){
            if (count==0)   return true;
            else            return false;
        }
        bool isFull(){
            if (count==5)   return true;
            else            return false;
        }
};

int main(){
    Queue a;
    a.insert(5);
    a.insert(4);
    a.insert(3);
    // a.peek();
    a.remove();
    // a.peek();
    a.remove();
    a.remove();
    // a.peek();
    // a.remove();
    a.peek();
}