// number of spanning trees possible is n^(n-2), where n->no. of vertices
// prims algo is greedy approach


#include <stdio.h>
int visited[7] = {0, 0, 0, 0, 0, 0, 0};
int adj[7][7] = {
    {0, 1, 1, 1, 0, 0, 0},
    {1, 0, 1, 0, 0, 0, 0},
    {1, 0, 1, 1, 0, 0, 0},
    {1, 1, 1, 0, 1, 0, 0},
    {0, 0, 1, 1, 0, 1, 1},
    {0, 0, 0, 0, 1, 0, 0},
    {0, 0, 0, 0, 1, 0, 0}};
    void DFS(int i){
        
        printf("%d",i);
        visited[i]=1;
        for(int j=0;j<7;j++){
            if(adj[i][j]==1 && visited[j]==0){
                DFS(j);
            }
        }
    }
int main()
{
    DFS(1);
    return 0;
}

