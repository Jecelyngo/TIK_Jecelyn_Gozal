#include <iostream>
using namespace std;

int main() {
    /*
    Jika nilai >= 90 sangat memuaskan
    Jika nilai >= 80 memuaskan
    Jika nilai >= 75 cukup
    Jika nilai <= 75 tidak lulus
    */
    int nilai;
    string keterangan;
    cout<<"Masukan Nilai = " ;cin>>nilai;
    
    if (nilai  > 100){
        keterangan = "Diluar Jangkauan" ;
        cout<<keterangan ;
    }
    else if (nilai  <0 ){
        keterangan = "Diluar Jangkauan" ;
         cout<<keterangan ;
    }
    else if (nilai  >= 90){
        keterangan = "Sangat Memuaskan" ;
         cout<<keterangan ;
    }
    else if (nilai  >= 80){
        keterangan = "Memuaskan" ;
         cout<<keterangan ;
    }
    else if (nilai  >= 75){
        keterangan = "Cukup" ;
         cout<<keterangan; 
    }
    else if (nilai  <= 75){
        keterangan = "Tidak Lulus" ;
         cout<<keterangan ;
    }
    
    return 0;
}
