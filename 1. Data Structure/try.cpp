#include<iostream>
using namespace std;

int main(){
    char *saya;
    cin>>saya;
    for(int i =0;i<4;i++)   cout<<*(saya+i);
}