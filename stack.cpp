#include <iostream>
using namespace std;

class stack{
    private:
        int *arr=new int;
        int count=0;
    public:
        void push(int masuk){
            *arr=masuk;
            arr++;
            count++;
        }
        void peek(){
            cout<<--(*arr);
        }
        void pop(){
            for(int i=0;i<count;i++) {
                --arr;
                cout<<*arr<<" ";
            }
        }
};

int main (){
int pilih;
int angka;
stack pertama;

do{
    cout<<"==========Masukkan Pilihan=========\n";
    cout<<"1. Push\n";
    cout<<"2. Pop\n";
    cout<<"3. Peek\n";
    cout<<"4. Cari\n";
    cout<<"0. Selesai\n";
    cout<<"pilihan : ";cin>>pilih;
    switch(pilih){
        case 1 :    cout<<"Push : ";cin>>angka;
                    pertama.push(angka);
                    break;
        case 2 :    cout<<"Pop Angka Anda adalah : \n";
                    pertama.pop();
                    break;
        case 3 :    cout<<"Peek Angka teratas : ";
                    pertama.peek();
    }
}
while (pilih!=0);
}
