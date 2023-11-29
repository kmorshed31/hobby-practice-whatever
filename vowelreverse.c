/*delicious
dulociies*/
#include <stdio.h>
#include <string.h>
const char* getstr(char* str){
  int len= strlen(str)-1;
  
  char chr[len];
int count=0;
  for (int i=0;i<len;i++){
    if(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u'){
    
      chr[count]=str[i];
      count++;
    }
  }
  
  for (int i=0;i<len;i++){
    if(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u'){
    
      str[i]=chr[count-1];
      count--;
}
  }
  return str;
}
int main(){
 char string[]="delicious";
  printf("%s", getstr(string));
  return 0;
}

