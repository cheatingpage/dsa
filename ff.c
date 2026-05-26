
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h> // sleep()

#define CHUNK (100000 * 1024 * 1024) // 10 MB

int main() {
    int count = 0;

    while (1) {
        char *ptr = (char *)malloc(CHUNK);
        if (!ptr) {
            printf("Stopped at %d chunks\n", count);
            break;
        }

        memset(ptr, 1, CHUNK); // actually use memory

        count++;
        printf("Using ~%d MB\n", count * 10);

 // slow growth so you can observe
    }

    return 0;
}