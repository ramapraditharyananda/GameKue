#include <iostream>
using namespace std;

void pilih();

void pilih(){
    int pilihan; 
    cout << "SELAMAT DATANG DI SWEET GUESS" << endl;
    cout << " ⋆｡‧˚ʚ🍒 ɞ˚ ˚🍰｡˚ ᡣ𐭩 ⋆" << endl;
    cout << "Apakah Anda siap bermain game?" << endl;
    cout << "Ketik 1 untuk Ya" << endl;
    cout << "Ketik 2 untuk Tidak" << endl;
    cout << "Masukkan pilihan anda : ";
    cin >> pilihan;
    if (pilihan == 2) {
        cout << "Game Sweet Guess telah terlupakan well 🤟" << endl;
        return; // Exit the function if the user chooses 'Tidak'
    } else if (pilihan == 1) {
        int pilihanAngka;
    } else {
        cout<<"pilihan nya 1 dan 2 well 🤟"<<endl;
        return; // Exit the function if the user chooses 'Tidak'
    }
    
    int pilihanAngka;
    
    // Menggunakan waktu saat ini sebagai seed untuk angka acak
    

    while(true){
        int kue = rand() % 9;  // Menghasilkan huruf acak antara 1 dan 9

        cout << "===================" << endl;
        cout << "|  1  |  2  |  3  |" << endl;
        cout << "|  4  |  5  |  6  |" << endl;
        cout << "|  7  |  8  |  9  |" << endl;
        cout << "===================" << endl;

        cout << "Silahkan pilih salah satu angka di atas untuk mencari sweet cake: ";
        cin >> pilihanAngka;
        
        if(pilihanAngka == kue){
            cout << "Yey, Anda mendapatkan SWEET CAKE!🤟" << endl;
        } else {
            cout << "Salah, sweet cake berada di angka nomor " << kue << endl;
        }
        
        if(pilihan!=1){
            cout << "Terima Kasih telah bermain game kami" << endl;
        }
    

        cout << "Tekan enter untuk bermain lagi.." << endl;
        cin.ignore();  // Mengabaikan input tersisa
        cin.get();     // Menunggu tombol Enter ditekan
    }
}

int main(){
    pilih();
    return 0;
}
