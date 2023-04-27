#include "simpleCalculations.c"

void calculate(char operator, double n1, double n2){
    if(operator == '+' || operator == '-' || operator == '*' || operator == 'x' || operator == 'X' || operator == '/' || operator == ':'){
        simplecalculate(operator, n1, n2);
    }
}