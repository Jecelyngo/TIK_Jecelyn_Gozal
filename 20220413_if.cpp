#include <iostream>
using namespace std;

int main() {
    /*
    Jika nilai dengan sisa bagi = 0, bilangan genap
    Jika bukan, bilangan ganjil
    */
    int nilai;
    cout<<"Masukan Nilai = " ;cin>>nilai;
    if (nilai % 2 == 0){
        cout<<"Bilangan Genap" ;
    }
    else {
        cout<<"Bilangan Ganjil";
    }
}
 
