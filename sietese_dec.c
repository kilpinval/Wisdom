#nclude <18f4550.h> //Libreria para usar el PIC18f4550.
#fuses HS,WDT,NOPROTECT,PUT,NOPBADEN //Configuracion de fusibles
#use delay (clock=12000000) //Fosc = 12MHz.
#BITE PORT_b=0xF81          //Identificador para el puerto b en la localidad 0xF81.
int i;                      //Variablei para el bluque FOR

void main(void){
    set_tris_bx00;          //Define port_b como salida
    disable_interrupts(GLOBAL); //todas las intrrupcones desactivadas.
    
    


while(TRUE){

    for(i=0;i<=9;++i){;
        delay_ms(500);          //Retardo de 500ms
        port_b=i;               //El valor de i se saca al Puerto B. i varia de 0 a 9.
    }


    }

}                                 
