#include <iostream>

using namespace std;

    string ulang;
    int r, t, menu;
    float luas, keliling, volume;
    float phi=3.14;

void penutup(){
    cout <<"Program selesai, Terima kasih ^_^" <<endl;
    }
void a(){
    cout <<"Jari-jari\t\t: "; cin>>r;
    }
void b(){
    cout <<"Tinggi\t\t\t: "; cin>>t;
    }
void program(){
    cout <<"====Hitung Lingkaran====" <<endl;
    cout <<"1. Luas Lingkaran" <<endl;
    cout <<"2. Keliling Lingkaran" <<endl;
    cout <<"3. Volume Tabung" <<endl;
    cout <<"Pilih : "; cin >>menu;
switch (menu){
case 1 : a();
        luas=(phi*r*r);
        cout <<"Luas lingkaran\t\t: " << luas <<endl;
        cout <<"Ulangi program? (y/n)\t: "; cin>>ulang;
        cout <<endl;
        if (ulang=="y"){
        program();
        }
        else if (ulang=="n"){
        penutup();
        }
        break;
case 2 : a();
        keliling=(phi*2*r);
        cout <<"Keliling lingkaran\t: " << keliling <<endl;
        cout <<"Ulangi program? (y/n)\t: "; cin>>ulang;
        cout <<endl;
        if (ulang=="y"){
        program();
        }
        else if (ulang=="n"){
        penutup();
        }
        break;
case 3 : a();
         b();
        volume=(phi*r*r*t);
        cout <<"Volume tabung\t\t: " << volume <<endl;
        cout <<"Ulangi program? (y/n)\t: "; cin>>ulang;
        cout <<endl;
        if (ulang=="y"){
        program();
        }
        else if (ulang=="n"){
        penutup();
        }
        break;
default : cout <<"Input salah :)" <<endl;
          cout <<"Ulangi program? (y/n)\t: "; cin>>ulang;
        cout <<endl;
        if (ulang=="y"){
        program();
        }
        else if (ulang=="n"){
        penutup();
        }
        break;
    }
    }
int main(){
    program();

    return 0;
}
