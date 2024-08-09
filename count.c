/*count of the digit in c :
342484 :dry run*/

#include<stdio.h>
int main(){
    int num=342484;
    int count=0;
    while(num>0){
        num=num/10;
        count++;
    }
    printf("%d",count);
    
    return 0;
}