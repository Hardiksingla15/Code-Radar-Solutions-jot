#include <stdio.h>

int main(){
    int a,b;
    char c;
    scanf("%d %d",&a,&b);
    scanf("%c",&c);

    if(c='*'){
        int product=a*b;
        printf("%d",product);

    }
    else if(c='/'){
        int div=a/b;
        printf("%d",div);
    }
    else if(c='+'){
        sum=a+b;
        printf("%d",sum);

    }
    else if(c='-'){
        int sub=a-b;
        printf("%d",sub);
    }
    return 0;
}