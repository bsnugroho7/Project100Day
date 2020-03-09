#include<iostream>
using namespace std;

int fibo(int angka){
    if(angka==1)        return 0;
    else if (angka==2)  return 1;
    else                return fibo(angka-1)+fibo(angka-2);
}


int main(){
    int ke;
    cout<<"Masukkan Fibo ke-";cin>>ke;
    for(int i=1;i<=ke;i++){
        cout<<fibo(i)<<" ";
    }
}