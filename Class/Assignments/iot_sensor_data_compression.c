/* iot_sensor_data_compression.c
   IoT Sensor Data Compression using bitwise shifts

   Requirements:
   - Input integer temperature readings
   - Encode using left shift (<< 2)
   - Decode using right shift (>> 2)
   - Track reading count and show encoded + decoded values
   - Display average every 5 readings using modulo (%)
   - Ensure no overflow if the temperature is above 64°C
*/

#include <stdio.h>

int main(void) {
    int temperature;
    int encoded, decoded;
    int count = 0;
    int sum = 0;
    char choice;

    printf("=== IoT Sensor Data Compression ===\n\n");

    do {
        // Input temperature with constraint
        printf("Enter temperature reading (<= 64°C): ");
        if (scanf("%d", &temperature) != 1) {
            while (getchar() != '\n'); // clear invalid input
            temperature = 65;           // force retry
        }

        if (temperature > 64) {
            printf("Temperature too high! No encoding done.\n");
        } else {
            // Encode using left shift by 2 bits
            // e.g., T << 2 is basically T * 4
            encoded = temperature << 2;

            // Decode using right shift by 2 bits
            decoded = encoded >> 2;

            // Track count and sum for average
            count++;
            sum += decoded;

            // Show values
            printf("Encoded value: %d\n", encoded);
            printf("Decoded value: %d\n", decoded);

            // Every 5 readings, show average
            if (count % 5 == 0) {
                double avg = (double)sum / count;
                printf("Average after %d readings: %.2f\n", count, avg);
            }
        }

        // Ask user to continue
        while (getchar() != '\n'); // clear leftover
        printf("Do you want to enter another reading? (y/n): ");
        choice = getchar();
        while (getchar() != '\n'); // clear leftover

        printf("\n");
    } while (choice == 'y' || choice == 'Y');

    printf("Exiting IoT Sensor Data Compression.\n");
    return 0;
}

