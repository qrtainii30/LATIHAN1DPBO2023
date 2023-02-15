#include<bits/stdc++.h>
#include"Mahasiswa.cpp"

using namespace std;

int main(int argc, char const *argv[])
{
    int n;
    char kode;

    list<Mahasiswa>llist;

    do
    {
        cout << "\nData Kelompok CERIA" << endl;
        cout << "===================" << endl; 

        cout << "Mau apakan datanya :" << endl;
        cout << "C untuk Create" << endl;
        cout << "R untuk Read" << endl;
        cout << "U untuk Update" << endl;
        cout << "D untuk Delete" << endl;
        cout << "X untuk Exit" << endl;

        cout << "Mau ambil kode apa ? ";
        cin >> kode;

        if (kode == 'C')
        {
            cout << endl << "Kamu mau ada berapa anggota : ";
            cin >> n;

            Mahasiswa klmpk[n];

            string nama, prodi, fakultas;
            int nim; 
            for (int i = 0; i < n; i++)
            {
                cout << endl << "Anggota "  << i+1 << endl;
                cout << "Berapa NIM kamu : ";
                cin >> nim;
                cout << "Siapa nama kamu : ";
                cin >> nama;
                cout << "Dari Prodi mana : ";
                cin >> prodi;
                cout << "Fakultas apatuu : ";
                cin >> fakultas;

                //mengisi nilai variabel dari masukan
                klmpk[i].setNim(nim);
                klmpk[i].setNama(nama);
                klmpk[i].setProdi(prodi);
                klmpk[i].setFakultas(fakultas);
                llist.push_back(klmpk[i]);
                cout << "\nOkey, data sudah dibuat" << endl;
            }
        } else if (kode == 'R')
        {
            cout << endl << "MASUKAN ANGGOTA KELOMPOK SELESAI, BERIKUT DATANYA :" << endl;

            for (list<Mahasiswa>::iterator it = llist.begin(); it!= llist.end(); it++)
            {
                cout << "| NIM            : " << it->getNim() <<endl;
                cout << "| Nama           : " << it->getNama() <<endl;
                cout << "| Program Studi  : " << it->getProdi() <<endl;
                cout << "| Fakultas       : " << it->getFakultas() <<endl;
                cout << endl << "----------------------------------------" << endl;
            }
            cout << endl << " SEMANGAT QERJA RYODI^^" << endl;
        } else if (kode == 'U')
        {
            int nim_baru;
            string nama_baru, prodi_baru, fakultas_baru;
            cout << endl << "Siapa yang akan diperbarui (inputan berupa nim): ";
            cin >> nim_baru;
            cout << "Jadi siapa nama kamu : ";
            cin >> nama_baru;
            cout << "Dari Prodi yang mana jadinya : ";
            cin >> prodi_baru;
            cout << "Jadi dari fakultas apatuu : ";
            cin >> fakultas_baru;
        } else if (kode == 'D')
        {
            int nim_hapus;
            cout << endl << "Siapa yang akan dihapus (inputan berupa nim): ";
            cin >> nim_hapus;
        }
        
        
    } while (kode != 'X');
        
    return 0;
}


