/*5.Write a function to test if a string is a palindrome. Palindromes are strings that are the same from
left to right as from right to left. For example, “dad” and “madam” are palindromes. “hello” is not.
function prototype int isPalindrom (const char *message);
the function returns 1 true, if the string pointed to by message is a palindrome and returns 0 false,
if the string is not a palindrome.*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int palcheck(const char *str) {
  int len = strlen(str);
  char *rev = malloc(len + 1); 

  if (rev == NULL) {
    return 0; // Allocation failed
  }

  for (int i = 0; i < len; i++) {
    rev[i] = str[len - 1 - i];
  }
  rev[len] = '\0'; 
  int flag =1;
  for (int i = 0; i < len; i++) {
    if (rev[i] != str[i]){
      flag=0;
      break;
    }
  }
  free(rev);
return flag;
}

int main() {
  const char *original = "racecar";
  int reversed = palcheck(original);

    printf("%d\n", reversed);
    ;
  

  return 0;
}
