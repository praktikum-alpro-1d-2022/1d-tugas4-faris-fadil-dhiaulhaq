#include<iostream>
using namespace std;
int main(){
    float kodeSusu, jumlah, harga, total;
    int pilihanAwal, tahun, pilihan;
    string usernameSign, passSign, usernameLog, passLog, passVerif, ukuranSusu;

    cout<<"===== Pilih Program =====\n";
    cout<<"1. Program Login Sederhana (Perlu Sign-up untuk Login)\n";
    cout<<"2. Program Untuk menentukan tahun Kabisat atau bukan\n";
    cout<<"3. Program Pilihan Menu Restoran\n";
    cout<<"4. Program Pemesanan Susu dengan (Ukuran, Jumlah, Total Harga) \n";
    cout<<"Pilihan anda: ";
    cin>>pilihanAwal;

    if (pilihanAwal==1){
        while (true){
        cout<<"=== Selamat datang di program login sederhana ===\n";
        cout<<"Pilih login/sign-up\n";
        cout<<"1. Login\n";
        cout<<"2. Sign-up (Daftar)\n";
        cout<<"Pilihan: ";
        cin>>pilihan;

        if (pilihan==1){
            cout<<"=== Kamu memilih Login ===\n";
            cout<<"Masukkan Username: ";
            cin>>usernameLog;
            if (usernameSign==usernameLog){
                cout<<"Masukkan Password: ";
                cin>>passLog;
                if (passLog==passSign){
                    cout<<"==================================\n";
                    cout<<"|| Selamat kamu berhasil login ||\n";
                    cout<<"==================================\n";
                    break;
                }
                else{
                    cout<<"====================\n";
                    cout<<"|| Password Salah!||\n";
                    cout<<"====================\n";
                }
                }
            else{
                cout<<"==============================\n";
                cout<<"|| Username tidak ditemukan!||\n";
                cout<<"==============================\n";
            }
        }
        if (pilihan==2){
            cout<<"=== Kamu memilih Sign-up ===\n";
            cout<<"Masukkan Username: ";
            cin>>usernameSign;
            cout<<"Masukkan Password: ";
            cin>>passSign;
            cout<<"Masukkan Password Kembali: ";
            cin>>passVerif;
            if (passSign==passVerif){
                cout<<"==================================\n";
                cout<<"|| Selamat akun berhasil dibuat ||\n";
                cout<<"==================================\n";
            }
            else{
                cout<<"=================================\n";
                cout<<"|| Password tidak sesuai/sama! ||\n";
                cout<<"|| Silahkan ulangi pendaftaran ||\n";
                cout<<"=================================\n";
            }
        }
        else if (pilihan<1||pilihan>2){
            cout<<"==========================\n";
            cout<<"|| Pilihan tidak sesuai ||\n";
            cout<<"==========================\n";
        }  
        }
    }
    else if (pilihanAwal==2){
        cout<<"=== Program Menentukan Tahun Kabisat ===\n";
        cout<<"Masukkan tahun: ";
        cin>>tahun;

        if (tahun%400 == 0){
            cout << tahun << " Merupakan Tahun Kabisat\n";
        } else if(tahun%100 == 0){
            cout << tahun << " Bukan Tahun Kabisat\n";
        } else if(tahun%4 == 0){
            cout << tahun << " Merupakan Tahun Kabisat\n";
        } else {
            cout << tahun << " Bukan Tahun kabisat\n";
        }
    }
    else if (pilihanAwal==3){
        cout<<"  Menu Restaurant Mc'Yahud  \n";
        cout<<"==========================================\n";
        cout<<" 1. Nasi Goreng Informatika   Rp. 5.000,- \n";
        cout<<" 2. Nasi Soto Ayam Internet   Rp. 7.000,- \n";
        cout<<" 3. Gado-gado Disket          Rp. 4.500,- \n";
        cout<<" 4. Bubur Ayam LAN            Rp. 4.000,- \n";
        cout<<"==========================================\n";

        cout<<"Masukkan Pilihan Anda... : ";
        cin>>pilihan;
        
        if (pilihan==1){

            cout<<"Pilihan No. 1 Nasi Goreng Informatika Rp. 5.000,-";
        }
        else if (pilihan==2){

            cout<<"Pilihan No. 2 Nasi Soto Ayam Internet Rp. 7.000,-";
        }
        else if (pilihan==3){

            cout<<"Pilihan No. 3 Gado-gado Disket Rp. 4.500,-";
        }
        else if (pilihan==4){

            cout<<"Pilihan No. 4 Bubur Ayam LAN Rp. 4.000,-";
        }
        else{
            cout<<"Pilihannya tidak sesuai ";
        }
    }
    else if (pilihanAwal==4){
        cout<<"  Daftar harga produk  \n";
        cout<<"|-------------|---------------|---------------|------------------|\n";
        cout<<"|  Kode Susu  |  Nama Produk  |   Ukuran      |   Harga          |\n";
        cout<<"|-------------|---------------|---------------|------------------|\n";
        cout<<"|  1          |  Dancow       |   B = Besar   |   Rp. 10.000,-   |\n";
        cout<<"|             |               |   S = Sedang  |   Rp. 4.250,-    |\n";
        cout<<"|             |               |   K = Kecil   |   Rp. 2.100,-    |\n";
        cout<<"|-------------|---------------|---------------|------------------|\n";
        cout<<"|  2          |  Indomilk     |   B = Besar   |   Rp. 8.500,-    |\n";
        cout<<"|             |               |   S = Sedang  |   Rp. 4.000,-    |\n";
        cout<<"|             |               |   K = Kecil   |   Rp. 2.025,-    |\n";
        cout<<"|-------------|---------------|---------------|------------------|\n";
        cout<<"|  3          |  Sustacal     |   B = Besar   |   Rp. 17.000,-   |\n";
        cout<<"|             |               |   S = Sedang  |   Rp. 14.500,-   |\n";
        cout<<"|             |               |   K = Kecil   |   Rp. 8.300,-    |\n";
        cout<<"|-------------|---------------|---------------|------------------|\n";

        cout<<"Masukkan Kode Susu (1-3): ";
        cin>>kodeSusu;
        cout<<"Masukkan Jumlah Pembelian: ";
        cin>>jumlah;
        cout<<"Masukkan Ukuran (B/S/K): ";
        cin>>ukuranSusu;

        if (kodeSusu==1){
            if (ukuranSusu=="B"||ukuranSusu=="b"){
                cout<<"================================\n";
                cout<<"Susu Dancow\n";
                harga = 10000;
                total = harga*jumlah;
                cout<<"Harga Susu: Rp. "<<harga<<endl;
                cout<<"Jumlah Pembelian Rp. "<<total<<endl;
                cout<<"================================\n";
            }
            else if (ukuranSusu=="S"||ukuranSusu=="s"){
                cout<<"================================\n";
                cout<<"Susu Dancow\n";
                harga = 4250;
                total = harga*jumlah;
                cout<<"Harga Susu: Rp. "<<harga<<endl;
                cout<<"Jumlah Pembelian Rp. "<<total<<endl;
                cout<<"================================\n";
            }
            else if (ukuranSusu=="K"||ukuranSusu=="k"){
                cout<<"================================\n";
                cout<<"Susu Dancow\n";
                harga = 2100;
                total = harga*jumlah;
                cout<<"Harga Susu: Rp. "<<harga<<endl;
                cout<<"Jumlah Pembelian Rp. "<<total<<endl;
                cout<<"================================\n";
            }
            else{
                cout<<"Ukuran susu tidak sesuai ";
            }
        }
        else if (kodeSusu==2){
            if (ukuranSusu=="B"||ukuranSusu=="b"){
                cout<<"================================\n";
                cout<<"Susu Indomilk\n";
                harga = 8500;
                total = harga*jumlah;
                cout<<"Harga Susu: Rp. "<<harga<<endl;
                cout<<"Jumlah Pembelian Rp. "<<total<<endl;
                cout<<"================================\n";
            }
            else if (ukuranSusu=="S"||ukuranSusu=="s"){
                cout<<"================================\n";
                cout<<"Susu Indomilk\n";
                harga = 4000;
                total = harga*jumlah;
                cout<<"Harga Susu: Rp. "<<harga<<endl;
                cout<<"Jumlah Pembelian Rp. "<<total<<endl;
                cout<<"================================\n";
            }
            else if (ukuranSusu=="K"||ukuranSusu=="k"){
                cout<<"================================\n";
                cout<<"Susu Indomilk\n";
                harga = 2025;
                total = harga*jumlah;
                cout<<"Harga Susu: Rp. "<<harga<<endl;
                cout<<"Jumlah Pembelian Rp. "<<total<<endl;
                cout<<"================================\n";
            }
            else{
                cout<<"Ukuran susu tidak sesuai ";
            }
        }
        else if (kodeSusu==3){
            if (ukuranSusu=="B"||ukuranSusu=="b"){
                cout<<"================================\n";
                cout<<"Susu Sustacal\n";
                harga = 17000;
                total = harga*jumlah;
                cout<<"Harga Susu: Rp. "<<harga<<endl;
                cout<<"Jumlah Pembelian Rp. "<<total<<endl;
                cout<<"================================\n";
            }
            else if (ukuranSusu=="S"||ukuranSusu=="s"){
                cout<<"================================\n";
                cout<<"Susu Sustacal\n";
                harga = 14500;
                total = harga*jumlah;
                cout<<"Harga Susu: Rp. "<<harga<<endl;
                cout<<"Jumlah Pembelian Rp. "<<total<<endl;
                cout<<"================================\n";
            }
            else if (ukuranSusu=="K"||ukuranSusu=="k"){
                cout<<"================================\n";
                cout<<"Susu Sustacal\n";
                harga = 8300;
                total = harga*jumlah;
                cout<<"Harga Susu: Rp. "<<harga<<endl;
                cout<<"Jumlah Pembelian Rp. "<<total<<endl;
                cout<<"================================\n";
            }
            else{
                cout<<"Ukuran susu tidak sesuai ";
            }
        }
        else{
            cout<<"=============================\n";
            cout<<"|| Kode susu tidak sesuai! ||";
            cout<<"=============================\n";
        }
    }
    else{
        cout<<"Pilihan tidak sesuai!";
    }
    return 0;
}