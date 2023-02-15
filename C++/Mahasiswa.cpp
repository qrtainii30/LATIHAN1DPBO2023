#include<iostream>
#include<string>

using namespace std;

class Mahasiswa{
    private:
        string nama, prodi, fakultas;
        int nim;

    public:
        //konstruksi
        Mahasiswa(){

        }

        /*GETTER and SETTER*/
        void setNama(string nama){
            this->nama = nama;
        }

        void setProdi(string prodi){
            this->prodi = prodi;
        }

        void setFakultas(string fakultas){
            this->fakultas = fakultas;
        }

        void setNim(int nim){
            this->nim = nim;
        }

        string getNama(){
            return this->nama;
        }

        string getProdi(){
            return this->prodi;
        }

        string getFakultas(){
            return this->fakultas;
        }

        int getNim(){
            return this->nim;
        }

        ~Mahasiswa(){

        }
};