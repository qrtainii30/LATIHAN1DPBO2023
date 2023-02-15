<?php

class Mahasiswa{
    private $nama, $prodi, $fakultas, $nim;

    //konstruktor
    public function __construct($nama = "0", $prodi = "0", $fakultas = "0", $nim = "0")
    {
        $this->nim = $nim;
        $this->nama = $nama;
        $this->prodi = $prodi;
        $this->fakultas = $fakultas;
    }

    //Setter
    public function setNim($nim)
    {
        $this->nim = $nim;
    }
    public function setNama($nama)
    {
        $this->nama = $nama;
    }
    public function setProdi($prodi)
    {
        $this->prodi = $prodi;
    }
    public function setFakultas($fakultas)
    {
        $this->fakultas = $fakultas;
    }

    //Getter
    public function getNim()
    {
        return $this->nim;
    }
    public function getNama()
    {
        return $this->nama;
    }
    public function getProdi()
    {
        return $this->prodi;
    }
    public function getFakultas()
    {
        return $this->fakultas;
    }

    //destruktor
    public function __destruct()
    {
        
    }
}
?>