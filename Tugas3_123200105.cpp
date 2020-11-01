#include <iostream>
#include <string>
using namespace std;

int main()
{
    string username="Kevin";
    string password="100703";
    string mkAlgo;
    string mkKalk;
    double nH; //Nilai Harian
    double nUTS; //Nilai UTS
    double nUAS; //Nilai UAS
    double nA; //Nilai akhir
    int opsi;
    string opsional (int opsi);
    cout <<"LOGIN AKUN ==========="<<endl;
    cout <<"Username\t: "; cin>>username;
    cout <<"Password\t: "; cin>>password;

    if (username=="Kevin" && password=="100703"){
    cout<<"==================\n";
    cout<<"Login Berhasil!\n";

    } else if (username=="Kevin"){
        cout <<"Password salah!\n";

    } else if (password=="100703"){
        cout <<"Username salah!\n";

        } else {
            cout <<"Username dan Password salah!"<<endl;
        }


if(username=="Kevin" &&  password=="100703"){
    cout <<"Input Nilai Mata Kuliah\n";
    cout <<"1. Algoritma dan Pemograman"<<endl;
    cout <<"2. Kalkulus"<<endl;
    cout <<"Pilih :"; cin>>opsi;

    switch (opsi){
case 1:
    mkAlgo = "Algoritma dan Pemograman";
    cout <<"Nilai Harian\t: "; cin>>nH;
    cout <<"Nilai UTS\t: "; cin>>nUTS;
    cout <<"Nilai UAS\t: "; cin>>nUAS;
    nA= (nH+nUTS+nUAS)/3;
    if (nA>=80){
        cout <<"Anda lulus Algoritma dan Pemrograman dengan nilai " <<nA;
}
else {
        cout <<"Anda tidak lulus Algoritma dan Pemrograman dengan nilai " <<nA;
    }break;

case 2:
    mkKalk = "Kalkulus";
    cout <<"Nilai Harian\t: "; cin>>nH;
    cout <<"Nilai UTS\t: "; cin>>nUTS;
    cout <<"Nilai UAS\t: "; cin>>nUAS;
    nA= (nH+nUTS+nUAS)/3;
    if (nA>=80){
        cout <<"Anda lulus Kalkulus dengan nilai " <<nA;
}
else {
    cout <<"Anda tidak lulus Kalkulus dengan nilai "; cout<<nA;
}
break;

    }
}
}
