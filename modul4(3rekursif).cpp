#include <iostream>
#include <stdlib.h>
using namespace std;

int input(){
    char angka[100];
    int convert;
    bool tes=true;
    input1:
    cout<<"Masukan Angka = ";
    cin.getline(angka, 100);
    for(int kounter=0; angka[kounter]!='\0'; kounter++){
        if(angka[kounter]>='0' && angka[kounter]<='9'){
            tes=true;
        }
    }
    if(tes==false){
            convert=atoi(angka);
            return convert;
    }
    else{
        char ulang;
        cout<<"Input harus angka\n";
        cout<<"input Lagi [y/t]? \n";
        cin>>ulang;
        cin.ignore();
        switch(ulang){
    case 'y':
        system("CLS");
        goto input1;
        break;
    case 'n':
        return 0;
    default:
        cout<<"input salah";
        break;
    }
    }
}

int fakjum(int angka){
    if (angka>1) return angka+fakjum(angka-1);
    else if(angka<1) return 0;
    else return 1;
}

int fakkal(int angka){
    if (angka>1) return angka*fakjum(angka-1);
    else if(angka<1) return 0;
    else return 1;
}

int tampilbil(int angka){
    if(angka>=1){
        cout<<angka<<" ";
        angka=angka-tampilbil(angka-1);
    }
    else if(angka<1) return 0;
    else return 1;
}

int main()
{
    int angka;
    angka=input();
    cout<<"Faktorial Perkalian : ";
    cout<<fakkal(angka);
    cout<<endl;
    cout<<"Faktorial Penjumlahan : ";
    cout<<fakjum(angka);
    cout<<endl;
    cout<<"Output Dari "<<angka<<" sampai 0 : ";
    cout<<tampilbil(angka);
    cout<<endl;
}
