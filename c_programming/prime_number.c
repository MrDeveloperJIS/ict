//prime number

#include<stdio.h>

main(){
    int n,i,j,x;

    printf("Enter the upper limit: ");
    scanf("%d",&n);

    if(n<1) printf("Invalid entry. Try again.\n");

    printf("Series of prime numbers upto %d are: \n",n);

    for(i=2;i<n;i++){
        x=1;
        for(j=2;j<i;j++)
            if(i%j==0)
                x=0;
        if(x!=0)
            printf("%d \n",i);
    }
}
