package Java;

public class Mahasiswa {
    
    private String nama, prodi, fakultas;
    private int nim;

    //Konstruktor
    public Mahasiswa() {
        
    }

    /*setter untuk mengisi atau memperbarui nilai variabel*/
    // Set nama
    public void setNama(String nama){
        this.nama = nama;
    }
    // Set prodi
    public void setProdi(String prodi){
        this.prodi = prodi;
    }
    // Set fakultas
    public void setFakultas(String fakultas){
        this.fakultas = fakultas;
    }
    // Set nim
    public void setNim(int nim){
        this.nim = nim;
    }

    /*Getter untuk mengambil nilai variabel*/
    // Get nama
    public String getNama(){
        return this.nama;
    }
    // Get prodi
    public String getProdi(){
        return this.prodi;
    }
    // Get fakultas
    public String getFakultas(){
        return this.fakultas;
    }
    // Get nim
    public int getNim(){
        return this.nim;
    }
}
