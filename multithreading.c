// MULTITHREADING -> MEANS MULTIPLE FUNCTION RUNS PARALLEL .
// MULTI - TASKING -> MULTIPLE APPLICATIONS RUNS PARELLEL.

#include<stdio.h>
#include<pthread.h>

void * sam(void *ptr){
    int y;
    for(y=1001;y<=1100;y++) printf("%d",y);
    return NULL;
}

int main(){

    pthread_t thread_id;
    int x;
int result;
result = pthread_create
// pthread_create returns 0 if thread gets created else return 1
if(result == 0){
    printf(" thread is created ");
}
else 
{
    printf(" unable to create user thread ");
    return 0;
}
for(x=1;x<=100;x++)
{
    printf("%d",x)
}
// we will put hte main thread in waiting mode till the user thread is not complete
pthread_join(thread_id , NULL); // very very important 
printf(" main function is about to end \n");
}