#include<stdio.h>
#include<unistd.h>

int main() {
    printf("Hello World!\n");
    fork();
    printf("I am after forking");
    printf("\tI am process %d.\n", getpid());

    return 0;
}