#include <stdio.h>
#include <string.h>

int main() {
    FILE *inputFile = fopen("cars.csv", "r");
    if (inputFile == NULL) {
        printf("Error opening file.\n");
        return 1;
    }

    char line[500]; // Assuming maximum length of a line in cars.csv is 500 characters

    // Printing header
    printf("Car_ID\tBrand\tModel\tYear\n");

    // Skipping the header line in cars.csv
    fgets(line, sizeof(line), inputFile);

    // Reading each line from cars.csv
    while (fgets(line, sizeof(line), inputFile) != NULL) {
        int car_id, year, kilometers_driven;
        char brand[50], model[50];

        // Parsing each field from the line
        sscanf(line, "%d,%[^,],%[^,],%d,%d,%*[^,],%*[^,],%*[^,],%*[^,],%*[^,],%*[^,],%*[^,],%*[^,],%d", &car_id, brand, model, &year, &kilometers_driven);
        
        // Checking if kilometers driven is greater than or equal to 40000
        if (kilometers_driven >= 40000) {
            printf("%d\t%s\t%s\t%d\n", car_id, brand, model, year);
        }
    }

    fclose(inputFile);

    return 0;
}
