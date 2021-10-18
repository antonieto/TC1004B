#include <pthread.h> 
#include <stdio.h> 
#include <unistd.h>

int NUM_THREADS = 10;
int saldo = 0;


pthread_mutex_t lockSaldo =  PTHREAD_MUTEX_INITIALIZER;

void* printHola(void *arg){
    printf("Hola desde un hilo \n");  
    saldo += 100;
    pthread_exit(NULL);
} 

int main(){
    pthread_t threads[NUM_THREADS]; 
    for(int i = 0; i < NUM_THREADS; i++){
        pthread_create(&threads[i], NULL, printHola, NULL); 
    
    }  
    for(int i = 0; i < NUM_THREADS; i++){
        pthread_join(threads[i], NULL);

    }  
    printf("Saldo: %d \n", saldo); 

    pthread_exit(NULL); 
}