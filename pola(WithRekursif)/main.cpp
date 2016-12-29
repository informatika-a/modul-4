#include "bagos.h"

int main()
{
  int angka,pilih;
  char bentuk[2],bentuk1[3];
  string ulang;
  do{
  cout<<"Masukan banyak Angka: ";cin>>angka;
  cout<<"\n\t\t-Menu-\n";
  cout<<"\n1. Pola X \n2. Pola N\n\n";
  cout<<"Pilihan Pola Anda = ";cin>>pilih;
  pilihanMenu(angka,pilih,bentuk,bentuk1);
  cout<<"\nApakah anda ingin mengulang program = ";cin>>ulang;
  }while(ulang=="ya");

}
