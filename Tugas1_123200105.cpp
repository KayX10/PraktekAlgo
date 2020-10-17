#include <iostream>

using namespace std;

int main()
{
    int nim; //NIM : 123200105
    int UTS;
    int UAS;
    int NA; //NA=Nilai_Akhir
    string nama; // Nama : Kevin Ariel Yap

    cout <<"Nama:";cin>>nama;
    cout <<"NIM:";cin>>nim;
    cout <<"UTS:";cin>>UTS;
    cout <<"UAS:";cin>>UAS;

    NA=(UTS+UAS)/2;

    cout <<"Hai, nama saya "<<nama;
    cout <<" NIM saya "<<nim<<endl;
    cout << "Nilai akhir saya "<<NA;
    return 0;
}
