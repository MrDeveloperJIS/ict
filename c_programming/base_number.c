//base number

#include <stdio.h>

binary(int n,int b){
    if(n==0) return 0;
    binary(n/b,b);
    printf("%d",n%b);
}

main(){
    int n,b=2;
    printf("Enter the decimal number: ");
    scanf("%d",&n);
    printf("The binary number is: ");
    binary(n,b);
    printf("\nThe octal number is: %o\n",n);
    printf("The hexa decimal number is: %x\n",n);

}
