#include <stdio.h>
#include <stdlib.h>

void PrintFibb(int n){
    if(n>0){
        static int n1 = 0, n2= 1,n3;
         /**< Static variable has a lifetime of a program that means this variable update there value everytime th eprogram is run
         so here everytime when the PrintFibb function is called this variale intialise new values by deleting the old ones, does it
         saves a lot of memory */
        n3 = n1 + n2;
        n1 = n2;
        n2 = n3;
        printf("%d\n",n3);
        PrintFibb(n-1);
    }
}

int main()
{
    int n;
    printf("Enter a num:");
    scanf("%d",&n);
    printf("Fibbonaci series:\n");
    printf("%d\n%d\n",0,1);

    PrintFibb(n-2);

    return 0;
}
