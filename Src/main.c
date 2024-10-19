#include <stdio.h>
#include <stdint.h>
#include "RNG.h"
#include "UART.h"

#define RANDOM_NUMBER_LENGTH 512

int main()
{
    RNG_Init();
    uint8_t buffer[RANDOM_NUMBER_LENGTH];
    RNG_GenerateRandom(buffer, RANDOM_NUMBER_LENGTH);

    printf("Random Number: ");
    for (int i = 0; i < RANDOM_NUMBER_LENGTH; i++)
    {
        printf("%02X", buffer[i]);
    }
    printf("\n");

    return 0;
}
