//Steps of opening a file in c.
#include <stdio.h>

int main() {
    FILE *filePointer;
    char filename[] = "example.txt";
    char data[100];

    // Step 3: Open the file
    filePointer = fopen(filename, "r");

    // Step 4: Check for successful opening
    if (filePointer == NULL) {
        printf("File opening failed.\n");
        return 1; // Exit the program indicating failure
    }

    // Step 5: Perform file operations (read in this case)
    while (fgets(data, sizeof(data), filePointer) != NULL) {
        printf("%s", data);
    }

    // Step 6: Close the file
    fclose(filePointer);

    return 0;
}
