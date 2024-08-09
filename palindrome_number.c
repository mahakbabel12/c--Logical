//palindrome number
#include<stdio.h>
int main(){
    int n=121;
    int temp=n;
    int rem,sum=0;
    while(n>0){
        rem=n%10;
        sum=sum*10+rem;
        n=n/10;
    }
    if(temp==sum){
        printf("palindrome no.");
    }
    else{
        printf("not palindrome no");
    }
    return 0;
}