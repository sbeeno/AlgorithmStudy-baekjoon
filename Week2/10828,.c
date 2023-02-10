#include <stdio.h>

int N;
int number[10001];
int count=0;

void push(int num){
    number[count]=num;
    count++;
}

void pop(){
    if(count!=0){
        count --;
        printf("%d\n", number[count]);
        number[count]=0;
    }
    else printf("%d\n", -1);
}

void top(){
    if(count != 0){
        printf("%d]\n", number[count-1]);
    }
    else printf("%d\n", -1);
}

void size(){
    printf("d\n",count);
}

void empty(){
    if(count != 0) {
        printf("0\n");
    }
    else{
        printf("1\n");
    }
}
int main(void){
    scanf("%d", &N);
    int stack[100];

    for(int i=0; i<N; i++)
        scanf("%s", &stack);
        if(strcmp(stack,"push")==0){
            int num;
            scanf("%d", &num);
            push(num);
        }
        else if (strcmp(stack, "pop")==0){
                pop();
            }
        else if(strcmp(stack,"top")==0){
                top();
            }
        else if(strcmp(stack, "size")==0){
                size();
        }
        else if(strcmp(stack, "empty")==0){
                empty();
        }

}