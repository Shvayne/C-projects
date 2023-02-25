#include <stdio.h>
#include <stdlib.h>
#define incost 75
#define mincharge 120
/*a program that reads values for hours worked and cost of parts 
and print the charge.
puesdocode- prompt for cost of parts
prompt for hours worked
if no work needs to be done, charge = 75
if theres work , theres no charge for inspecting*/
int main(void)
{
    int c;
    double a, b;
    printf("how much parts?\n");
    scanf("%lf", &a);
    printf("how many hours?\n");
    scanf("%lf", &b);
    if (b <= 0)
    {
        c = mincharge;
        printf("your charge is $%d\n", c);
        else if (b > 0)
        c = incost + a;

    }
return;
}