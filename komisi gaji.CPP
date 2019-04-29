#include<iostream.h>
#include<conio.h>
void main () {
	int pendapatan,komisi,total,jasa;
   clrscr();
   cout<<"			INPUT KOMISI KEPADA SALESMAN			\N";
   cout<<"-------------------------------------------------"<<endl;
   cout<<"penjualan salesman :"; cin >>pendapatan;
   cout<<"================================================="<<endl;
if(pendapatan>=0&&pendapatan<=2000000){
	jasa=500000;
   komisi = (0.1*pendapatan);
	total = komisi+jasa;
   }
else if (pendapatan<=2000000){
	jasa = 500000;
   komisi = (0.15*pendapatan );
   total = komisi+jasa;
   }
   else if(pendapatan<=5000000){
   jasa=1000000;
   komisi=(0.2*pendapatan);
   total=komisi+jasa;
   }
   else{
   	cout<<"TIDAK ADA KODE YANG SESUAI"; }
	cout<<"uang jasa : "<<jasa<<endl;
   cout<<"komisi	  : "<<komisi<<endl;
   cout<<"total	  : "<<total<<endl;
getch();}

