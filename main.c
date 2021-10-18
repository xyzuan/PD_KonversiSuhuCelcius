//
// Jody Yuantoro ( 2021-147 )
// Informatics Engineering, Faculty of Engineering
// University of Muhammadiyah Malang
//

// Library
#include <stdio.h>
#include <conio.h>
#include "suhu.h"

int main(){
	
	int convsuhu;
	
	// Variabel
	int c;
	
	// Main Menu
	main:
	printf("================================================\n");
	printf("            Program Konversi Suhu (C)           \n");
	printf("================================================\n");
	printf(" 1. Reamur\n");
	printf(" 2. Fahrenheit\n");
	printf(" 3. Kelvin\n");
	printf(" 4. Semua\n");
	printf("================================================\n");
	printf("Masukkan pilihan anda : ");
	scanf("%d", &convsuhu);

	switch (convsuhu) {
		// Reamur
		case 1:
			system("cls");
			printf("===================================\n");
			printf("==      Konversi ke Reamur      ===\n");
			printf("===================================\n");
			printf(" Masukkan Suhu Celcius : ");
  	   		scanf("%d", &c);
  	   		/* Output func.reamur */
   		  	printf("\n");
  	   		printf(" Output: \n");
  	   		reamur(c);
			break;
		
		// Fahrenheit
		case 2:
			system("cls");
			printf("===================================\n");
			printf("==    Konversi ke Fahrenheit    ===\n");
			printf("===================================\n");
			printf(" Masukkan Suhu Celcius : ");
  	   		scanf("%d", &c);
  	   		/* Output func.fahrenheit */
   		  	printf("\n");
  	   		printf(" Output: \n");
  	   		fahrenheit(c);
			break;
		
		// Kelvin
		case 3:
			system("cls");
			printf("===================================\n");
			printf("==      Konversi ke Kelvin      ===\n");
			printf("===================================\n");
			printf(" Masukkan Suhu Celcius : ");
  	   		scanf("%d", &c);
  	   		/* Output func.kelvin */
   		  	printf("\n");
  	   		printf(" Output: \n");
  	   		kelvin(c);
			break;
		// Semua
		case 4:
			system("cls");
			printf("===================================\n");
			printf("==      Konversi ke R,F,K       ===\n");
			printf("===================================\n");
			printf(" Masukkan Suhu Celcius : ");
   		  	scanf("%d", &c);
  	   		/* Output func.kelvin */
   		  	printf("\n");
  	   		printf(" Output: \n");
  	   		all(c);
			break;
		default:
			system("cls");
			printf("Format input salah. . .\n");
			goto main;
			break;	
	}

	/////////////
	// End Msg //
	/////////////
	printf("\n");
	printf("==================================================\n");
	printf("												  \n");
	printf(" Developed by:									  \n");
	printf(" Jody Yuantoro ( 2021-147 )						  \n");
	printf(" Informatics Engineering, Faculty of Engineering  \n");
	printf(" University of Muhammadiyah Malang				  \n");
	printf("												  \n");

	printf("==================================================\n");
	printf(" Tekan tombol apapun untuk kembali ke menu awal.. \n");	
	printf("==================================================\n");
	
	getch();
	system("cls");
	goto main;
}