#include<stdio.h>

int main(){
    int a;
    scanf("%d",&a);

    for (int i=1;i<a+2;i++){
        for (int j=1;j<i+1;j++){
            printf("* ");
        }
        printf("\n");

    }


}