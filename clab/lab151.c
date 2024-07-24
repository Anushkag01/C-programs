#include <stdio.h>
#include <string.h>

int main() {
    FILE *inputFile = fopen("cars.csv", "r");
    FILE *outputFile = fopen("car_details.csv", "w");
    if (inputFile == NULL || outputFile == NULL) {
        printf("Error opening files.\n");
        return 1;
    }

    fprintf(outputFile, "car_id,brand,model\n");

    char line[500]; // Assuming maximum length of a line in cars.csv is 500 characters

    // Skipping the header line in cars.csv
    fgets(line, sizeof(line), inputFile);

    // Reading each line from cars.csv
    while (fgets(line, sizeof(line), inputFile) != NULL) {
        char fuel_type[20], brand[50], model[50];
        int car_id;
        // Parsing each field from the line
        sscanf(line, "%d,%[^,],%[^,],%*d,%*d,%[^,],%*s", &car_id, brand, model, fuel_type);
        // Checking if the fuel type is "Petrol"
        if (strcmp(fuel_type, "Petrol") == 0) {
            fprintf(outputFile, "%d,%s,%s\n", car_id, brand, model);
        }
    }

    fclose(inputFile);
    fclose(outputFile);

    printf("Details of cars with fuel type 'Petrol' saved to car_details.csv\n");

    return 0;
}

