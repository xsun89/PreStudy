//
// Created by Xin Sun on 2020-12-10.
//
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define swap(a, b){ \
    char __tmp[20];\
    strcpy(__tmp, a);\
    strcpy(a, b);\
    strcpy(b, __tmp);\
}
typedef struct Data{
    char name[20];
}Data;

int main() {
    Data *data = (Data *)malloc(sizeof(Data)*10);
    for(int i=0; i<10; i++){
        scanf("%s", data[i].name);
    }

    for(int j=9; j>0; j--){
        for(int k=0; k<j; k++){
            if (strcmp(data[k].name, data[j].name) > 0){
                swap(data[k].name, data[j].name);
            }
        }
    }

    for(int i=0; i<10; i++){
        printf("%s\n", data[i].name);
    }

    free(data);
    return 0;
}
