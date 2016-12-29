#include "andra.h"
int main()
{
    int n,i=1,j=1;
    char bentuk[2];
    string ulang;

    do{
    n=input(n);
    pola(bentuk);
    barisnya(n,i,j,bentuk);
    cout<<"Apakah anda ingin mengulang = ";cin>>ulang;
    }while(ulang=="ya");
}
