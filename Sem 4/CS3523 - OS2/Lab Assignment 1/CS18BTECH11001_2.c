#include<stdio.h>
#include<pthread.h>
#include<stdlib.h>
#include<semaphore.h>                                           //library for using semaphore
#include<unistd.h>
int p,c,N;
long *buffer;                                                   //pointer for representing the buffer space 
int head=0,tail=0;
sem_t mutex;
sem_t full;
sem_t empty;
void * producer(void){
    int produced=0;                                             //variable for noting no. of products produced by each producer  
    long nextProduced;                              
    while (produced<(10*N)) {                                   //exiting the loop when each producer produced 10*N products

        sem_wait(&empty);                                       //waiting until there is an empty slot available in the buffer
        sem_wait(&mutex);                                       //To allow only one thread to enter the critical section

        nextProduced = buffer [head%N] = pthread_self();        //giving thread id as data(producing)
        head++;
        produced++;
        printf("Produced %ld\n",nextProduced);

        sem_post(&mutex);                                       //To remove the lock so that other can execute  
        sem_post(&full);                                        //To represent an element is entered into the buffer 
    }
}
void * consumer(void){
    long nextConsumed;
    while(tail<(10*N*p)){                                       //exiting when all the products are consumed 
        tail++;                                                 //incrementing before only as we know that the consumer consume
        sem_wait(&full);                                        //waiting until there is atleast one elment in the buffer 
        sem_wait(&mutex);

        nextConsumed = buffer [tail%N];                         //consuming data
        printf("Consumed %ld\n",nextConsumed);

        sem_post(&mutex);                                       //to remove lock so tha tother can execute 
        sem_post(&empty);                                       //to represent that an element is removed from the buffer   
    }
}
int main(int argc,char** argv){
    p=atoi(argv[1]);                                            //converting to integer from character array
    c=atoi(argv[2]);
    N=atoi(argv[3]);
    buffer=(long*)malloc(N*sizeof(long));                       //creating space for storing products
    sem_init(&mutex,0,1);
    sem_init(&full,0,0);
    sem_init(&empty,0,N);
    pthread_t prod[p],cons[c];
    for(int i=0;i<p;i++){
        pthread_create(&prod[i],NULL, (void * (*)(void *)) producer,NULL);//creating p threads
    }
    for(int i=0;i<c;i++){
        pthread_create(&cons[i],NULL, (void * (*)(void *)) consumer,NULL);//creating c threads
    }
    for(int i=0;i<p;i++){
        pthread_join(prod[i],NULL);                             //used for waiting the main thread until all the producer threads complete execution
    }
    for(int i=0;i<c;i++){
        pthread_join(cons[i],NULL);                             //used for waiting the main thread until all the consumer threads complete execution
    }
    sem_destroy(&mutex);
    printf("Total produced = %d\n",head);                       //printing the total produced
    printf("Total consumed = %d\n",tail);                       //printing the total consumed
}