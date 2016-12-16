#include "rumus.h"

using namespace std;

float r,t;
int pilih;

void input();
void menu();
void pilihan(int pilih);

int main()
{
    char lagi;
    do{
        system("CLS");
        input();
        do{
            system("CLS");
            cout<<"Jari-jari = "<<r<<endl;
            cout<<"Tingii    = "<<t<<endl;
            menu();
            cout<<"\nMasukan Pilihan Anda = ";
            cin>>pilih;
            system("CLS");
            cout<<"Jari-jari = "<<r<<endl;
            cout<<"Tingii    = "<<t<<endl<<endl;
            pilihan(pilih);
            cout<<endl;
            cout<<"\nAnda Ingin mencoba pilihan lain [y/t] ?";
            cin>>lagi;
        }while(lagi=='y');
        cout<<"\nAnda Ingin input jari-jari dan tinggi lagi [y/t] ?";
        cin>>lagi;
    }while(lagi=='y');

}

void input(){
    cout<<"Masukan nilai jari-jari = ";
    cin>>r;
    cout<<"Masukan nilai Tinggi    = ";
    cin>>t;
}

void menu(){
    cout<<endl;
    cout<<"1. Keliling Lingkaran\n";
    cout<<"2. Luas Lingkaran\n";
    cout<<"3. Luas Permukaan Bola\n";
    cout<<"4. Volume Bola\n";
    cout<<"5. Luas Permukaan Tabung\n";
    cout<<"6. Luas Selimut Tabung\n";
    cout<<"7. Volume Tabung\n";
    cout<<endl;
}

void pilihan(int pilih){
    switch(pilih){
    case 1:
        cout<<"Rumus = 2 * PHI * r "<<endl;
        cout<<"Keliling Lingkaran = "<<keliling(r);
        break;
    case 2:
        cout<<"Rumus = PHI * r * r "<<endl;
        cout<<"Luas Lingkaran = "<<luas(r);
        break;
    case 3:
        cout<<"Rumus = 4 * PHI * r *r "<<endl;
        cout<<"Luas Permukaan Bola = "<<permukaanbola(r);
        break;
    case 4:
        cout<<"Rumus = 4/3 * PHI * r * r * r "<<endl;
        cout<<"Volume Bola = "<<volumebola(r);
        break;
    case 5:
        cout<<"Rumus = (2 * PHI * r * r) + (2 * PHI * r * t)"<<endl;
        cout<<"Luas Permukaan Tabung = "<<permukaantabung(r, t);
        break;
    case 6:
        cout<<"Rumus = 2 * PHI * r * t "<<endl;
        cout<<"Luas Selimut Tabung = "<<selimuttabung(r, t);
        break;
    case 7:
        cout<<"Rumus = PHI * r * r * t "<<endl;
        cout<<"Volume Tabung = "<<volumetabung(r, t);
        break;
    default:
        cout<<"Pilihan Tidak tersedia\n";
        break;
    }
}
