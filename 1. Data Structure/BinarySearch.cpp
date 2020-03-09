#include<iostream>
using namespace std;

int BinSearch(int array[],int awal,int akhir,int cari){
    int mid=akhir-awal/2;

    if (array[mid]==cari)   return mid;
    if (cari>array[mid]){
        return BinSearch(array,mid+1,akhir,cari);
    }
    if (cari<array[mid]){
        return BinSearch(array,awal,mid-1,cari);
    }
}

int main(){
    int arr[]={1,2,3,4,5,6,7,8};
    int sz=sizeof(arr)/sizeof(arr[0]);
    int num=3;
    int src=BinSearch(arr,0,sz,num);
    cout<<"Maka ada di index ke : "<<src;
}