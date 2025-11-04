#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "calculator.h"
#include "main-cpp.h"
#include "help-cpp.h"
void hello_text();
void help();
int main() {
    char main_input[256];
    hello_text();
    printf("Type help To See All The Commands\n");
    while (1) {
    fgets(main_input,sizeof(main_input),stdin);
    main_input[strcspn(main_input,"\n")] = '\0';
    if (strcmp(main_input,"help") == 0) {
        help();
    }
    if (strcmp(main_input,"calculate") == 0) {
        calculator();
    }
    }
}
