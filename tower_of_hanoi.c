#include<stdio.h>

void tower(int n,char beg,char aux,char end){
    if(n<=0){
        printf("illegal\n");

    }
    else if(n==1){
printf("move disk %c to %c \n",beg,end);
    }
    else{
        tower(n-1,beg,end,aux);
         tower(1,beg,aux,end);
          tower(n-1,aux,beg,end);
        
        

    }
}
int main(){
    int n;
    char a='@',b='#',c='$'; //names of poles
    printf("enter the number of discs\n");
    scanf("%d",&n);
   tower(n,a,b,c);
    return 0;
}