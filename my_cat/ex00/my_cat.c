#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    for(int i=1; i<argc; i++) {
        FILE *fp;
        fp=fopen(argv[i], "r");

        char a = getc(fp);
        while (a!=EOF) {
            printf("%c", a);
            a=getc(fp);
        }
    }
}