#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "calculator.h"
int main() {
    char main_input[256];
    printf("Welcome To All In One Tools\n");
    printf("Type help To See All The Commands\n");
    while (1) {
    fgets(main_input,sizeof(main_input),stdin);
    main_input[strcspn(main_input,"\n")] = '\0';
    if (strcmp(main_input,"help") == 0) {
        printf("1 : calculate\n");
    }
    if (strcmp(main_input,"calculate") == 0) {
        calculator();
    }
    }
}
