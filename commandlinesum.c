/*rite a program named sum.c that adds up its command-line arguments. Which are assumed to be
integers. Running the program by typing
sum 6 24 62
should produce the following output
Total: 92
Running the program by typing
sum 6 24 62 8
should produce the following output
Total: 100*/
#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[]){
  int sum=0;
  for (int i=0; i< argc; i++){
    sum+=atoi(argv[i]);
  }
  printf("%d", sum);
  return 0;
}
