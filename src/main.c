#include <stdio.h>
struct lst 
{
  int n ;
  struct lst*next;
  
};
int main()
{
  struct lst A,B,C;
  struct lst*H;
  A.n=10;B.n=17;C.n=97;
  A.next=&B;B.next=&C;
  C.next=0;
  H=&A;
  while(H){ printf("%d",H->n);
     H=H->next;
  }
  return 0;
}