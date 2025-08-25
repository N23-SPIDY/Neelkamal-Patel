#include <stdio.h>  // header file for interaction with monitor and keyboard like i/o

int main() {
    int n;
    printf("Enter value of n: ");
    scanf("%d", &n); //Input to intger variable

    printf("Series: ");
    for (int i = 1; i <= n; i += 2) { //loop variable from 1 to user input with incerement of 2 for next conditon 
        printf("%d ", i); //printing the odd values 
    }
    printf("\n"); //printing a new line

    return 0;
}
