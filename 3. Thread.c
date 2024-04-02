#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<pthread.h>


void * ThreadFun(void * tid){
    long * ThreadID= (long *) tid;
    printf("Hello World! This is Thread %ld\n",*ThreadID);
}
int main (){
pthread_t tid0;
pthread_t tid1;
pthread_t tid2;
pthread_t *pthread[]={&tid0,&tid1,&tid2};
for (int i=0; i<3; i++){
    pthread_create(pthread[i],NULL,ThreadFun,(void *)pthread[i]);
} pthread_exit(NULL); return 0;
}
