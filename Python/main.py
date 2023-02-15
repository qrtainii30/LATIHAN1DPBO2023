#import class file
from Mahasiswa import Mahasiswa

print("Data Kelompok CERIA")
print("===================\n")

print("Mau diapakan datanya: ")
print("C untuk Create")
print("R untuk Read")
print("U untuk Update")
print("D untuk Delete")
print("X untuk Exit")
kode = str(input("Mau ambil kode apa? "))

n = int(input("Kamu mau ada berapa anggota : "))

klmpk = [Mahasiswa() for i in range(n)]

i = 0
j = 0

for i in range(n):
    print("\nAnggota ", i +1)

    nim = int(input("Berapa NIM kamu : "))
    nama = str(input("Siapa nama kamu : "))
    prodi = str(input("Dari Prodi mana : "))
    fakultas = str(input("Fakultas apatuu : "))

    #simpan nilai
    klmpk[i].setNim(nim)
    klmpk[i].setNama(nama)
    klmpk[i].setProdi(prodi)
    klmpk[i].setFakultas(fakultas)
    
print("\nMASUKAN ANGGOTA KELOMPOK SELESAI, BERIKUT DATANYA :\n")

for j in range(n):
    print("\n======= ANGGOTA KE ", j+1, "=========")
    print("| NIM            : ", str(klmpk[j].getNim()), "\n")
    print("| Nama           : ", str(klmpk[j].getNama()), "\n")
    print("| Program Studi  : ",str(klmpk[j].getProdi()), "\n")
    print("| Fakultas       : ",str(klmpk[j].getFakultas()), "\n")
    
print("\nSEMANGAT QERJA RYODI^^")