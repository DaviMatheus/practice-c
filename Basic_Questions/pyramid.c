#include<stdio.h>

int main(){
int number,cont;

scanf("%d",&number);

    for(int i = 1 ; i <= number ; i++){
        for(int j = 0 ; j < i; j++)
            printf("%.2d ", i);
        printf("\n");
    }

    printf("\n");
    
for(int i = 1 ; i <= number ; i++){
        printf("\n");
        for(int k = 1 ; k <= i; k++)
            printf("%.2d ", k);
    }
return 0;
}