#include <stdio.h>

int main() {
    int num1, num2, num3 ;

    printf("Enter three numbers: ");
    scanf("%d %d %d", &num1, &num2, &num3);
    if (num1>num2){
        if (num1>num3)
            printf("a is greatest");
        else
            printf("b is greatest");


        }
        else{
            if (num2>num3)
                printf("b is gresatest");

            
            else
                printf("c is greatest");
            

        }
        
    
return 0;
}