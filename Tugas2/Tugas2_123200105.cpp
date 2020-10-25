#include <iostream>

using namespace std;

int main()
{
 string nama;
 int UmurA;
 int UmurB;
 int UmurC;
 int UmurD;
int tagihan1;
int tagihan2;
int tagihan3;
int tagihan4;
int tagihanakhir;

 cout <<"Umur Ayah: ";
 cin >> UmurA;
 cout <<"Umur Ibu: ";
 cin >> UmurB;
 cout<<"Umur Anak 1: ";
 cin>> UmurC;
 cout<<"Umur Anak 2: ";
 cin >> UmurD;


if (UmurA>20){
    tagihan1=30000*30;
}
else if (UmurA>12 && UmurA<20){
    tagihan1=20000*30;
}
else if (UmurA>0 && UmurA<12){
    tagihan1=15000*30;
}

if (UmurB>20){
    tagihan2=30000*30;
}
else if (UmurB>12 && UmurB<20){
    tagihan2=20000*30;
}
else if (UmurB>0 && UmurB<12){
    tagihan2=15000*30;
}

if (UmurC>20){
    tagihan3=30000*30;
}
else if (UmurC>12 && UmurC<20){
    tagihan3=20000*30;
}
else if (UmurC>0 && UmurC<12){
    tagihan3=15000*30;
}

if (UmurD>20){
    tagihan4=30000*30;
}
else if (UmurD>12 && UmurD<20){
    tagihan4=20000*30;
}
else if (UmurD>0 && UmurD<12){
    tagihan4=15000*30;
}
tagihanakhir=tagihan1+tagihan2+tagihan3+tagihan4;
cout <<"Maka tagihan perbulan adalah ";cout<<tagihanakhir;

}

