#include <stdio.h>

int main(void){
  int number = 0, p = 0;
  int result;
  number = 0;
  result = 0;

 scanf("%d", &number);

 if(number <= 10)
  result = 7;

    else if(number >= 11 && number <= 30)
    result = (number -10)*1 + 7;

        else if(number >= 31 && number <= 100)
        result = (number - 30)*2 + 27;
        
            else if(number >= 101)
            result = (number - 100)*5 + 167;

 printf("%d\n", result);
 
  return 0;
}