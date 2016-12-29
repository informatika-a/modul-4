#ifndef ANDRA_H_INCLUDED
#define ANDRA_H_INCLUDED
#include <iostream>
using namespace std;

int n,i=1,j=1;
char bentuk[2];
string ulang;


void rekursifNya();

int input(){
    cout<<"masukkan nilai=";
    cin>>n;
    return n;
}

void pola(){
    cout<<"Bentuk Segitiga Atas = ";cin>>bentuk[0];
    cout<<"Bentuk Segitiga Bawah = ";cin>>bentuk[1];
}

void barisnya(){
    if(i<=n*2-1){
        j=1;
        rekursifNya();
        cout<<endl;
        i++;
        barisnya();
    }
    else{
        i=1;
    }
}
void rekursifNya(){
    if(j<=n*2-1){
        if(i==(n-j)+1 || j==i+n-1 || (i==n && j%2==1)){
                cout<<bentuk[0];}
        else if( i==(n-1+j) || j==n*3-1-i){
                cout<<bentuk[1];
            }
        else{
                cout<<" ";}
        j++;
        rekursifNya();
    }
    else{
        j=1;
    }
}
#endif // ANDRA_H_INCLUDED
