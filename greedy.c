#include <cs50.h>
#include <stdio.h>
#include <math.h>

int main(void)

{
    float input1, input2;
    int qi1, qi2, di1, di2, ni1, ni2, output, input3;
    printf("how much?");
    input1 = get_float();
    input2 = input1*100;
    
    input3 = (int) round(input2);
    
    qi1 = input3/25;
    qi2 = input3 - qi1*25;
   
    di1 = qi2/10;
    di2 = qi2 - di1*10;
    
    ni1 = di2/5;
    ni2 = di2 - ni1*5;

    //pi1 = ni2/5;
    //pi2 = ni2 - pi1;
    
    output = qi1 + di1 + ni1 + ni2;
    printf("min: %i\n", output);
}
