#include <stdio.h>

int main(){

   int moreUser = 0,user = 1;
   float sumZakatSetahun = 0;

   do{
      printf("\n\t KAEDAH PENAKSIRAN SENDIRI\n\tKALKULATOR ZAKAT PENDAPATAN\n");

      float gaji,elaun, bonus, pendapatanLain,sumA;
      int checking = 0;

      puts("\nA) PENDAPATAN KASAR SETAHUN");

      puts("GAJI x 12 Bulan");
      checking = scanf("%f", &gaji);
      fflush(stdin);
      while(checking != 1)
      {
         out:
         printf("Sila masukkan nombor \n");
         puts("GAJI x 12 Bulan");
         checking = scanf("%f", &gaji);
         fflush(stdin);
      }
            
      while(gaji < 0)
      {
         printf("Sila masukkan >= 0\n");
         puts("GAJI x 12 Bulan");
         checking = scanf("%f", &gaji);
         fflush(stdin);
         if(checking != 1){
            goto out;
         }
      }

      puts("ELAUN x 12 Bulan");
      checking = scanf("%f", &elaun);
      fflush(stdin);
      while(checking != 1)
      {
         out2:
         printf("Sila masukkan nombor \n");
         puts("ELAUN x 12 Bulan");
         checking = scanf("%f", &elaun);
         fflush(stdin);
      }
            
      while(elaun < 0)
      {
         printf("Sila masukkan >= 0\n");
         puts("ELAUN x 12 Bulan");
         checking = scanf("%f", &elaun);
         fflush(stdin);
         if(checking != 1){
            goto out2;
         }
      }

      puts("BONUS x 12 Bulan");
      checking = scanf("%f", &bonus);
      fflush(stdin);
      while(checking != 1)
      {
         out3:
         printf("Sila masukkan nombor \n");
         puts("BONUS x 12 Bulan");
         checking = scanf("%f", &bonus);
         fflush(stdin);
        }
            
      while(bonus < 0)
      {
         printf("Sila masukkan >= 0\n");
         puts("BONUS x 12 Bulan");
         checking = scanf("%f", &bonus);
         fflush(stdin);
         if(checking != 1){
            goto out3;
         }
      }

      puts("(+) PENDAPATAN LAIN x 12 Bulan");
      checking = scanf("%f", &pendapatanLain);
      fflush(stdin);
      while(checking != 1)
      {
         out4:
         printf("Sila masukkan nombor \n");
         puts("(+) PENDAPATAN LAIN x 12 Bulan");
         checking = scanf("%f", &pendapatanLain);
         fflush(stdin);
      }
            
      while(pendapatanLain < 0)
      {
         printf("Sila masukkan >= 0\n");
         puts("(+) PENDAPATAN LAIN x 12 Bulan");
         checking = scanf("%f", &pendapatanLain);
         fflush(stdin);
         if(checking != 1){
            goto out4;
         }
      }

      puts("JUMLAH PENDAPATAN (A) = ");

      sumA = gaji+elaun+bonus+pendapatanLain;
      printf("%0.2f\n",sumA);
   
      printf("\n--------------------------------------------------");

      int noIsteri, noAnak;
      float ibuBapa, pendidikan, perubatan, haji, KWSP;
      float sumB;

      puts("\nB) PERBELANJAAN YANG DIBENARKAN SETAHUN");

      puts("ISTERI RM3000.00 x bilangan isteri");
      checking = scanf("%d", &noIsteri);
      fflush(stdin);
      while(checking != 1)
      {
         out5:
         printf("Sila masukkan nombor \n");
         puts("ISTERI RM3000.00 x bilangan isteri");
         checking = scanf("%d", &noIsteri);
         fflush(stdin);
      }
      while(noIsteri < 0 || noIsteri > 4)
      {
         puts("Pastikan bilangan isteri dalam julat (0-4)"); 
         puts("ISTERI RM3000.00 x bilangan isteri");
         checking = scanf("%d", &noIsteri);
         fflush(stdin);
         if(checking != 1){
            goto out5;
         }
      }

      puts("ANAK 1000.00 x bilangan anak");
      checking = scanf("%d", &noAnak);
      fflush(stdin);
      while(checking != 1)
      {
         out6:
         printf("Sila masukkan nombor \n");
         puts("ANAK 1000.00 x bilangan anak");
         checking = scanf("%d", &noAnak);
         fflush(stdin);
      }
      while(noAnak < 0 || noAnak > 10)
      {
         puts("Pastikan Bilangan anak dalam julat (0-10)"); 
         puts("ANAK 1000.00 x bilangan anak");
         checking = scanf("%d", &noAnak);
         fflush(stdin);
         if(checking != 1){
            goto out6;
         }
      }

      puts("IBU BAPA x 12 Bulan");
      checking = scanf("%f", &ibuBapa);
      fflush(stdin);
      while(checking != 1)
      {
         out7:
         printf("Sila masukkan nombor \n");
         puts("IBU BAPA x 12 Bulan");
         checking = scanf("%f", &ibuBapa);
         fflush(stdin);
      }
      while(ibuBapa < 0)
      {
         printf("Sila masukkan >= 0\n");
         puts("IBU BAPA x 12 Bulan");
         checking = scanf("%f", &ibuBapa);
         fflush(stdin);
         if(checking != 1){
            goto out7;
         }
      }

      puts("PENDIDIKAN x 12 Bulan");
      checking = scanf("%f", &pendidikan);
      fflush(stdin);
      while(checking != 1)
      {
         out8:
         printf("Sila masukkan nombor \n");
         puts("PENDIDIKAN x 12 Bulan");
         checking = scanf("%f", &pendidikan);
         fflush(stdin);
      } 
      while(pendidikan < 0)
      {
         printf("Sila masukkan >= 0\n");
         puts("PERUBATAN x 12 Bulan");
         checking = scanf("%f", &perubatan);
         fflush(stdin);
         if(checking != 1){
            goto out8;
         }
      }

      puts("PERUBATAN x 12 Bulan");
      checking = scanf("%f", &perubatan);
      fflush(stdin);
      while(checking != 1)
      {
         out9:
         printf("Sila masukkan nombor \n");
         puts("PERUBATAN x 12 Bulan");
         checking = scanf("%f", &perubatan);
         fflush(stdin);
      }
      while(perubatan < 0)
      {
         printf("Sila masukkan >= 0\n");
         puts("PERUBATAN x 12 Bulan");
         checking = scanf("%f", &perubatan);
         fflush(stdin);
         if(checking != 1){
            goto out9;
         }
      }

      puts("TABUNG HAJI x 12 Bulan");
      checking = scanf("%f", &haji);
      fflush(stdin);
      while(checking != 1)
      {
         out10:
         printf("Sila masukkan nombor \n");
         puts("TABUNG HAJU x 12 Bulan");
         checking = scanf("%f", &haji);
         fflush(stdin);
      } 
      while(haji < 0)
      {
         printf("Sila masukkan >= 0\n");
         puts("TABUNG HAJI x 12 Bulan");
         checking = scanf("%f", &haji);
         fflush(stdin);
         if(checking != 1){
            goto out10;
         }
      }

      puts("(+) KWSP x 12 Bulan");
      checking = scanf("%f", &KWSP);
      fflush(stdin);
      while(checking != 1)
      {
         out11:
         printf("Sila masukkan nombor \n");
         puts("(+)KWSP x 12 Bulan");
         checking = scanf("%f", &KWSP);
         fflush(stdin);
      }
      while(KWSP < 0)
      {
         printf("Sila masukkan >= 0\n");
         puts("(+)KWSP x 12 Bulan");
         checking = scanf("%f", &KWSP);
         fflush(stdin);
         if(checking != 1){
            goto out11;
         }
      }

      puts("JUMLAH PERBELANJAAN (B) =");

      sumB = 9000 + noIsteri*3000 + noAnak*1000 + ibuBapa+pendidikan+perubatan+haji+KWSP;
      printf("%0.2f\n",sumB);

      printf("\n--------------------------------------------------");

      puts("\nC) PENDAPATAN KASAR SETAHUN");
      puts("PENDAPATAN (A) - PERBELANJAAN (B)");
      float pendapatan = sumA - sumB;
      printf("%0.2f\n",pendapatan);

      puts("\nD) PENDAPATAN KASAR SETAHUN");
      puts("PENDAPATAN YANG DIKIRA ZAKAT x 0.025 =");
      float zakatSetahun = pendapatan*0.025;
      printf("%0.2f\n",zakatSetahun);

      printf("\nE) JUMLAH ZAKAT SEBULAN");
      puts("UMLAH ZAKAT SETAHUN / 12 = ");
      float zakatSebulan = zakatSetahun/12;
      printf("%0.2f\n",zakatSebulan);

      printf("\n\t ZAKAT YANG WAJIB");
      printf("\n\t RM %0.2f SEBULAN",zakatSebulan);

      sumZakatSetahun += zakatSetahun;

      puts("\nAda lagi user ? (1:Yes,0:No) ");
      scanf("%d",&moreUser);
      if(moreUser == 1){
         user++;
      }
   }while(moreUser == 1);

   printf("Jumlah zakat yang diterima MAIJ : %0.2f\n",sumZakatSetahun);
   printf("Bilangan pembayar zakat : %d",user);
}    
