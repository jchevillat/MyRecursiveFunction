#include <stdio.h>
#include <stdlib.h>


/** \brief Function to compute the factorial of a number f
 *
 * \param f int integer that must be factorialized
 * \return int the result
 *
 */
int factorial(int f) {
    if (f == 1) {
        return 1;
    }
    return (f * factorial((f-1)));
}

int main()
{
    int fact=4;
    // Display a comment
    printf("%d! = %d \n", fact, factorial(fact));
    return 0;
}
