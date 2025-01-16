#libreria para usar el PIC18F4550
#fuses HS,WDT,NOPROTECT,PUTNOPBADEN //Configuracion de fusibles
#use delay(clock=) //Fosc=12MHz
#BYTE pord_d=0xF83 //Identificador para el puerto d en la localidad 0x83.
int i;              //Variable i, contador para el bucle FOR.
const int x[]={64,121,36,48,25,18,2,120,0,16}

void main(void)
{
    set_tris_d=0x00;
    disable interrups(GLOBAL);
    port_d = 64;

    while(TRUE)
    {
        for(i=0;i<=9;++i)

        {
            delay_ms = 500;
            port_d=x[i];
        
        }

    }

}
