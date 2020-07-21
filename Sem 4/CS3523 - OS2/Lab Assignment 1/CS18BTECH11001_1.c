#include<stdio.h>
#include<pthread.h>
#include<stdlib.h>
int p,c,N;
long *buffer;
int tproduced=0,tconsumed=0,count=0;
int in=0,out=0;
void * producer(void){
    int produced=0;
    long nextProduced;
    while (produced<(10*N)) {                                                    //exiting the loop when each producer produced 10*N products

        while (count == N)
        ; // do nothing b/c full

        nextProduced = buffer [in] = pthread_self(); 
        produced++;
        in = (in + 1) % N;
        tproduced++;
        count++;
        printf("Produced %ld\n",nextProduced);
    }
}
void * consumer(void){
    long nextConsumed;
    while(tconsumed<(10*N*p)){                                                   //exiting when all the products are consumed 
        while (count == 0)
        ; // do nothing b/c empty

        nextConsumed = buffer[out];
        out = (out + 1) % N;
        tconsumed++;
        count--;
        printf("Consumed %ld , count = %d\n",nextConsumed,count);
    }
}
int main(int argc,char** argv){
    p=atoi(argv[1]);                                                          //converting to integer from character array
    c=atoi(argv[2]);
    N=atoi(argv[3]);
    buffer=(long*)malloc(N*sizeof(long));                                     //creating space for storing products
    pthread_t prod[p],cons[c];
    for(int i=0;i<p;i++){
        pthread_create(&prod[i],NULL, (void * (*)(void *)) producer,NULL);      //creating p threads
    }
    for(int i=0;i<c;i++){
        pthread_create(&cons[i],NULL, (void * (*)(void *)) consumer,NULL);      //creating c threads
    }
    for(int i=0;i<p;i++){
        pthread_join(prod[i],NULL);                                             //used for waiting the main thread until all the producer threads complete execution
    }
    for(int i=0;i<c;i++){
        pthread_join(cons[i],NULL);                                              //used for waiting the main thread until all the consumer threads complete execution
    }
    printf("Total produced = %d\n",tproduced);
    printf("Total consumed = %d\n",tconsumed);
}