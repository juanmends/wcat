#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {

    int i = 1;

    if (argc==1) {
        exit(0);
    }

    do {
        
        FILE *fp = fopen(argv[i], "r");

        if (fp == NULL) {
            printf("wcat: cannot open file\n");
            exit(1);
        }

        char buffer[1024];
        
        while(fgets(buffer, 1024, fp) != NULL) {
            printf("%s", buffer);
        }

        i++;
    } while (i < argc);

    return 0;
}