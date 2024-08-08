#include<stdio.h>
int main(){
    char r;
    printf("enter the character");
    scanf("%c",&r);
    if(r=='a'){
        int e=1;
        while(e<=10){
            printf("%d",e);
            e++;
        }
    }
    else if(r=='b'){
        int e=56;
        while(e>=34){
            printf("%d",e);
            e--;
        }
    }
    else if(r=='c'){
        int e=1;
        while(e<=100){
            printf("%d",e);
            e++;
        }
    }
    else if(r=='d'){
        int e=87;
        while(e>=32){
            printf("%d",e);
            e--;
        }
    }
    else{
        print("invalid input");
    }
    return 0;
}