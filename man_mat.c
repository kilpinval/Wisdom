*/Manejo de teclado matricial y visualizacion en dysplay de 7 segmentos */
#include <18f4550.h>
#fuses HS,WDT,NOPROTECT,NOPUT,NOPBADEN//Configuracion de fusibles
#use delay (clock)=12000000 //Fosc=12MHZ
#BYTE port_b=0xF81 //Identificador para el puerto b en la localidad 0xF81
#BYTE port_d=0xF83 //Identificador para el puerto d en la localidad 0xF83.
#BIt F0=0xF83.0			//Asigna en la localidad 0x83 bit 0 a la variable FA.
#BIT F!=0xF83.1			//Asigma en la localidad 0x83.1 bit 1 a la variable FB.
#BIT F2=0xF83.2			//Asigna en al localidad 0x83.2 bit 2 a la variable Fc.

