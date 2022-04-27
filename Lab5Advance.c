#include <stdio.h>
#define max 60

float secA(){

    char A[][max] = {"GAJI x 12 Bulan","ELAUN x 12 Bulan","BONUS","(+) PENDAPATAN LAIN"};
    float varA[4],sumA = 0;
    int i = 0,checking = 0;

    do{  
        printf("%s\n", A[i]);
        checking = scanf("%f",&varA[i]);
        fflush(stdin);
        if(checking != 1){
            puts("Sila masukkan nombor");   
            goto out;
        }else if(varA[i] < 0){
            puts("Sila masukkan >= 0");
            goto out;
        }else if(varA[i] >= 0){
            sumA += varA[i];
            i++;
        }
		out:;
    }while(i < 4);
    
    puts("JUMLAH PENDAPATAN (A) = ");
    printf("%0.2f\n",sumA);
    return sumA;
}

float secB(){
    puts("\nB) PERBELANJAAN YANG DIBENARKAN SETAHUN");

    char B[][max] = {"ISTERI RM3000.00 x bilangan isteri","ANAK 1000.00 x bilangan anak",
                    "IBU BAPA (Berdasarkan jumlah pemberian setahun)","PENDIDIKAN (Berdasarkan jumlah yang dibayar setahun)",
                    "PERUBATAN (Berdasarkan jumlah yang dibayar setahun)","TABUNG HAJI (Berdasarkan jumlah yang dibayar setahun)",
                    "(+)KWSP (Berdasarkan jumlah yang dibayar setahun)"};
    float varB[7],sumB = 0;
    int j = 0, checking = 0;
    do{
        printf("%s\n", B[j]);
        checking = scanf("%f",&varB[j]);
        fflush(stdin);
        if(j == 0){
            if(checking != 1){
                puts("Invalid, bukan nombor");
                goto out;
            }else if(varB[j] < 0 || varB[j] > 4){
                puts("Pastikan bilangan isteri dalam julat (0-4)"); 
                goto out;
            }else{
                sumB += 3000*varB[j];
                j++;
            }   
        }else if(j == 1){
            if(checking != 1){
                puts("Invalid, bukan nombor");
                goto out;
            }else if(varB[j] < 0 || varB[j] > 10){
                puts("Pastikan Bilangan anak dalam julat (0-10)"); 
                goto out;
            }else{
                sumB += 1000*varB[j];
                j++;
            }
        }else{
            if(checking != 1){
                puts("Invalid, bukan nombor");
                goto out;
            }else if(varB[j] < 0){
                puts("Sila masukkan nombor yang positive sahaja"); 
                goto out;
            }else{
                sumB += varB[j];
                j++;
            }
        }
        out:;
    }while(j < 7);

    puts("JUMLAH PERBELANJAAN (B) =");
    printf("%0.2f\n",sumB+9000);
    return sumB+9000;
}

int main(){

    int moreUser = 0,user = 1;
    float sumZakatSetahun = 0;

    do{
        printf("\n\t KAEDAH PENAKSIRAN SENDIRI\n\tKALKULATOR ZAKAT PENDAPATAN\n");

        float valueA = secA();
        puts("\n--------------------------------------------------");
        float  valueB = secB();
        puts("\n--------------------------------------------------");

        float pendapatan = valueA - valueB,zakatSetahun = pendapatan*0.025,zakatSebulan = zakatSetahun/12;

        char otherSec[][max] = {"C) PENDAPATAN KASAR SETAHUN","PENDAPATAN (A) - PERBELANJAAN (B)",
                                "D) PENDAPATAN KASAR SETAHUN","PENDAPATAN YANG DIKIRA ZAKAT x 0.025 =",
                                "E) JUMLAH ZAKAT SEBULAN","UMLAH ZAKAT SETAHUN / 12 = "};
        float valueOth[3] = {pendapatan, zakatSetahun,zakatSebulan};

        for(int i = 0, j = 0;i < 6; i+=2,j++){
            printf("\n%s\n",otherSec[i]);
            printf("%s\n",otherSec[i+1]);
            printf("%0.2f\n",valueOth[j]);
        }
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

