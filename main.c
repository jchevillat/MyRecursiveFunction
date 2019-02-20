#include <stdio.h>
#include <stdlib.h>


/** \brief Function to compute the factorial of a number f
 *
 * \param f int integer that must be factorialized
 * \return int the result
 *
 */
int factorial(int f) {
    int total=f;
    for (int i=f-1; i>0; i--) {
        total=total * i;
    }
    return total;
}

int main()
{
    int fact=4;
    printf("%d! = %d \n", fact, factorial(fact));
    return 0;
}
