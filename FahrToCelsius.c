
#include <stdio.h>

int main() {
    int fahr, celsius;
    for(fahr = 0; fahr <= 300; fahr = fahr + 20){
        celsius = 5*(fahr - 32)/9;
        printf("%d\t%d\n", fahr, celsius);
    }

    int upper, lower, step;
    lower = 0;
    upper = 300;
    step = 20;
    while(lower <= upper)
    {
        celsius = 5*(lower - 32)/9;
        printf("%d\t%d\n", lower, celsius);
        lower = lower + step;
        
    }
}