//base calculator

#include <stdio.h>

calculate(int n,int b){
    if(n==0) return 0;
    calculate(n/b,b);
    printf("%d",n%b);
}

main(){
    int n,b;
    printf("Enter the number: ");
    scanf("%d",&n);
    printf("Enter the base: ");
    scanf("%d",&b);
    printf("The number is: ");
    calculate(n,b);
}
