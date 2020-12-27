#include <iostream>
using namespace std;
int main() {
    int i,j,k,l,m;

    int bangka;
    cout <<"Masukkan banyak angka : "; cin>> bangka;
    int array[bangka];

    for (i = 0; i<bangka; i++){
        cout <<"Angka ke-"<< i+1 <<" : "; cin>> array[i];
    }
    cout <<"====Hasil====" <<endl;
    cout <<"Deret\t\t: ";
    for (j = 0; j<bangka; j++){
        cout << array[j] << " ";
    }
    cout <<endl;
    int max = -99999;
    int min = 99999;

    cout <<"Maksimum\t: ";
    for (k = 0; k<bangka; k++){
        if(array[k] < min){
            min = array[k];
        }
        if (array[k] > max){
            max = array[k];
        }
    }
    cout <<max<<endl;
    cout <<"Minimum\t\t: " <<min<<endl;
    cout <<"Rata-rata\t: ";

    float total = 0;
    float rerata;
    for (l = 0; l<bangka; l++){
        total = total+array[l];
    }
    rerata= (total/bangka);
    cout << rerata <<endl;

    int selisih, max1=-99999;
    cout <<"Selisih Max\t: ";
    for (m = 0; m<bangka-1; m++){
        selisih = array[m] - array[m+1];
        if (selisih <0){
            selisih=selisih*(-1);
        }
        if (selisih>max1){
            max1=selisih;
        }
    }
    cout <<max1<<endl;
}
