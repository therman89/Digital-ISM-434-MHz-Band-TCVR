/////////////////////////////////////
//  Generated Initialization File  //
/////////////////////////////////////

#include "compiler_defs.h"
#include "Si1060_defs.h"

// Peripheral specific initialization functions,
// Called from the Init_Device() function
void PCA_Init()
{
    PCA0CN    = 0x40;
    PCA0MD    &= ~0x40;
    PCA0MD    = 0x08;
    PCA0CPM0  = 0x42;
    PCA0CPH0  = 0x8A;
    PCA0CPL5  = 0x00;
    PCA0MD    |= 0x40;
}

void Timer_Init()
{
    TCON      = 0x50;
    TMOD      = 0x22;
    CKCON     = 0x08;
    TH0       = 0x5A;
    TH1       = 0x99;
}

void UART_Init()
{
    SCON0     = 0x10;
}

void ADC_Init()
{
    ADC0MX    = 0x01;
    ADC0CF    = 0xFD;
    ADC0CN    = 0x81;
    ADC0GTL   = 0x00;
}

void Voltage_Reference_Init()
{
    REF0CN    = 0x00;
}

void Port_IO_Init()
{
    // P0.0  -  Skipped,     Push-Pull,  Analog
    // P0.1  -  Skipped,     Push-Pull,  Analog
    // P0.2  -  Skipped,     Open-Drain, Digital
    // P0.3  -  CEX0 (PCA),  Open-Drain, Digital
    // P0.4  -  TX0 (UART0), Push-Pull,  Digital
    // P0.5  -  RX0 (UART0), Open-Drain, Digital
    // P0.6  -  Skipped,     Open-Drain, Digital
    // P0.7  -  Unassigned,  Open-Drain, Digital
    // P1.0  -  SCK  (SPI1), Open-Drain, Digital
    // P1.1  -  MISO (SPI1), Open-Drain, Digital
    // P1.2  -  MOSI (SPI1), Push-Pull,  Digital
    // P1.3  -  NSS  (SPI1), Open-Drain, Digital
    // P1.4  -  Unassigned,  Open-Drain, Digital
    // P1.5  -  Unassigned,  Open-Drain, Digital
    // P1.6  -  Unassigned,  Open-Drain, Digital
    // P1.7  -  Unassigned,  Open-Drain, Digital

    // P2.0  -  Unassigned,  Open-Drain, Digital
    // P2.1  -  Unassigned,  Open-Drain, Digital
    // P2.2  -  Unassigned,  Open-Drain, Digital
    // P2.3  -  Unassigned,  Open-Drain, Digital
    // P2.4  -  Unassigned,  Open-Drain, Digital
    // P2.5  -  Unassigned,  Open-Drain, Digital
    // P2.6  -  Unassigned,  Open-Drain, Digital
    // P2.7  -  Skipped,     Open-Drain, Digital

    P0MDIN    = 0xFC;
    P0MDOUT   = 0x13;
    P1MDOUT   = 0x04;
    P0SKIP    = 0x47;
    XBR0      = 0x01;
    XBR1      = 0x41;
    XBR2      = 0x40;
}

void Oscillator_Init()
{
    FLSCL     = 0x40;
    REG0CN    |= 0x10;  // Enable OSCBIAS bit in voltage regulator
    for (i = 0; i < 14; i++);  // Wait 4us before enabling oscillator
    OSCICN    |= 0x8F;
    CLKSEL    = 0x00;
}

void Interrupts_Init()
{
    IP        = 0x02;
    EIE1      = 0x08;
    EIP1      = 0x08;
    EIE2      = 0x08;
    IT01CF    = 0x02;
    IE        = 0x93;
}

// Initialization function for device,
// Call Init_Device() from your main program
void Init_Device(void)
{
    PCA_Init();
    Timer_Init();
    UART_Init();
    ADC_Init();
    Voltage_Reference_Init();
    Port_IO_Init();
    Oscillator_Init();
    Interrupts_Init();
}
