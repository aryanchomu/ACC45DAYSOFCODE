#include <stdio.h>

int main()
{
    int t;
    printf("ENTER NO. OF STEPS: ");
    scanf("%d",&t);
    if (t<2000){
        printf("NOT GOOD FOR HEALTH");

    }else if(t=2000){
        printf("FINE FOR HEALTH");
    }else{
         printf(" GOOD FOR HEALTH ");
    }

    return 0;
} 