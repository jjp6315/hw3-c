// Author: Ji Woong Park jjp6315@psu.edu
// Section: 005R

#include <stdio.h>
#include <readline/readline.h>
#include <stdlib.h>

int digit_sum(num){
  if (num == 0){
    return num;
  }
  else{
    int sum = 0; 
  while (num != 0){ 
     sum = sum + (num % 10); 
     num = num/10; 
    }
    return sum;
  }
}

int main(void) {
  char * number = readline ("Enter an int: ");
  int num = atoi(number);
    printf("sum of digits of %d ", num);
    printf("is %d.\n", digit_sum(num));
}
