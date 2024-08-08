/* s :
	w :with third variable number swap 
	o :without third variable number swap 

input is not valid */

#include<stdio.h>
int main(){
    char s;
    printf("enter the character:");
    scanf("%c",&s);
    if(s=='w')
    {
        int a =10;
        int b=20;
        int temp;
        printf("value of a :%d\n",a);
        printf("value of b :%d\n",b);
        temp=a;
        a=b;
        b=temp;
        printf("value of a after swap:%d\n",a);
        printf("value of b after swap :%d\n",b);
    }
    if(s=='o'){
        int a =10;
        int b=20;
        printf("value of a :%d\n",a);
        printf("value of b :%d\n",b);
        a=a+b;
        b=a-b;
        a=a-b;
        printf("value of a after swap:%d\n",a);
        printf("value of b after swap :%d\n",b);
    }
    return 0;
    
}