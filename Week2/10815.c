#include <stdio.h>
#include <stdlib.h>

int compare(const void *a, const void *b)    // 오름차순 비교 함수 구현(qsort)
{
    int num1 = *(int *)a;    // void 포인터를 int 포인터로 변환한 뒤 역참조하여 값을 가져옴
    int num2 = *(int *)b;    // void 포인터를 int 포인터로 변환한 뒤 역참조하여 값을 가져옴

    if (num1 < num2)    // a가 b보다 작을 때는
        return -1;      // -1 반환
    
    if (num1 > num2)    // a가 b보다 클 때는
        return 1;       // 1 반환
    
    return 0;    // a와 b가 같을 때는 0 반환
}

int binarySearch(int arr[], int size, int key){ // 이진탐색 함수 (배열, 배열 크기, 타겟값)
    int high, low, mid;
    high = size - 1;
    low = 0;

    while (high >= low){ // high가 low보다 작아지면 값이 없다.
        mid = (high + low) / 2;
        if (key < arr[mid]) high = mid - 1; //key값이 mid값보다 작으면 high = mid - 1이 되어야함.
        else if (key > arr[mid]) low = mid + 1; // key값이 mid값보다 크면 low = mid +1이 되어야함.
        else if (key == arr[mid]) return 1; // key == mid값이면 그 수가 찾던 수이다.
    }
    return 0; // 만족하는 값이 없을 때
}

int main(void){
    int N, M, result;
    int sanggeun[500000];
    int cardCheck[500000];

    scanf("%d", &N);
    for (int i = 0; i < N; i++){
        scanf("%d", &sanggeun[i]);
    }
    scanf("%d", &M);
    for (int j = 0; j < M; j++){
        scanf("%d", &cardCheck[j]);
    }

    qsort(sanggeun, N, sizeof(int), compare); // 이진탐색을 위한 오름차순 정렬

    for (int i = 0; i < M; i++){
        result = binarySearch(sanggeun, N, cardCheck[i]);// 이진탐색 함수
        printf("%d ", result);
    }

    return 0;
}