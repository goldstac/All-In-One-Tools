#include <stdio.h>
#include <string.h>
#include "currency_converter.h"
void currency_convert() {
    float calculate;
    float converter;
 printf("Welcome To Currency Converter\n");
 printf("Options\n");
 printf("--------------------------\n");
 printf("1 : USD - AED\n");
 printf("2 : USD - CAD\n");
 printf("3 : USD - GBP\n");
 int input;
 printf("-------------------------\n");
 printf("Choose Option\n");
 scanf("%d",&input);
 if (input == 1) {
 printf("Enter AMT :\n");
 scanf("%f",&converter);
 calculate = converter * 3.67;
 printf("%.4f = %.4f\n",converter,calculate);
 }
 else if (input == 2) {
 printf("Enter AMT :\n");
 scanf("%f",&converter);
 calculate = converter * 1.41;
 printf("%.4f = %.4f\n",converter,calculate);
 }
 else if (input == 3) {
 printf("Enter AMT :\n");
 scanf("%f",&converter);
 calculate = converter * 0.77;
 printf("%.4f = %.4f\n",converter,calculate);
 }
 else {
    printf("Number Not Found\n");
 }
}
