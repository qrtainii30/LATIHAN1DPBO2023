class Mahasiswa:

    #public
    nama = ""
    prodi = ""
    fakultas = ""
    nim = ""

    #KONSTRUKSI
    def __init__(self):
        self.nama = ""
        self.prodi = ""
        self.fakultas = ""
        self.nim = ""

    #GETTER & SETTER
    #SETTER
    def setNama(self, nama):
        self.nama = nama  
    
    def setProdi(self, prodi):
        self.prodi

    def setFakultas(self, fakultas):
        self.fakultas

    def setNim(self, nim):
        self.nim
    #GETTER
    def getNama(self):
        return self.nama
    
    def getProdi(self):
        return self.prodi
    
    def getFakultas(self):
        return self.fakultas
    
    def getNim(self):
        return self.nim
    
