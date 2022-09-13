#include <stdio.h>
#include "moap_functions.c"

int main() {

    // parameters
    int p1 = 2802;
    int p2 = 3;
    int p3 = 13;
    int p4 = 17;
    int p5 = 48;
    int *y = &p1;

    // results
    int r1;
    int r2;
    int r3;
    //int r4;

    // user guesses
    int u1;
    int u2;
    int u3;
    int u4;

    // get numbers from the user
    printf("Enter number 1: ");
    scanf("%d",&u1);

    printf("Enter number 2: ");
    scanf("%d",&u2);

    printf("Enter number 3: ");
    scanf("%d",&u3);

    printf("Enter number 4: ");
    scanf("%d",&u4);

    // compute the numerical results r1 through r4
    /***** CORRECT THE CODE HERE TO CALL THE FUNCTIONS *****/
    r1 = algorithm_1();
    r2 = algorithm_2(p1, p2);
    r3 = algorithm_3(p3, p4);
    algorithm_4(p5, y);

    // print the results of your algorithms for debugging

    printf("Debug :: r1 = %d\n",r1);
    printf("Debug :: r2 = %d\n",r2);
    printf("Debug :: r3 = %d\n",r3);
    printf("Debug :: r4 = %d\n",*y);

    // compare the results to the user guesses
    if (r1 == u1) printf("Number 1 is correct.\n");
    else printf("Number 1 is not correct.\n");

    if (r2 == u2) printf("Number 2 is correct.\n");
    else printf("Number 2 is not correct.\n");

    if (r3 == u3) printf("Number 3 is correct.\n");
    else printf("Number 3 is not correct.\n");

    if (*y == u4) printf("Number 4 is correct.\n");
    else printf("Number 4 is not correct.\n");
}
