#include <iostream>
using namespace std;
    string teks, nama[1], umur[1];
    int tekan, total, jumlah[1];
    int i;

    void pembukaan(){
        cout<<"selamat dataing di Joko Tiket, anda akan membeli tiket bus di sini ";
        cout<<"Kami menyediakan tiket bus ke arah, Malang-Surabaya, Malang-Pasuruan, dan Malang-Jombang "<<endl;
        cout<<""<<endl;
    }

    void jika(){  
            for(i=0;i<1;i++){
            cout<<"Silahkkan isi data anda:"<<endl;
            cout<<"Nama anda: ";
            cin>>nama[i];
            cout<<"Berapa umur anda: ";
            cin>>umur[i];
            cout>>""<<endl;
            cout>>"1. Tekan m jika ingin pergi ke Malang-Surabaya "<<endl:    
        }
    }
int main() 
{
    pembukaan();
    jika();
}
