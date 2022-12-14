#include <stdio.h>

int main(int argc, char *argv[]) {
    // check number of arguments
    if (argc != 2) {
        fprintf(stderr, "Usage: %s <filename>\n", argv[0]);
        return 1;
    }
    
    // open the file
    FILE *stream = fopen(argv[1], "w");
    if (stream == NULL) {
        perror(argv[1]);
        return 1;
    }
    
    // read a line from stdin, write to the file
    int byte = 0;
    
    while ((byte = getchar()) != EOF) {
        fputc(byte, stream);
        if (byte == '\n') {
            break;
        }
    }
    
    // close file
    fclose(stream);

}
