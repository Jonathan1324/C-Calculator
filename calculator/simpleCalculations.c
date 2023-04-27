double simplecalculate(char operator, double n1, double n2){
    double result;
    if(operator == '+'){
        result = n1 + n2;
    } else if(operator == '-'){
        result = n1 - n2;
    } else if(operator == '*' || operator == 'x' || operator == 'X'){
        result = n1 * n2;
    } else if(operator == '/' || operator == ':'){
        result = n1 / n2;
    }
    
    printf("%lf %c %lf = %lf", n1, operator, n2, result);
}