package Java;
import java.util.Scanner;

public class main {

    public static void main(String[] args) {
        int n = 0; //banyaknya kelompok
        String kode;

        //untuk mendapatkan inputan user
        Scanner sc = new Scanner(System.in);

        System.out.println("Data Kelompok CERIA");
        System.out.println("===================");
        System.out.println("Mau kamu apakan datanya : ");
        System.out.println("C untuk Create");
        System.out.println("R untuk Read");
        System.out.println("U untuk Update");
        System.out.println("D untuk Delete");
        System.out.println("Mau ambil kode apa ? ");
        try{
			kode = sc.next();
		}catch(Exception e){}

        System.out.print("\nKamu mau ada berapa anggota : ");
        //biar masukannya sesuai tipenya
        try{
			n = sc.nextInt();
		}catch(Exception e){
            System.out.println("Tolong Masukkan angka yaa!");
        }

        Mahasiswa klmpk[] = new Mahasiswa[n];
        String nama ="", prodi = "", fakultas="";
        int nim = 0;

        for (int i = 0; i < n; i++) {
            klmpk[i] = new Mahasiswa();

            System.out.println("\nAnggota " + (i+1));

            System.out.print("Berapa NIM kamu : ");
            try{
				nim = sc.nextInt();
			}catch(Exception e){}

            System.out.print("Siapa nama kamu : ");
            try{
				nama = sc.next();
			}catch(Exception e){}

            System.out.print("Dari Prodi mana : ");
            try{
				prodi = sc.next();
			}catch(Exception e){}

            System.out.print("Fakultas apatuu : ");
            try{
				fakultas = sc.next();
			}catch(Exception e){}

            //menyimpan nilai dari masukan
            klmpk[i].setNim(nim);
			klmpk[i].setNama(nama);
			klmpk[i].setProdi(prodi);
			klmpk[i].setFakultas(fakultas);

        }

        System.out.println("MASUKAN ANGGOTA KELOMPOK SELESAI, BERIKUT DATANYA :");

            for (int j = 0; j < n; j++) {
                System.out.println("\n======= ANGGOTA KE " + (j+1) + "=========");
                System.out.println("| NIM            : " + klmpk[j].getNim());
                System.out.println("| Nama           : " + klmpk[j].getNama());
                System.out.println("| Program Studi  : " + klmpk[j].getProdi());
                System.out.println("| Fakultas       : " + klmpk[j].getFakultas());
            }

        System.out.println(" \nSEMANGAT QERJA RYODII^^");

        //menutup scanner
        sc.close();
    }
}
