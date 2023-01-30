

/**
 * main.c
 */
#include "include.h"

///////////////////////// EXP 1 al habilitr y configurar UART3 y EXP 2 al recibir y enviar str
int main(void)
{
    SetSystemClock_80MHz(_25MHZ);
    Configurar_UART3(19200,_25MHZ);
    Configurar_GPIO();

    char data_str[16] = "";  //// arreglo donde se guardarán los str
 //   uint8_t duty=0;

    while(1U){
//////////////////////////// EXP1 -->leds de la tiva
/*
        char c;
        c= Rx_char();

        switch(c)
        {
        case 'r': {
            Tx_char('R');
            GPIOF->DATA  = 0x02; //R

            break;
                   }

        case 'g': {
            Tx_char('G');
            GPIOF->DATA  = 0x08; //g

          break;
                   }

        case 'b': {
            Tx_char('B') ;
            GPIOF->DATA  = 0x04; //b
            break;
                   }
        case 'T': {
            Tx_char('t') ;
            GPIOF->DATA  = 0x02;
            SysTick_ms(.00001);
            GPIOF->DATA  = 0x04;
            SysTick_ms(.00001);
            GPIOF->DATA  = 0x08;
            SysTick_ms(.00001);
            break;
                   }

        default:
            Tx_char('N') ;
             GPIOF->DATA  = 0x00;
            break;
        }
*/

 ///////////  invertir y recibir string EXP

        Rx_string2(data_str, sizeof(data_str) / sizeof(data_str[0])); //////recibir str
        uint32_t n = strlen(data_str);  ///longitud de lo recibido
        int j= 0;
        for(j=0; j<n; j++)
        {
            char strinv= data_str[strlen(data_str)-j-1];    ////longitud(5) -0-1 = 4 --> data_str[4]
            Tx_char(strinv);
           // Tx_char(enviar[strlen(enviar)-i-1]);
           char num=j+49; ////////+49 para enviarlo de int a ascii
            Tx_char(num);
          //  Tx_char(i+1);


        }
        /*
/////////////// recibir pwm -->práctica del pwm (practica)
        char c;
        c= Rx_char();

        switch(c)
        {
        case 'r': {
            data_str[0] = Rx_char();
            data_str[1] = Rx_char();
            data_str[2] = Rx_char();
            data_str[3] = '\0';
            duty= atoi(data_str);
            break;

        }

        }*/

    }
}

