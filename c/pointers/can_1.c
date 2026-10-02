#include <stdio.h>
#include <stdint.h>

typedef struct
{
    uint32_t id;
    uint8_t data[8];
} CanFrame;

int main(void)
{
    /* 1. ECU has determined the physical temperature */
    int8_t coolantTemp = -10;

    /* 2. Encode temperature for CAN */
    uint8_t rawTemp = (uint8_t)(coolantTemp + 40);

    /* 3. ECU creates CAN frame */
    CanFrame frame = {
        .id = 0x123,
        .data = {0, 0, rawTemp, 0, 0, 0, 0, 0}
    };

    /* 4. Receiving application extracts CAN byte */
    const uint8_t *ptr = frame.data;

    uint8_t receivedRawTemp = ptr[2];

    /* 5. Decode CAN value */
    int temperature = (int)receivedRawTemp - 40;

    /* 6. Human-readable output */
    printf("Coolant Temperature: %d °C\n", temperature);

    return 0;
}