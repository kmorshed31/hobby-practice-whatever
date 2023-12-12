/*5. Write a function that reverses the string passed to it. The reverse action happens ”in place” i.e.
the string passed by reference to the function will become the reversed string after the function
terminates.*/
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
