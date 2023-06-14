// PIC18F452 Configuration Bit Settings

// #pragma config statements should precede project file includes.
// Use project enums instead of #define for ON and OFF.

// CONFIG1H
#pragma config OSC = HSPLL      // Oscillator Selection bits (HS oscillator with PLL enabled/Clock frequency = (4 x FOSC))
#pragma config OSCS = OFF       // Oscillator System Clock Switch Enable bit (Oscillator system clock switch option is disabled (main oscillator is source))

// CONFIG2L
#pragma config PWRT = ON        // Power-up Timer Enable bit (PWRT enabled)
#pragma config BOR = OFF        // Brown-out Reset Enable bit (Brown-out Reset disabled)
#pragma config BORV = 20        // Brown-out Reset Voltage bits (VBOR set to 2.0V)

// CONFIG2H
#pragma config WDT = OFF        // Watchdog Timer Enable bit (WDT disabled (control is placed on the SWDTEN bit))
#pragma config WDTPS = 1        // Watchdog Timer Postscale Select bits (1:1)

// CONFIG3H
#pragma config CCP2MUX = ON     // CCP2 Mux bit (CCP2 input/output is multiplexed with RC1)

// CONFIG4L
#pragma config STVR = ON        // Stack Full/Underflow Reset Enable bit (Stack Full/Underflow will cause RESET)
#pragma config LVP = OFF        // Low Voltage ICSP Enable bit (Low Voltage ICSP disabled)

// CONFIG5L
#pragma config CP0 = OFF        // Code Protection bit (Block 0 (000200-001FFFh) not code protected)
#pragma config CP1 = OFF        // Code Protection bit (Block 1 (002000-003FFFh) not code protected)
#pragma config CP2 = OFF        // Code Protection bit (Block 2 (004000-005FFFh) not code protected)
#pragma config CP3 = OFF        // Code Protection bit (Block 3 (006000-007FFFh) not code protected)

// CONFIG5H
#pragma config CPB = OFF        // Boot Block Code Protection bit (Boot Block (000000-0001FFh) not code protected)
#pragma config CPD = OFF        // Data EEPROM Code Protection bit (Data EEPROM not code protected)

// CONFIG6L
#pragma config WRT0 = OFF       // Write Protection bit (Block 0 (000200-001FFFh) not write protected)
#pragma config WRT1 = OFF       // Write Protection bit (Block 1 (002000-003FFFh) not write protected)
#pragma config WRT2 = OFF       // Write Protection bit (Block 2 (004000-005FFFh) not write protected)
#pragma config WRT3 = OFF       // Write Protection bit (Block 3 (006000-007FFFh) not write protected)

// CONFIG6H
#pragma config WRTC = OFF       // Configuration Register Write Protection bit (Configuration registers (300000-3000FFh) not write protected)
#pragma config WRTB = OFF       // Boot Block Write Protection bit (Boot Block (000000-0001FFh) not write protected)
#pragma config WRTD = OFF       // Data EEPROM Write Protection bit (Data EEPROM not write protected)

// CONFIG7L
#pragma config EBTR0 = OFF      // Table Read Protection bit (Block 0 (000200-001FFFh) not protected from Table Reads executed in other blocks)
#pragma config EBTR1 = OFF      // Table Read Protection bit (Block 1 (002000-003FFFh) not protected from Table Reads executed in other blocks)
#pragma config EBTR2 = OFF      // Table Read Protection bit (Block 2 (004000-005FFFh) not protected from Table Reads executed in other blocks)
#pragma config EBTR3 = OFF      // Table Read Protection bit (Block 3 (006000-007FFFh) not protected from Table Reads executed in other blocks)

// CONFIG7H
#pragma config EBTRB = OFF      // Boot Block Table Read Protection bit (Boot Block (000000-0001FFh) not protected from Table Reads executed in other blocks)

#include <xc.h>
#include <pic18f452.h>

#define _XTAL_FREQ 4000000

// Definição dos pinos do sensor HC-SR04
#define TRIGGER_PIN RB0
#define ECHO_PIN RB1

// Função para enviar um pulso no pino de trigger
void sendTriggerPulse() {
    TRIGGER_PIN = 1;
    __delay_us(10);
    TRIGGER_PIN = 0;
}

// Função para medir a distância
unsigned int measureDistance() {
    unsigned int distance;
   
    // Envia um pulso de trigger
    sendTriggerPulse();
   
    // Aguarda o sinal de echo ser recebido
    while (!ECHO_PIN);
   
    // Inicia a contagem do tempo de duração do echo
    TMR1H = 0;
    TMR1L = 0;
    TMR1ON = 1;
   
    // Aguarda o sinal de echo ser desligado
    while (ECHO_PIN);
   
    // Calcula a duração do echo em microssegundos
    unsigned int echoTime = (TMR1H << 8) | TMR1L;
   
    // Calcula a distância em centímetros
    distance = echoTime / 58;
   
    return distance;
}

int a = 0;
void main()
{
    // Configuração dos pinos
    TRISB0 = 0; // Configura o pino RB0 como saída (trigger)
    TRISB1 = 1; // Configura o pino RB1 como entrada (echo)
   
    TRISD = 0b00000000;
    PORTD = 0;
    TRISA=0x07;
    ADCON1=0x02;
   
    // Configuração do timer1
    TMR1CS = 0; // Seleciona o clock interno como fonte do timer
    T1CKPS1 = 0; // Configura o prescaler do timer como 1:1
    T1CKPS0 = 0;
   
    while(1) {
        unsigned int distance = measureDistance();
        
        if (distance >= 5 && distance < 9) {
            PORTDbits.RD2 = 1;
            __delay_ms(100);
            PORTDbits.RD2 = 0;
            __delay_ms(100);
        } else if (distance >= 10 && distance < 19) {
            PORTDbits.RD2 = 1;
            __delay_ms(400);
            PORTDbits.RD2 = 0;
            __delay_ms(400);
        } else if (distance >= 20 && distance < 29) {
            PORTDbits.RD2 = 1;
            __delay_ms(800);
            PORTDbits.RD2 = 0;
            __delay_ms(800);
        } else if (distance <= 30) {
            PORTDbits.RD2 = 1;
            __delay_ms(1100);
            PORTDbits.RD2 = 0;
            __delay_ms(1100);
        } else {
            PORTDbits.RD2 = 0;
        }
    }
}