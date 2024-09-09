#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    float C = 14.5;
    scanf("%f", &C);  
    float R = 4.0/5.0 * C;
    float F = 9.0/5.0 * C + 32.0;
    float K = C + 273.0;
    printf("%.5f ", R);  
    printf("%.5f ", F);  
    printf("%.5f ", K);
    return 0;
}
