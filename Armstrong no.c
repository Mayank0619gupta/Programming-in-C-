#include<stdio.h>
int main(){
    int i, sum=0, original;
    printf("Enter the number to check: ");
    scanf("%d",&i); 
    original = i;
    while(i>0){
        sum = sum + (i%10) * (i%10) * (i%10);
        i=i/10;
        
    }
    if(original == sum){
        printf("The entered number is armstrong");
    }else{
        printf("Entered number is not armstrong");
    }
    return 0;
}
