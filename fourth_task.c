#include <stdio.h>
#include <ctype.h>

int main() {
    FILE *inputFile = fopen("input.txt", "r");
    FILE *outputFile = fopen("output.txt", "w");

    if (inputFile == NULL) {
        printf("Error opening input file.\n");
        return 1;
    }
    if (outputFile == NULL) {
        printf("Error opening output file.\n");
        fclose(inputFile);
        return 1;
    }

    int ch;
    while ((ch = fgetc(inputFile)) != EOF) {
        if (islower(ch)) {
            ch = toupper(ch);
        }
        fputc(ch, outputFile);
    }

    fclose(inputFile);
    fclose(outputFile);

    printf("File conversion complete. Output written to 'output.txt'.\n");

    return 0;
}
