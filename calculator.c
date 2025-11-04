#include <stdio.h>
#include <string.h>
#include "addition-cpp.h"
#include "subtract-cpp.h"
#include "division-cpp.h"
#include "multiply-cpp.h"
void addition();
void subtract();
void division();
void multiply();
void calculator() {
    int first_number;
    int second_number;
    char op[64];
    printf("Enter Operator\n");
    fgets(op,sizeof(op),stdin);
    op[strlen(op)-1] = '\0';
    if (strcmp(op,"*") == 0) {
     multiply();
    }
    else if (strcmp(op,"+") == 0) {
     addition();
    }
    else if (strcmp(op,"-") == 0) {
     subtract();
    }
    else if (strcmp(op,"/") == 0) {
     division();
    }
    else{
        printf("Operator Not Found\n");
    }

}
