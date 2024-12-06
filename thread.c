#include <stdio.h>
#include <pthread.h>

void *print_1();
void* print_2();


int main()
{
  
  pthread_t thread1;
  pthread_t thread2;
 
  pthread_create(&thread1,NULL,print_1,NULL);
  pthread_create(&thread2,NULL,print_2,NULL);
  pthread_join(thread1,NULL);
  pthread_join(thread2,NULL);

  
  return 0;
}

void *print_1(void* v)
{
  printf("Computation\n");
  return NULL;
}



void *print_2()
{
  int t=56;
  printf("%d\n",t);
  return NULL;
}
