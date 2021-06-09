#include <stdio.h>

int main(void){
    int number;
    int i = 0;
    
    while(scanf("%d", & number) != EOF)
        i++;
    printf("%d\n",i);
    
    return 0;

}