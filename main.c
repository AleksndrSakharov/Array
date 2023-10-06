#include <stdio.h>
#include <stdlib.h>
// #define size 10
void main(){
    int size, gr1, gr2, x;
    do
    {
        scanf("%d", &size);
    } while (size <= 0);
    int array[size];
    scanf("%d %d", &gr1, &gr2);
    for(int i = 0; i < size; i++){
        array[i] = gr1 + rand() % (gr2 - gr1);
        printf("array[%d] = %d\n", i, array[i]);
    }
    printf("\n\n\n\n");
    for(int i = 1; i < size; i++){
        x = array[i];
        array[i] = array[i - 1] + x;
        printf("array[%d] = %d\n", i, array[i]);
    }

}