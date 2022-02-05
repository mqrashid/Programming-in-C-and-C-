/*
CH-230-A
a4 p10.[c]
Muhammad Qasim, Rashid
murashid@jacobs-university.de
*/

#include <stdio.h>
#include <math.h>

//passing by reference
void proddivpowinv(float a, float b, float *prod, float *div,
                   float *pwr, float *invb);
int main()
{
    float a, b, prod, div, pwr, invb;
    //Pointer variables are declared
    float *prod_ptr, *div_ptr, *pwr_ptr, *invb_ptr;

    prod_ptr = &prod;
    div_ptr = &div;
    pwr_ptr = &pwr;
    invb_ptr = &invb;

    //User input is sought
    scanf("%f", &a);
    scanf("%f", &b);

    //Function is called to perform the operations
    proddivpowinv(a, b, prod_ptr, div_ptr, pwr_ptr, invb_ptr);
    printf("product= %f\n", prod);
    printf("division= %f\n", div);
    printf("power a to b= %f\n", pwr);
    printf("inverse= %f\n", invb);
    return 0;
}

void proddivpowinv(float a, float b, float *prod, float *div, float *pwr, float *invb)
{ //returning using the reference
    *div = a / b;
    *prod = a * b;
    *pwr = pow(a, b);
    *invb = (float)1 / b;
}