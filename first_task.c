#include <stdio.h>

int main(){
char word[100];  
printf("Enter a word: ");
scanf("%99s", word);  
for (int i = 0; word[i] != '\0'; i++) {
  printf("%c\n", word[i]);
}
return 0;
}
