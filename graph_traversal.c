#include<stdio.h>
#define v 4
void init(int arr[][v]){
    int i,j;
    for(int i=0;i<v;i++){
        for(int j=0;j<v;j++){
            arr[i][j]=0;
        }
    }
}
void insert(int arr[][v],int i,int j){
    arr[i][j]=1;
    arr[j][i]=1;
}

void print(int arr[][v]){
    for(int i=0;i<v;i++){
        printf("%d:",i);
        for(int j=0;j<v;j++){
            printf(" %d ",arr[i][j]);
        }
        printf("\n");
    }
}
int main(){
int adjmatrix[v][v];
init(adjmatrix);
insert(adjmatrix,0,1);
insert(adjmatrix,0,3);
insert(adjmatrix,0,4);
insert(adjmatrix,1,4);
insert(adjmatrix,1,2);
insert(adjmatrix,2,3);
insert(adjmatrix,2,4);

print(adjmatrix);
    return 0;
}