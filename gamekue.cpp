#include <iostream>
using namespace std;

int main(){
    
    srand(time(nullptr));
    
    int pilih;
    
    
    while(true){
        system("clsc");
        int cake = 1 + rand() % 9;
        
        cout<<"==================="<<endl;
        cout<<"|  1  |  2  |  3  |"<<endl;
        cout<<"|  4  |  5  |  6  |"<<endl;
        cout<<"|  7  |  8  |  9  |"<<endl;
        cout<<"==================="<<endl;
        
        // cout<<cake <<endl; Jika mau lihat
        cout<<"Silahkan pilih salah satu angka diatas untuk mencari kue: ";
        cin>>pilih;
        
        if(pilih == cake){
            cout<<"Yey, Anda mendapatkan kue!"<<endl;
        }else{
            cout<<"Salah, kue berada di angka nomor "<< cake <<endl;
        }
        
        cin.get();
        cout<<"tekan enter untuk bermain lagi..";
        cin.get();
    }
    
    return 0;
}
