#include <stdio.h>
void tower(int n, char from,char aux,char to){
    if(n==0){
        return;
    }
    tower(n-1,from,to,aux);
    printf("Move disk %d from rod %c to rod %c\n",n,from,to);
    tower(n-1,aux,from,to);
}
int main(){
    int n=4;
    tower(n,'A','C','B');
    return 0;
}