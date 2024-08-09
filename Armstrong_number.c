//Armstrong number
#include<stdio.h>
int main(){
    int num=153;
    int temp=num;
    int rem,sum=0;
    while(num>0){
           rem=num%10;
           sum=sum+rem*rem*rem;
           num=num/10;
    }
    if(temp==sum){
        printf("armstrong no.");
    }
    else{
        printf("not armstrong no.");
    }
}