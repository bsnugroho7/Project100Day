#include <iostream>
using namespace std;

int k=0,x=1;
void tree(int angka){
    if (angka>0){
		for(int i=0;i<angka;i++){
			cout<<"X";
			for( int j=0;j<k;j++)	cout<<"-";
        }
        if(k>=1){
        	k+=2*x;
        	x++;
		}
		else 	k++;
		cout<<endl;
		tree(angka/2);
	}
}

int main(){
    tree(16);
//    tree(8);
}