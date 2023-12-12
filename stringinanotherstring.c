/*Write a function called findString() to determine if one character string exists inside another string.
The first argument to the function should be the character string that is to be searched and the
second argument is the string you are interested in finding. If the function finds the specified string,
have it return the location in the source string where the string was found. If the function does not
find the string, have it return -1. So, for example, the call
index = findString(“a chatterbox”, “hat”);
searches the string “a chatterbox” for the string “hat”. Because “hat” does exist inside the source
string, the function returns 3 to indicate the starting position inside the source string where “hat”
was found*/
#include <stdio.h>
#include <string.h>
char finString(char *str1, char *str2){
char subs[strlen(str1)];
  subs[0]='\0'; int flag=0;
  for (int i=0; i< strlen(str1)-1; i++){
    for (int k = 0; k < i; k++) {
        subs[k] = str1[i+k];
    }
    subs[i]='\0';
    for (int j=0; j< strlen(str2)-1; j++){
      if (strcmp(str2, subs)==0){
        printf("%d",i);
        flag=1;
        return i;
        
      }
    }
  }if (flag==0){printf("no");return -1;}
}
int main(){
  finString("a chat", "at");
  return 0;
}
