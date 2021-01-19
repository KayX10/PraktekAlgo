#include <iostream>

using namespace std;

int a=0;
int i,l,pilih,bmhs,nim[30],bmk[30],uts[30][30],uas[30][30],nilaitotal[30][30],nilaiakhir[30];
string nmhs[30],nmk[30][30],cari,bonus;

void login();
void menu(){
    do{
        cout <<"Menu"<<endl;
        cout <<"1. Tambah Mahasiswa"<<endl;
        cout <<"2. Lihat Mahasiswa"<<endl;
        cout <<"3. Cari Mahasiswa"<<endl;
        cout <<"4. Logout"<<endl;
        cout <<"Pilih : "; cin>>pilih;
    switch(pilih){
case 1: cout <<"Masukkan banyak mahasiswa : "; cin>>bmhs;
        for (int i=1; i<=bmhs; i++){
            a++;
            cout <<"Masukkan data mahasiswa ke-"<<a<<endl;
            cout <<"Nama    : "; cin.ignore(); getline(cin,nmhs[a]);
            cout <<"NIM     : "; cin>>nim[a];
            cout <<"Banyak MK : "; cin>>bmk[a];
        for (int j=1; j<=bmk[a]; j++){
            cout <<"\tMatkul "<<j<<endl;
            cout <<"\tNama  : ";cin.ignore(); getline(cin,nmk[a][j]);
            cout <<"\tUTS   : ";cin>>uts[a][j];
            cout <<"\tUAS   : ";cin>>uas[a][j];
            cout <<endl;
            nilaitotal[a][j]=((uts[a][j])+(uas[a][j]))/2;}
        }
        cout <<"Berhasil memasukkan data mahasiswa"<<endl;
        system("pause");
        system("cls");
        break;
case 2: if (bmhs==0){
        cout <<"Jumlah mahasiswa : 0"<<endl;}
        else {
        cout <<"Jumlah mahasiswa : "<<a<<endl<<endl;
        for(int k=1; k<=a;k++){
        int nilaisementara = 0;
        cout <<"Data mahasiswa ke-"<<k<<endl;
        cout <<"Nama    : "<<nmhs[k]<<endl;
        cout <<"NIM     : "<<nim[k]<<endl;
            for (int m=1;m<=bmk[k];m++){
                cout <<"\tMatkul  "<<m<<endl;
                cout <<"\tNama  : "<<nmk[k][m]<<endl;
                cout <<"\tNilai : "<<nilaitotal[k][m]<<endl<<endl;
                nilaisementara=nilaisementara+nilaitotal[k][m];}
        nilaiakhir[k]=nilaisementara/bmk[k];
        cout <<"Nilai Akhir : "<<nilaiakhir[k]<<endl<<endl;}
        system("pause");
        system("cls");}
        break;
case 3: cout <<"Cari nama mahasiswa : "; cin.ignore(); getline(cin, cari);
        for (int i=1;i<=a;i++){
        int x=0;
                if (cari==nmhs[i]){
                    cout <<"Data ditemukan"<<endl<<endl;
                    cout <<"Data Mahasiswa ke-"<<i<<endl;
                    cout <<"Nama    : " << nmhs[i]<<endl;
                    cout <<"NIM     : " << nim[i]<<endl;
            for (int j=1;j<=bmk[i];j++){
            cout <<"\tMatkul"<<j<<endl;
            cout <<"\tNama  : "<<nmk[i][j]<<endl;
            cout <<"\tNilai : "<<nilaitotal[i][j]<<endl;}
        cout <<"Nilai akhir : "<<nilaiakhir[i]<<endl<<endl;

        cout <<"(Bonus) Update data (y/n)? "; cin>>bonus;
        /*
        cout <<"Update data mahasiswa ke-"<<i<<endl;
        cout <<"Nama    : ";cin.ignore(); getline(cin,nmhs[i]);
        cout <<"NIM     : "<<nim[i]<<endl;
            for(int o=1;o<=bmk[i];o++){
            cout <<"\tMatkul "<<o<<endl;
            cout <<"\tNama  : "; cin.ignore(); getline(cin,nmk[o][i]);
            cout <<"\tUTS   : "; cin>>uts[o][i];
            cout <<"\tUAS   : "; cin>>uas[o][i];
            nilaitotal[o][i]=((uts[o][i])+(uas[o][i]))/2;
                int nilaisementara=0;
                nilaisementara=nilaisementara+nilaitotal[o][i];
                nilaiakhir[i]=nilaisementara/bmk[i];}
            break;
            */
            //Menu Bonus agak bingung untuk ngubah nama mata kuliahnya sama nilai uts,uasnya kak
            }
        }
        system("pause");
        system("cls");
        break;
case 4: system("cls");
        login();
    }
    }while(l=1);
}

int main()
{
login();
}
string username,password;
void login(){
    do{
    cout <<"Login Admin"<<endl;
    cout <<"Username : "; cin>>username;
    cout <<"Password : "; cin>>password;

    if (username!="admin" && password=="admin123"){
        cout <<"Username salah\n"<<endl;
        i++;}
    else if (username=="admin" && password!="admin123") {
        cout <<"Password salah\n"<<endl;
        i++;}
    else if (username=="admin" && password=="admin123"){
        cout <<"Login sukses"<<endl;
        i=100;
        system("pause");
        system("cls");
        menu();}
    else {
        cout <<"Username dan Password salah\n"<<endl;
        i++;}
}while(i<=100);
}
