#include <iostream>
using namespace std;

int main() {
    /*
    Jika nilai >= 90 sangat memuaskan
    Jika nilai >= 80 memuaskan
    Jika nilai >= 75 cukup
    Jika nilai <= 75 tidak lulus
    Jika bukan, bilangan ganjil
    */
    int nilai;
    cout<<"Masukan Nilai = " ;cin>>nilai;
      if (nilai  > 100){
        cout<<"Diluar Jangkauan" ;
    }
     else if (nilai  <0 ){
        cout<<"Diluar Jangkauan" ;
    }
    else if (nilai  >= 90){
        cout<<"Sangat Memuaskan" ;
    }
    else if (nilai  >= 80){
        cout<<"Memuaskan" ;
    }
    else if (nilai  >= 75){
        cout<<"Cukup" ;
    }
    else if (nilai  <= 75){
        cout<<"Tidak Lulus" ;
    }
}
