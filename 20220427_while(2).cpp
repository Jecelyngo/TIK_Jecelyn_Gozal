#include <iostream>

using namespace std;

int main(){
    
    // menambahkan batas bawah
    // menambahkan batas batas
    // namun batas bawah tidak boleh lebih dari batas atas 
    
    int batasbawah, batasatas;
    cout<<"Masukan Batas Bawah ";cin>>batasbawah;
    cout<<"Masukan Batas Atas ";cin>>batasatas;
     if (batasatas > batasbawah){
         while (batasbawah++ <batasatas){ 
        cout<<"Data ke - " <<batasbawah<<endl;
    }
     }
    else { 
        cout<<"Batas Bawah Tidak Boleh Lebih Dari Batas Atas";
    }

   
    return 0;
}
