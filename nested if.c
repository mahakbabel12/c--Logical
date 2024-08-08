#include<stdio.h>
int main(){
    char a;
    printf("enter the character");
    scanf("%c",&a);
    if(a=='e')
    {
        int b;
        printf("enter no.");
        scanf("%d",&b);
        if(b%2==0)
        {
            printf("even");
        }
        else
        {
            printf("odd");
        }
    }
    else if(a=='v')
    {
        int age;
        printf("enter age.");
        scanf("%d",&age);
        if(age>=18)
        {
            printf("valid voter id card");
        }
        else
        {
            printf("invalid voter id card");
        }

    }
    else if(a=='s')
    {
        int g;
        printf("enter g");
        scanf("%d",&g);
        if(g==1 || g==2){
            printf("winter");
        }
        else if(g==3){
            printf("spring");
        }
        else if(g==4 || g==5 || g==6){
            printf("summer");
        }
        else{
            printf("rainy");
        }
    }
    else if(a=='m'){
        int maths, science, eco;
        printf("enter the marks:");
        scanf("%d %d %d",&maths,&science,&eco);
        float average;
        average=(maths + science + eco )/3;
        printf("%f\n",average);
        float percentage;
        percentage=(maths + science +eco)/300.0*100;
        printf(" per %f\n",percentage);
        if(percentage>=80){
            printf("grade A");
        }
        else if(percentage >=50 && percentage <80)
        {
            printf("grade B");
        }
        else if(percentage <40 && percentage<50){
            printf("Grade C");
        }
        else{
            printf("FAIL");
        }

    }
    else if(a=='k')
    {
        char l;
        printf("enter char");
        scanf(" %c",&l);
        if(l=='q'||l=='e'||l=='r'||l=='t'||l=='y'||l=='u')
        {
               printf("upperline");

        }
        else if(l=='a'||l=='s'||l=='d'||l=='f'){
            printf("middleline");

        }
        else if(l=='z'||l=='x'||l=='c'||l=='v'){
            printf("lowerline");
        }
        else{
            printf("other no.");
        }
    }
    else if(a=='r');
    {
        char t;
        printf("enter char:");
        scanf(" %c",&t);
        if(t=='a'||t=='e'||t=='i'||t=='o'||t=='u')
        {
            printf("vowel");
        }
        else
        {
            printf("consonant");
        }
    }
    return 0;

}