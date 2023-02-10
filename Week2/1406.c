#include <stdio.h>

int N;

void L(){
    
}

int main(void){
    int editor[100];
    scanf("%d", &N);
    for(int i=0; i<N; i++){
        scanf("%s", &editor);
        if(strcmp(editor,"L")==0){
            L();
        }
        else if(strcmp(editor,"D")==0){
            D();
        }
        else if(strcmp(editor,"B")==0){
            B();
        }
        else if(strcmp(editor,"P$S")==0){
            P$S();
        }
    }
}