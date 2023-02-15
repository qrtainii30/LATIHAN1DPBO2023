<?php
require('Mahasiswa.php');

$klmpk1 = new Mahasiswa();
$klmpk1->setNim("2100121");
$klmpk1->setNama("Ariana");
$klmpk1->setProdi("Akutansi");
$klmpk1->setFakultas("FPEB");
$files1 = glob("foto/ariana.jpg");

$klmpk2 = new Mahasiswa();
$klmpk2->setNim("2100897");
$klmpk2->setNama("Selena");
$klmpk2->setProdi("Kimia");
$klmpk2->setFakultas("FPMIPA");

echo "<table width = 500 border=1> ";
echo "<tr>
        <th>NIM</th>
        <th>Nama</th>
        <th>Program Studi</th>
        <th>Fakultas</th>
        <th> Foto </th>
       </tr> <tr> <td>"; echo $klmpk1->getNim();
echo "</td> <td>"; echo $klmpk1->getNama(); 
echo "</td> <td>"; echo $klmpk1->getProdi();
echo "</td> <td>"; echo $klmpk1->getFakultas();
echo "</td> <td>"; echo "<img src='foto/ariana.jpg' width='100' heigt='200'/>";
echo "</td> </tr> <tr> <td>"; echo $klmpk2->getNim();
echo "</td> <td>"; echo $klmpk2->getNama();
echo "</td> <td>"; echo $klmpk2->getProdi();
echo "</td> <td>"; echo $klmpk2->getFakultas();
echo "</td> <td>"; echo "<img src='foto/selena.jpg' width='100' heigt='200'/>";
echo "</td> </tr>
    </table>";

?>