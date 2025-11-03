#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "calculator.h"
int main() {
    char main_input[256];
    printf("Welcome To All In One Tools\n");
    printf("Type help To See All The Commands\n");
    fgets(main_input,sizeof(main_input),stdin);
    if (strcmp(main_input,"help")) {
        printf("1 : calculate\n");
    }
}
