#include<stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    if(a%2==0 || a%3==0 || a%5==0 || a%7==0){
        printf("Not Prime");
    }
    else if(a%1==0 && a%a==0){
        printf("Prime");
    }
    else{
        printf("Not Prime");
    }
}