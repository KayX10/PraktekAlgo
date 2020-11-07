#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int plhn;
    int N;
    int M;
    int x;
    int kali;
    int pangkat;
    cout << "Perkalian dan perpangkatan======" <<endl;
    cout <<"1. Perkalian" <<endl;
    cout <<"2. Perpangkatan" <<endl;
    cout << "Pilih : "; cin>>plhn;

    switch (plhn){

case 1:

    cout <<"Input angka N : "; cin >> N;
    cout <<"Input angka M : "; cin >> M;
    cout << "Hasil " <<N; cout <<" x " <<M <<endl;
 kali=N*M;
    cout <<M;
    for (x=1; x<N; x++)
    cout <<" + "<<M;
    cout <<" = "<<kali <<endl;
    cout <<"\n";

    break;
    break;

case 2:

    cout <<"Input angka N : "; cin >> N;
    cout <<"Input angka M : "; cin >> M;
    cout << "Hasil " <<N; cout <<" ^ " <<M <<endl;
pangkat=pow(N,M);
    cout <<N;
    for (x=1; x<M; x++)

        cout <<" x "<<N;
        cout <<" = "<<pangkat <<endl;
        cout <<"\n";
}
cout <<"Terima kasih (*^-^*).";
}
