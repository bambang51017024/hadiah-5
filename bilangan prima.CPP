#include<iostream.h>
#include<conio.h>
main() {
int nilai,jumlah,a;
	cout <<"masukkan nilai = "; cin>>nilai;
   	jumlah=0;
      for (a=1; a<=nilai;a++)
      if (nilai%a==0)
      jumlah++;
      if (jumlah==2)
      cout<<"nilai yang anda inputkan bilangan prima\n";
      else
      cout<<"nilai yang anda inputkan bukan bilangan prima\n";
   getch();
   }

