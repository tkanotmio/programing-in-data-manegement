#include <stdio.h>
#include <stdlib.h>

int main(){
    char name[10];
    printf("Who are you?\n");
    scanf("%s", name);
    printf("Hello, %s!\n", name);
    printf("Tossing a coin...\n");
    int count[2];
    for(int i=0; i<2; i++){
        count[i]=0;
    }
    for(int i=0; i<3; i++){
        printf("Round %d: ", i+1);
        int num = rand()%2;
        if(num==0){
            printf("Heads\n");
            count[0]++;
        }
        else{
            printf("Tails\n");
            count[1]++;
        }
    }
    printf("Heads %d, Tails: %d\n", count[0], count[1]);
    return 0;
}