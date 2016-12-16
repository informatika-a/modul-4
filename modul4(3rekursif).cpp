#include <iostream>
#include <stdlib.h>
using namespace std;
//edited
int convert;
int convert1;
int input(){
    char angka[100], angka1[100];
    bool tes=true;
    input1:
    cout<<"Masukan Angka pertama= ";
    cin.getline(angka, 100);
    cout<<"Masukan Angka kedua= ";
    cin.getline(angka1, 100);
    for(int kounter=0; angka[kounter]!='\0'; kounter++){
        if(angka[kounter]>='0' && angka[kounter]<='9'){
            tes=true;
        }
        else if(angka1[kounter]>='0' && angka1[kounter]<='9'){
            tes=true;
        }
        else{
            tes=false;
            break;
        }
    }
    if(tes==true){
            convert=atoi(angka);
            convert1=atoi(angka1);
    }
    else{
        char ulang;
        salah:
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
        goto salah;
        break;
    }
    }
}

int tampil(int angka, int angka1){
    if (angka1>1) {cout<<angka<<"+"; tampil(angka, angka1-1);}
    else if(angka1<1) {return 0;}
    else {cout<< angka;}
}

int fakkal(int angka){
    if (angka>1) return angka*fakkal(angka-1);
    else if(angka<1) return 0;
    else return 1;
}

int kali(int angka, int angka1){
    if(angka1>1 && angka>1){
        return angka+kali(angka, angka1-1);
    }
    else if(angka<1) return 0;
    else return angka;
}

int main()
{
    input();
    tampil(convert, convert1);
    cout<<endl;
    cout<<"Hasil dari "<<convert<<"*"<<convert1<<" = "<<kali(convert, convert1);
    cout<<endl;
    cout<<"Faktorial Perkalian "<<convert<<" : ";
    cout<<fakkal(convert);
    cout<<endl;
    cout<<"Faktorial Perkalian "<<convert1<<" : ";
    cout<<fakkal(convert1);
    cout<<endl;
}
