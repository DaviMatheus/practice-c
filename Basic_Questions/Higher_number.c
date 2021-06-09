#include <stdio.h>

int main(void){
    int number;
    int record;
    int i=0;
    while(scanf("%d", &number) != EOF){
        if(i == 0){
            record = number;
            i++; 
        }
        else
            if(number >record)
    record = number;
 
 } 
    printf("%d\n", record);
    return 0;
}