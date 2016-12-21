#ifndef SIN_COS_TAN_H_INCLUDED
#define SIN_COS_TAN_H_INCLUDED
#include <iostream>
#include <stdlib.h>
#include <cmath>
#include <string.h>

using namespace std;
struct trigonometri{
    float sinA;
    float cosA;
    float tanA;
};
const float PHI=3.141;
float angka, sudut0, sudut1, hasil ;
trigonometri sudut;
char trigonometri1[10], trigonometri2[10], setawal[10];

void convert_nilai(){
    cout<<"Tipe Trigonometri Pertama = ";
    cin>>trigonometri1;
    cout<<"Ubah Ke = ";
    cin>>trigonometri2;
}

float convert_sudut(){
    cout<<"Masukan Sudut = ";
    cin>>sudut0;
    sudut1=sudut0;
    if(sudut0>90 && sudut0<=180){
        cout<<"\nBerada di Kuadran II"<<endl;
        sudut1=sudut0-90;
        sudut.cosA=-1*cos(sudut1*PHI/180);
        sudut.sinA=sin(sudut1*PHI/180);
        sudut.tanA=-1*tan(sudut1*PHI/180);
    }
    else if(sudut0>180 && sudut0<=270){
        cout<<"\nBerada di Kuadran III"<<endl;
        sudut1=sudut0-180;
        sudut.cosA=-1*cos(sudut1*PHI/180);
        sudut.sinA=-1*sin(sudut1*PHI/180);
        sudut.tanA=tan(sudut1*PHI/180);
    }
    else if(sudut0>270 && sudut0<=360){
        cout<<"\nBerada di Kuadran IV"<<endl;
        sudut1=sudut0-270;
        sudut.cosA=cos(sudut1*PHI/180);
        sudut.sinA=-1*sin(sudut1*PHI/180);
        sudut.tanA=-1*tan(sudut1*PHI/180);
    }
    else if(sudut0>=0 && sudut0<=90){
        cout<<"\nBerada di Kuadran I"<<endl;
        sudut1=sudut0;
        sudut.cosA=cos(sudut1*PHI/180);
        sudut.sinA=sin(sudut1*PHI/180);
        sudut.tanA=tan(sudut1*PHI/180);
    }
    else{
        cout<<"Sudut Maksimal 360 derajat"<<endl;
    }
    if(sudut0<=360){
    cout<<"Nilai Cos dari sudut "<<sudut0<<" = "<<sudut.cosA<<endl;
    cout<<"Nilai Sin dari sudut "<<sudut0<<" = "<<sudut.sinA<<endl;
    cout<<"Nilai Tan dari sudut "<<sudut0<<" = "<<sudut.tanA<<endl<<endl;
    }
}
void inputnilai(){
    cout<<"Masukan Nilai dari "<<trigonometri1<<" = ";
    cin>>angka;
}

float cos_to_sin(float angka){
    return sin((acos(angka)*180/PHI)*PHI/180);
}
float cos_to_tan(float angka){
    return tan((acos(angka)*180/PHI)*PHI/180);
}
float sin_to_cos(float angka){
    return cos((asin(angka)*180/PHI)*PHI/180);
}
float sin_to_tan(float angka){
    return tan((asin(angka)*180/PHI)*PHI/180);
}
float tan_to_sin(float angka){
    return sin((atan(angka)*180/PHI)*PHI/180);
}
float tan_to_cos(float angka){
    return cos((atan(angka)*180/PHI)*PHI/180);
}

void cos_sin(float angka, float hasil){
    if(hasil<0 && angka<0){
        cout<<"\nberada di kuadran Kuadran III"<<endl;
    }
    else if(hasil<0 && angka>0){
        cout<<"\nberada di Kuadran IV"<<endl;
    }
    else if(hasil>0 && angka<0){
        cout<<"\nberada di Kuadran II"<<endl;
    }
    else{
        cout<<"\nberada di Kudran I"<<endl;
    }
}

void cos_tan(float angka, float hasil){
    if(hasil<0 && angka<0){
        cout<<"\nberada di kuadran Kuadran II"<<endl;
    }
    else if(hasil<0 && angka>0){
        cout<<"\nberada di Kuadran IV"<<endl;
    }
    else if(hasil>0 && angka<0){
        cout<<"\nberada di Kuadran III"<<endl;
    }
    else{
        cout<<"\nberada di Kudran I"<<endl;
    }
}
void sin_cos(float angka, float hasil){
    if(hasil<0 && angka<0){
        cout<<"\nberada di kuadran Kuadran III"<<endl;
    }
    else if(hasil<0 && angka>0){
        cout<<"\nberada di Kuadran II"<<endl;
    }
    else if(hasil>0 && angka<0){
        cout<<"\nberada di Kuadran IV"<<endl;
    }
    else{
        cout<<"\nberada di Kudran I"<<endl;
    }
}
void sin_tan(float angka, float hasil){
    if(hasil<0 && angka<0){
        cout<<"\nberada di kuadran Kuadran IV"<<endl;
    }
    else if(hasil<0 && angka>0){
        cout<<"\nberada di Kuadran II"<<endl;
    }
    else if(hasil>0 && angka<0){
        cout<<"\nberada di Kuadran III"<<endl;
    }
    else{
        cout<<"\nberada di Kudran I"<<endl;
    }
}

void tan_sin(float angka, float hasil){
    if(hasil<0 && angka<0){
        cout<<"\nberada di kuadran Kuadran IV"<<endl;
    }
    else if(hasil<0 && angka>0){
        cout<<"\nberada di Kuadran III"<<endl;
    }
    else if(hasil>0 && angka<0){
        cout<<"\nberada di Kuadran II"<<endl;
    }
    else{
        cout<<"\nberada di Kudran I"<<endl;
    }
}

void tan_cos(float angka, float hasil){
    if(hasil<0 && angka<0){
        cout<<"\nberada di kuadran Kuadran II"<<endl;
    }
    else if(hasil<0 && angka>0){
        cout<<"\nberada di Kuadran III"<<endl;
    }
    else if(hasil>0 && angka<0){
        cout<<"\nberada di Kuadran IV"<<endl;
    }
    else{
        cout<<"\nberada di Kudran I"<<endl;
    }
}

void proses1(char trigonometri1[10], char trigonometri2[10]){
        if(strcmp(trigonometri1, trigonometri2)==0){
        cout<<"trigonometri tidak boleh sama"<<endl;
    }
    else if(strcmp(trigonometri1, "cos")==0){
        if(strcmp(trigonometri2, "sin")==0){
            inputnilai();
            hasil=cos_to_sin(angka);//cos ke sin
            cout<<"Hasil dari "<<trigonometri1<<" ke "<<trigonometri2<<" = "<<hasil;
            cos_sin(angka, hasil);
        }
        else if(strcmp(trigonometri2, "tan")==0){
            inputnilai();
            hasil=cos_to_sin(angka);//cos ke tan
            cout<<"Hasil dari "<<trigonometri1<<" ke "<<trigonometri2<<" = "<<hasil;
            cos_tan(angka, hasil);
        }
        else{
            cout<<"Harus sin atau tan"<<endl;
        }
    }
    else if(strcmp(trigonometri1, "sin")==0){
        if(strcmp(trigonometri2, "cos")==0){
            inputnilai();
            hasil=sin_to_cos(angka);//sin ke cos
            cout<<"Hasil dari "<<trigonometri1<<" ke "<<trigonometri2<<" = "<<hasil;
            sin_cos(angka, hasil);
        }
        else if(strcmp(trigonometri2, "tan")==0){
            inputnilai();
            hasil=sin_to_tan(angka);//sin ke tan
            cout<<"Hasil dari "<<trigonometri1<<" ke "<<trigonometri2<<" = "<<hasil;
            sin_tan(angka, hasil);
        }
        else{
            cout<<"Harus cos atau tan"<<endl;
        }
    }
    else if(strcmp(trigonometri1, "tan")==0){
        if(strcmp(trigonometri2, "sin")==0){
            inputnilai();
            hasil=tan_to_sin(angka);//tan ke sin
            cout<<"Hasil dari "<<trigonometri1<<" ke "<<trigonometri2<<" = "<<hasil;
            tan_sin(angka, hasil);
        }
        else if(strcmp(trigonometri2, "cos")==0){
            inputnilai();
            hasil=tan_to_cos(angka);//tan ke cos
            cout<<"Hasil dari "<<trigonometri1<<" ke "<<trigonometri2<<" = "<<hasil;
            tan_cos(angka, hasil);
        }
        else{
            cout<<"Harus sin atau cos"<<endl;
        }
    }

}

#endif // SIN_COS_TAN_H_INCLUDED
