#include <iostream>
#include <conio.h>
using namespace std;
int tampil=1;
int fb(int n)
{
    if(n>1){
        cout<<tampil<<" ";
        tampil++;fb(n-1);
    }
    else if(n<1){
        cout<< 0;
    }
    else{
        cout<<tampil;
        tampil=1;
    }
}
int main()
{
    int n;
    cout<<"fungsi rekursif untuk mencari bilangan sampai ke-n : ";cin>>n;
    fb(n);
    cout<<endl;
}
