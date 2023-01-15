#include <stdio.h>
#include <stdlib.h>

int compare(const void *a, const void *b)
{
    int num1=*(int*)a;
    int num2=*(int*)b;

    if(num1<num2)
        return -1;
    if(num1>num2)
        return 1;
    else 
        return 0;
}

int binarySearch(int arr[], int size, int key){
    int high, low, mid;
    high= size-1;
    low=0;

    while(high>=low){
        mid=(high+low)/2;
        if(key<arr[mid])
            high=mid-1;
        else if(key>arr[mid])
            low= mid+1;
        else if(key == arr[mid])
            return 1;
    }
        return 0;
}

int main(){
    int N, M, result;
    int sanggeun[500000];
    int card[500000];

    scanf("%d", &N);
    for(int i=0; i<N; i++){
        scanf("%d", &sanggeun[i]);
    }

    scanf("%d", &M);
    for(int j=0, j<M; j++){
        scanf("%d", &card[j]);
    }

    qsort(sanggeun, N, sizeof(int), compare); //오름차순 정렬

    for(int i=0; i<M; i++){
        result=binarySearch(sanggeun, N, card[i]);
        printf("%d", result);
    }
    return 0;
}