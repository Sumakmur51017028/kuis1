
#include <iostream.h>
#include <conio.h>

main()
{
char nama[20],jurusan[5];
int nilaikehadiran,nilaitugas1,nilaitugas2,nilaitugas3,nilaimid,nilaiquiz,nilaifinal,totalnilaitugas,nilaiakhir;

cout<<"masukkan nama mahasiswa= ";cin>>nama;
cout<<"masukkan jurusan= ";cin>>jurusan;
cout<<"masukkan nilai kehadiran= ";cin>>nilaikehadiran;
cout<<"masukkan nilai tuags 1= ";cin>>nilaitugas1;
cout<<"masukkan nilai tugas 2= ";cin>>nilaitugas2;
cout<<"masukan nilai tugas 3= ";cin>>nilaitugas3;
cout<<"masukkan nilai mid= ";cin>>nilaimid;
cout<<"masukkan nilai quiz= ";cin>>nilaiquiz;
cout<<"masukkan nilai final= ";cin>>nilaifinal;

totalnilaitugas=(nilaitugas1+nilaitugas2+nilaitugas3)/3;
nilaiakhir=(nilaikehadiran*20/100)+(totalnilaitugas*20/100)+(nilaimid*20/100)+(nilaiquiz*20/100)+(nilaifinal*20/100);

cout<<"nama mahasiswa: "<<nama<<endl;
cout<<"jurusan: "<<jurusan<<endl;
cout<<"nilai akhir: "<<nilaiakhir<<endl;
getch();
}