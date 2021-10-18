//
// Jody Yuantoro ( 2021-147 )
// Informatics Engineering, Faculty of Engineering
// University of Muhammadiyah Malang
//

int reamur( int c ){
	printf(" Hasil konversi Celcius ke Reamur = %.1f\n", c + 273.15 );
}

int fahrenheit( int c ){
	printf(" Hasil konversi Celcius ke Fahrenheit = %.1f\n", ( c * 1.8 ) + 32 );
}

int kelvin( int c ){
	printf(" Hasil konversi Celcius ke Kelvin = %.1f\n", c + 273);
}

int all( int c ){
	reamur(c);
	fahrenheit(c);
	kelvin(c);
}
