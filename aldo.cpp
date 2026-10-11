#include <iostream>
using namespace std;
    string teks, tekan, nama[7];
    int total, harga, tiket, umur[7];
    int i;

    void pembukaan(){
        cout<<"selamat dataing di Joko Tiket, anda akan membeli tiket bus di sini ";
        cout<<"Kami menyediakan tiket bus ke arah, Malang-Surabaya, Malang-Pasuruan, dan Malang-Jombang "<<endl;
    }

    void jika(){     
            cout<<""<<endl;
            cout<<"1. Tekan a jika ingin pergi ke Malang-Surabaya "<<endl;
            cout<<"2. Tekan b jika ingin pergi ke Malang-Pasuruan "<<endl;
            cout<<"3. Tekan c jika ingin pergi ke Malang-Jombang "<<endl;
            cin>>tekan;

            if(tekan=="a"){
                cout<<"kamu memesan tiket Malang-Surabaya ";
            }else if(tekan=="b"){
                cout<<"kamu memesan tiket Malang-Pasuruan ";
            }else if(tekan=="c"){
                cout<<"kamu memesan tiket Malang-Jombang ";
            }else{
                cout<<"Tidak ada pilihan lain selain a,b, dan c";
                return;
            }

            cout<<"silahkan memesan tiket,max pemesanan 7 tiket"<<endl;
            cout<<"Tiket: ";
            cin>>tiket;
            if(tiket < 8){
                for(int i=0;i<tiket;i++){
                    cout<<"nama penumpang ke "
                    << i+1 <<": ";
                    cin>>nama[i];
                    cout<<"umur penumpang: ";
                    cin>>umur[i];
                }
                
            }else{
                cout<<"max pemesanan tiket hanya sampai 7";
            }

            if(tiket < 8){
            for(int i=0;i<tiket;i++){
                    if(tekan=="a"){
                    cout<<"=========================="<<endl;
                    cout<<"tujuan: Malang-Surabaya "<<endl;
                    harga=tiket*35000;
                    }else if(tekan=="b"){
                    cout<<"=========================="<<endl;
                    cout<<"tujuan: Malang-Pasuruan "<<endl;
                    harga=tiket*20000;
                    }else if(tekan=="c"){
                    cout<<"=========================="<<endl;
                    cout<<"tujuan: Malang-Jombang "<<endl;
                    harga=tiket*25000;
                    }else{
                    cout<<"Tidak ada pilihan lain selain a,b, dan c";
                    }
                    cout<<"nama penumpang ke "
                    << i+1 <<": ";
                    cout<<nama[i] <<endl;
                    cout<<"umur penumpang: ";
                    cout<<umur[i]<<endl;
                    cout<<"=========================="<<endl;
                }

                cout<<"Harga total tiket: ";
                cout<<harga;
            }

        }
int main() 
{
    pembukaan();
    jika();
}
