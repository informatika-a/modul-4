#include "sin_cos_tan.h"

int main()
{
    char ulang;
    int pilih;
    awal:
    cout<<"1. Ubah sudut ke nilai Trigonometri\n";
    cout<<"2. Masukan Nilai Trigonometri\n";
    cout<<"Masukan Pilihan Anda = ";
    cin>>pilih;
    if(pilih==2){
        convert_nilai();
        proses1(trigonometri1, trigonometri2);
    }
    else if(pilih==1){
        convert_sudut();
    }
    else{
        cout<<"Pilihan Tidak ada";
    }
    cout<<"Anda Ingin Mencoba yang lain = ";
    cin>>ulang;
    if(ulang=='y'){
        system("CLS");
        goto awal;
    }
}

/*  nilai_asin=asin(angka)*180/PHI;//ubah sin ke sudut
    nilai_acos=acos(angka)*180/PHI;//ubah cos ke sudut
    nilai_atan=atan(angka)*180/PHI;//ubah tan ke sudut
    nilai_sin=sin(sudut*PHI/180);
    nilai_cos=cos(sudut*PHI/180);
    nilai_tan=tan(sudut*PHI/180); */
