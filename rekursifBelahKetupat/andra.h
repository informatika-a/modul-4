#ifndef ANDRA_H_INCLUDED
#define ANDRA_H_INCLUDED
#include <iostream>
using namespace std;

void rekursifNya(int n, int i, int j, char bentuk[2]);

int input(int n){
    cout<<"masukkan nilai=";
    cin>>n;
    return n;
}

void pola(char bentuk[2]){
    cout<<"Bentuk Segitiga Atas = ";cin>>bentuk[0];
    cout<<"Bentuk Segitiga Bawah = ";cin>>bentuk[1];
}

void barisnya(int n,int i,int j, char bentuk[2]){
    if(i<=n*2-1){
        j=1;
        rekursifNya(n,i,j,bentuk);
        cout<<endl;
        i++;
        barisnya(n,i,j,bentuk);
    }
    else{
        i=1;
    }
}
void rekursifNya(int n,int i,int j,char bentuk[2]){
    if(j<=n*2-1){
        if(i==(n-j)+1 || j==i+n-1 || (i==n && j%2==1)){
                cout<<bentuk[0];}
        else if( i==(n-1+j) || j==n*3-1-i){
                cout<<bentuk[1];
            }
        else{
                cout<<" ";}
        j++;
        rekursifNya(n,i,j,bentuk);
    }
    else{
        j=1;
    }
}
#endif // ANDRA_H_INCLUDED
