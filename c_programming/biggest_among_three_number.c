//biggest number among three number

#include <stdio.h>

main(){
    int x,y,z;
    printf("Enter three number:\n");
    scanf("%d %d %d",&x,&y,&z);
    if(x>y && x>z) printf("%d is the bigger number\n",x);
    else if(x<y && y>z) printf("%d is the bigger number\n",y);
    else printf("%d is the bigger number\n",z);
}
