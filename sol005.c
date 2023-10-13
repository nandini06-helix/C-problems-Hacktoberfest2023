#include <stdio.h>
int main(){
    int num;
    printf("enter a positive number:");
    scanf("%d",&num);
    int fact=1;
    if(num==0){
        printf("The factorial of 0 is 1");
    }
    else{
        for(int i=1;i<=num;i++){
            fact=fact*i;
        }
        printf("The factorial of %d is %d",num,fact);
    }
}