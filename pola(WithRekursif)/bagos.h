#ifndef BAGOS_H_INCLUDED
#define BAGOS_H_INCLUDED

#include <iostream>
#include <stdlib.h>

using namespace std;
// POLA SILANG
void rekursifBarisSilang (int angka, char bentuk[2]);
//POLA N
void rekursifBarisN (int angka1,char bentuk1[3]);

int baris=1,kolom=1;
int baris1=1,kolom1=1;

// Pola Silang
void polaSilang (char bentuk[2],int angka){
cout <<"Angka yang dimasukan = "<<angka/2<<endl;
cout<<"Masukan Bentuk X Pertama: ";cin>>bentuk[1];
cout<<"Masukan Bentuk X Kedua: ";cin>>bentuk[0];
cout<<endl;
}
void barisSilang (int angka, char bentuk[2]){
    if (baris<=angka)
    {
        kolom=1;
        rekursifBarisSilang(angka,bentuk);        //Baris
        cout<<endl;
        baris++;
        barisSilang(angka,bentuk);
    }
    else{
        baris=1;
    }
}
void rekursifBarisSilang (int angka, char bentuk[2]){
    if (kolom<=angka){
        if(kolom==baris){
            cout<<bentuk[1]<<" ";
        }
        else if (kolom==angka-baris+1){             //Kolom
            cout<<bentuk[0]<<" ";
        }
        else{
            cout<<" ";
        }
        kolom++;
        rekursifBarisSilang(angka,bentuk);
    }
    else{
        kolom=1;
    }
}
//Pola N
void polaN(char bentuk1[3],int angka){
cout <<"Angka yang dimasukan  = "<<angka/3<<endl;
cout<<"Masukan Bentuk N Pertama: ";cin>>bentuk1[0];
cout<<"Masukan Bentuk N Kedua: ";cin>>bentuk1[1];
cout<<"Masukan Bentuk N Ketiga: ";cin>>bentuk1[2];
cout<<endl;
}

void barisN (int angka1, char bentuk1[3]){
    if (baris1<=angka1/3)
    {
        kolom1=1;
        rekursifBarisN(angka1,bentuk1);        //Baris
        cout<<endl;
        baris1++;
        barisN(angka1,bentuk1);
    }
    else{
        baris1=1;
    }
}
void rekursifBarisN (int angka1, char bentuk1[3]){
    if (kolom1<=angka1){
        if(kolom1==angka1/3-baris1+1){
        cout<<bentuk1[0];
        }
        else if(kolom1==angka1-baris1+1){
        cout<<bentuk1[2];
        }                                      //Kolom
        else if(kolom1==angka1/3+baris1){
        cout<<bentuk1[1];
        }
        else{
        cout<<" ";
        }
        kolom1++;
        rekursifBarisN(angka1,bentuk1);
    }
    else{
        kolom1=1;
    }
}
void pilihanMenu(int angka, int pilih, char bentuk[2],char bentuk1[3]){

    switch(pilih){
    case 1:
    system("CLS");
    angka=angka*2;
    polaSilang(bentuk,angka);
    barisSilang(angka,bentuk);
    break;
    case 2:
    system("CLS");
    angka=angka*3;
    polaN(bentuk1,angka);
    barisN(angka,bentuk1);
    break;
    default :
    cout<<"Pilihan Tidak ada";
    break;
  }

}

#endif // BAGOS_H_INCLUDED
