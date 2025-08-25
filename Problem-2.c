#include <stdio.h>  // I/O header files for functions like scanf ,printf so computer can identify monitor keyborad like devices.

int main() {
    int n;
    printf("Enter value of n: ");
    scanf("%d", &n);   // Getting input as interger in an integer variable n 

    printf("Series: ");
    for (int i = 0; i < n; i++) {  //loop from 0 to the number entered by user 
        printf("%d ", 2*i + 1); // Printing the odds and multipling 2 with the loop value and adding 1 so we can get odd values.
    }
    printf("\n");  //printing a new line 

    return 0;
}
