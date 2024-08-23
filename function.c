//hello world print through function 

// #include<stdio.h> 

// void show(); 

// int main(){
    
//   show();  

// return 0;
// }
// void show(){
//     printf("hello");
// }



// addition
// sub
// multi
// div 
// through function 

// #include<stdio.h>
// void add();
// void sub();
// void mul();
// void div();
// int main(){
    
//     add();
//     sub();
//     mul();
//     div();
    
//     return 0;
// }
// void add(){
//     int a=1,b=3,c;
//     c=a+b;
//     printf("%d\n",c);
// }
// void sub(){
//     int a=7,b=2,c;
//     c=a-b;
//     printf("%d\n",c);
// }
// void mul(){
//     int a=7,b=2,c;
//     c=a*b;
//     printf("%d\n",c);
// }
// void div(){
//     int a=6,b=2,c;
//     c=a/b;
//     printf("%d",c);
// }


// swap()  :with third variable 
// wswap() :without third variable 

// through function 

// #include<stdio.h>
// void swap1();
// void swap2();

// int main(){
//     swap1();
//     swap2();
//     return 0;
// }
// void swap1(){
//     int a=10,b=20;
//     printf("%d\n",a);
//     printf("%d\n",b);
//     a=a+b;
//     b=a-b;
//     a=a-b;
//     printf("after swap a :%d\n",a);
//     printf("after swap b :%d\n",b);
// }

// void swap2(){
//     int a=40,b=60,c;
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

void armstrong();
void palindrome();
void even();
void reverse();
void count();
void sum_digit();

int main(){
    char input;
    printf("enter character:");
    scanf("%c",&input);
    if(input == 'a'){
        armstrong();
    }
    else if(input == 'p'){
        palindrome();
    }
    else if(input == 'e'){
        even();
    }
    else if(input == 'r'){
        reverse();
    }
    else if(input=='c'){
        count();
    }
    else if(input == 's'){
        sum_digit();
    }
    
    
    return 0;
}
void armstrong(){
    int num=153;
    int temp=num;
    int rem,sum=0;
    while(num>0){
        rem =num%10;
        sum=sum+rem*rem*rem;
        num=num/10;
    }
    if(temp==sum){
        printf("armstrong no.");
    }
    else{
        printf("not armstrong no");
    }
}

void palindrome(){
       int num=15351;
    int temp=num;
    int rem,sum=0;
    while(num>0){
        rem =num%10;
        sum=sum*10+rem;
        num=num/10;
    }
    if(temp==sum){
        printf("palindrome no.");
    }
    else{
        printf("not palindrome no");
    }
}

void even(){
    int a=24;
    if(a%2==0){
        printf("even no.");
    }
    else{
        printf("odd");
    }
}

void reverse(){
    int n=456;
    int rem ,sum=0;
    while(n>0){
        rem=rem%10;
        sum=sum*10+rem;
        n=n/10;
    }
    
}
void count(){
    int num=46452;
    int count=0;
    while(num>0){
        num=num/10;
        count++;
}
printf("%d",count);

        
}

void sum_digit(){
    int sum=0;
    for(int i=1;i<=10;i++){
        sum=sum+i;
        
    }
    printf("%d",sum);
}