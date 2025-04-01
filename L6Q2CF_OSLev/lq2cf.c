#include <stdio.h>

int main() {
    FILE *file;
    char buffer[100];

    // Create and write to neptunkod.txt
    file = fopen("neptunkod.txt", "w");
    if (file == NULL) {
        perror("Error opening file for writing");
        return 1;
    }
    fprintf(file, "Név: Király Gergő\nSzak: Program Tervező Informatika (PTI)\nNeptun kód: L6Q2CF\n");
    fclose(file);

    // Read and display the file content
    file = fopen("neptunkod.txt", "r");
    if (file == NULL) {
        perror("Error opening file for reading");
        return 1;
    }
    printf("A neptunkod.txt tartalma:\n");
    while (fgets(buffer, sizeof(buffer), file) != NULL) {
        printf("%s", buffer);
    }
    fclose(file);

    return 0;
}
