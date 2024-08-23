// addition
// sub
// multi
// div 
// through function
// #include<stdio.h>
// void add(int a,int b);
// void sub(int a,int b);
// void mul(int a,int b);
// void div(int a,int b);

// int main(){
//     add(2,3);
//     sub(4,2);
//     mul(3,5);
//     div(4,2);
    
//     return 0;
// }
// void add(int a,int b){
//     int c=a+b;
//     printf("add:%d\n",c);
// }
// void sub(int a,int b){
//     int c=a-b;
//     printf("sub:%d\n",c);
// }
// void mul(int a,int b){
//     int c=a*b;
//     printf("add:%d\n",c);
// }
// void div(int a,int b){
//     int c=a/b;
//     printf("add:%d",c);
// }

// swap()  :with third variable 
// wswap() :without third variable 

// through function 

// #include<stdio.h>
// void swap1(int a,int b);
// void swap2(int a,int b);

// int main(){
//     swap1(30,40);
//     swap2(10,20);
//     return 0;
// }
// void swap1(int a,int b){
//     
//     printf("%d\n",a);
//     printf("%d\n",b);
//     a=a+b;
//     b=a-b;
//     a=a-b;
//     printf("after swap a :%d\n",a);
//     printf("after swap b :%d\n",b);
// }

// void swap2(int a,int b){
//     
//     int c;
//     printf("%d\n",a);
//     printf("%d\n",b);
//     c=a;
//     a=b;
//     b=c;
//     printf("after swap a :%d\n",a);
//     printf("after swap b :%d\n",b);
    
// }



// a :
// 	check Armstrong number 

// p :
// 	check palindrome number 

// e :
// 	check even number 

// r :
// 	reverse number check 
// c :
// 	count digit 

// s :
// 	sum of digit 

#include<stdio.h>

void armstrong(int a);
void palindrome(int a);
void even(int a);
void reverse(int a);
void count(int a);
void sum_digit(int a);
void fact(int a);
void fib(int a);

int main(){
    char input;
    printf("enter character:");
    scanf("%c",&input);
    if(input == 'a'){
        armstrong(153);
    }
    else if(input == 'p'){
        palindrome(121);
    }
    else if(input == 'e'){
        even(5);
    }
    else if(input == 'r'){
        reverse(1331);
    }
    else if(input=='c'){
        count(117556);
    }
    else if(input == 's'){
        
        sum_digit(10);
    }
     else if(input == 'f'){
        
        fact(5);
    }
     else if(input == 'm'){
        
        fib(5);
    }
    
    
    return 0;
}
void armstrong(int a){

    int temp=a;
    int rem,sum=0;
    while(a>0){
        rem =a%10;
        sum=sum+rem*rem*rem;
        a=a/10;
    }
    if(temp==sum){
        printf("armstrong no.");
    }
    else{
        printf("not armstrong no");
    }
}

void palindrome(int a){
       
    int temp=a;
    int rem,sum=0;
    while(a>0){
        rem =a%10;
        sum=sum*10+rem;
        a=a/10;
    }
    if(temp==sum){
        printf("palindrome no.");
    }
    else{
        printf("not palindrome no");
    }
}

void even(int a){
    
    if(a%2==0){
        printf("even no.");
    }
    else{
        printf("odd");
    }
}

void reverse(int a){
    
    int rem ,sum=0;
    while(a>0){
        rem=rem%10;
        sum=sum*10+rem;
        a=a/10;
    }
    printf("%d",sum);    
}
void count(int a){
    
    int count=0;
    while(a>0){
        a=a/10;
        count++;
}
printf("%d",count);

        
}

void sum_digit(int a){
     a=0;
    for(int i=1;i<=10;i++){
        a=a+i;
        
    }
    printf("%d",a);
}

void fact(int a){
    int fact=1;
    for(int i=1;i<=a;i++){
        fact=fact*i;
    }
    printf("%d",fact);
    }
   
void fib(int a){
    int b=0,c=1,d;
    printf("%d %d",b,c);
    for(int i=1;i<=a;i++){
        d=b+c;
        printf("%d",d);
        b=c;
        c=d;
    }
}







