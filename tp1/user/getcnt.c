// ADICIONAMOS A FUNCAO QUE PRINTA NO TERMINAL
#include "kernel/types.h"
#include "user/user.h"

int
main(int argc, char *argv[])
{
  int n, cnt;

  if(argc != 2){
    fprintf(2, "usage: getcnt syscall_number\n");
    exit(1);
  }

  n = atoi(argv[1]);
  cnt = getcnt(n);

  if(cnt < 0){
    fprintf(2, "invalid syscall number\n");
    exit(1);
  }

  printf("syscall %d has been called %d times\n", n, cnt);
  exit(0);
}
