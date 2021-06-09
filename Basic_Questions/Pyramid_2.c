#include <stdio.h>

int main(){
    int number;
    int x = 1;
    scanf("%d", &number);
    int s = number - 1;
    for(int i = 1 ; i <= number ; i++){
        for(int j = 0 ; j < s; j++)
            printf(" ");
        for(int j = 0 ; j < x ; j++)
            printf("*");
        s--;
        x+=2;
        printf("\n");
    }

    return 0;
}