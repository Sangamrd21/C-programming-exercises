#include <stdio.h>
#include <stdlib.h>

int main(){
    int primeNumbers[50]={0};
    primeNumbers[0]=2;
    primeNumbers[1]=3;
    int isPrime,i,j;
    int primeIndex=2;
    for(i=5;i<=100;i=i+2){
        isPrime=1;

        for(j = 1; isPrime==1 && i / primeNumbers[j] >= primeNumbers[j];++j){
            if(i % primeNumbers[j]==0){
                isPrime = 0;
            }
        }
        if(isPrime==1){
            primeNumbers[primeIndex]=i;
            ++primeIndex;
        }
    }
    for(i=0; i<primeIndex;i++){
        printf("%i ",primeNumbers[i]);
    }
    return 0;
}