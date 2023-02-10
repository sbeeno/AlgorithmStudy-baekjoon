#include <stdio.h>
#include <stdlib.h>

int main(void){
    int A[51];
    int B[51];
    int result[51];
    int result1[51];

    int N;

    scanf("%d", &N);
    for(int i=0; i<N; i++){
        scanf("%d", &A[i]);
    }
    for(int i = 0; i<N; i++){
        scanf("%d", &B[i]);
    }
    
    int cnt = 0;
        for(int i=100; i>=0; i--)
        {
            for(int c = 0; c<N; c++)
            {
                if(i==B[c])
                {
                    result[cnt] = c;
                    cnt++;
                }
            }
        }cnt = 0;
        for (int  i= 0; i <= 100; i++)
    {
        for (int c = 0; c < N; c++)
        {
            if (i == A[c])
            {
                result1[cnt] = i;
                cnt++;
            }
        }
    } int sum = 0;
    for (int c = 0; c < N; c++)
    {
        sum += (B[result[c]] * result1[c]);
    }
    printf("%d\n", sum);
    return 0;


}