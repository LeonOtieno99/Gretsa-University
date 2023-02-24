
#include<stdio.h>
/*print Farenheit-celsius table
for fahr = 0, 20, ..., 300*/
main()
{
    printf("*******Farenheit-Celsius table*********\n");
    float fahr, celsius;
    float lower, upper, step;

    lower = 0;  /*lower limit of temperature*/
    upper = 300; /*upper limit*/
    step = 20; /*step size*/

    fahr = lower;
    while(fahr <= upper) {
        celsius = (5.0/9.0) * (fahr-32.0);
        printf("%3.0f\t%6.1f\n", fahr, celsius);
        fahr = fahr + step;
    }
}
