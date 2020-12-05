#include <iostream>

using namespace std;

int main()

{

int bangundatar;

int pkotak,lkotak;

int tsegitiga;

int k,x,y;

    cout << "Gambar bangun datar=========" <<endl;
    cout << "1. Kotak Bolong" <<endl;
    cout << "2. Segitiga"<<endl;
    cout << "Pilih : "; cin >>bangundatar;

switch (bangundatar){
case 1: cout << "Panjang\t: "; cin>>pkotak;
        cout << "Lebar\t: "; cin>>lkotak;

        {
            for (k=1;k<=pkotak;k++)
                {
                    for (x=1;x<=lkotak;x++)
                        {
                            if( k == 1 || k == pkotak )
                                {
                                    cout << "*";
                                }
                                        else
                                            {
                                                if( x== 1 || x == lkotak )
                                                cout << "*";
                                                        else
                                                        cout << " ";
                                            }
                        }
                        cout <<"\n";
                }
        }
        break;


case 2: cout << "Tinggi\t: "; cin>>tsegitiga;

        {
            for (k=1;k<=tsegitiga;k++)
                {
                    for (x=1;x<=k;x++)
                    cout <<x<<" ";
                    cout <<endl;
                }
        }
}

}


