#include <stdio.h>

int main(){
    int num;
    scanf("%d",&num);
    int count=0;

    for (int i =2 ;i<num+1;i++){
        if(num%i==0){
            count++;
        }
    }
    if(count>1){
        printf("Not Prime");
    
    }
    else{
        printf("Prime");
    }
    return 0;

}