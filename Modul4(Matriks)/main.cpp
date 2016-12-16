#include <iostream>
#include <stdlib.h>
using namespace std;

int matriks[2][2];
int matriks1[2][2];

void input(){
for(int baris=0;baris<2;baris++){
        for(int kolom=0;kolom<2;kolom++){
        matriks[baris][kolom]=rand()%10;
        if(matriks[baris][kolom]==2 || matriks[baris][kolom]==3 ||
           matriks[baris][kolom]==5 || matriks[baris][kolom]==7){
            matriks[baris][kolom]=11;
           }

        matriks1[baris][kolom]=rand()%10;
        if(matriks1[baris][kolom]==2 || matriks1[baris][kolom]==3 ||
           matriks1[baris][kolom]==5 || matriks1[baris][kolom]==7){
            matriks1[baris][kolom]=11;
           }
        }
    }
}

void penjumalahan(int matrik [2][2],int matrik1 [2][2]){
    int hasil1 [2][2];
for(int baris = 0;baris<2;baris++){
    for(int kolom=0;kolom<2;kolom++){
    hasil1 [baris][kolom]=matrik[baris][kolom]+matrik1[baris][kolom];
    cout<<hasil1[baris][kolom]<<"\t";
    }
    cout<<endl;
    }

}
void pengurangan(int matrik [2][2],int matrik1 [2][2]){
    int hasil1 [2][2];
for(int baris = 0;baris<2;baris++){
    for(int kolom=0;kolom<2;kolom++){
    hasil1 [baris][kolom]=matrik[baris][kolom]-matrik1[baris][kolom];
    cout<<hasil1[baris][kolom]<<"\t";
    }
    cout<<endl;
    }

}
void perkalian(int matrik [2][2],int matrik1 [2][2]){
    int hasil1 [2][2];
for(int baris = 0;baris<2;baris++){
    for(int kolom=0;kolom<2;kolom++){
    hasil1 [baris][kolom]=matrik[baris][kolom]*matrik1[baris][kolom];
    cout<<hasil1[baris][kolom]<<"\t";
    }
    cout<<endl;
    }
}
int main()
{
    input();
    cout<<"matrik a"<<endl;
    for(int baris=0;baris<2;baris++){
        for(int kolom=0;kolom<2;kolom++){
        cout<<matriks[baris][kolom]<<"\t";
        }
        cout<<endl;
    }
    cout<<"matrik b"<<endl;
    for(int baris=0;baris<2;baris++){
        for(int kolom=0;kolom<2;kolom++){
        cout<<matriks1[baris][kolom]<<"\t";
        }
        cout<<endl;
    }
cout<<endl;
cout<<"hasil penjumlahan matrik"<<endl;
penjumalahan(matriks,matriks1);
cout<<endl;
cout<<"hasil pengurangan matrik"<<endl;
pengurangan(matriks,matriks1);
cout<<endl;
cout<<"hasil perkalian matrik"<<endl;
perkalian(matriks,matriks1);





}
