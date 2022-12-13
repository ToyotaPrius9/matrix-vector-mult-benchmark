#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#include "utils/utils.h"

#define LOWER 1
#define UPPER 5

int generateRandomInt(int lower, int upper){
    return (rand() % (upper-lower+1)) + lower;
}

void initMat(int* M, int N){
    for(int i=0; i<N; i++){
        for(int j=0; j<N; j++){
            M[N*i+j] = generateRandomInt(LOWER,UPPER);
        }
    }
}

void initVec(int* v, int N){
    for(int i=0; i<N; i++){
        v[i] = generateRandomInt(LOWER,UPPER);
    }
}

int main(void){

    srand(time(0));

    int N = 3;
    int* M = (int *) malloc(N*N*sizeof(int));
    int* v = (int *) malloc(N*sizeof(int));
    int* b = (int *) malloc(N*sizeof(int));
    
    

    if(M == NULL | v == NULL){
        printf("Malloc is failed \n");
        exit(0);
    } else {
        initMat(M, N);
        printf("M=");
        printMat(M, N);
        initVec(v, N);

        printf("v=");
        printVec(v, N);
        matVecMult(M,v,b,N);
        printf("b=");
        printVec(b, N);
        
        
        
        printf("%d, %d, %d\n\n", M, v, b);

        
        
    }
        int m = (int *) malloc(N*sizeof(int));
        for(int m=0; m<M; m++){
            m += M[m];
            }
        printf("%d",m);
        FILE* in;
        FILE* out;
        char buffer_in[200], buffer_out[200];
        out = fopen("pointer.txt","w");

        sprintf(buffer_out,"[%d]", m);
        fwrite(buffer_out, sizeof(char), strlen(buffer_out),out);

    free(M);
    free(v);
    free(b);
    free(m);
    free(buffer_in);
    free(buffer_out);

    

    
    
    
    
    

    return 0;
    
    
    
}

