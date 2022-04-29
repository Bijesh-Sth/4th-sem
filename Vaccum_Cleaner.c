#include <stdio.h>
struct room{
    int status;
};
typedef struct room r;
void check(int);
void clean(int);
void next(int);
void status(void);
r a[3];
int main(){
    //r r[3];
    int i;
    for(i=0;i<3;i++){
    a[i].status=1;
    }
    a[1].status=0;
    
    printf("Innitially.....\n");
    status();
    printf("\n\nStarting With Room 0.......\n\n");
    for(i=0;i<3;i++){
    check(i);
    printf("\n");
    }
    printf("\nAfter Cleaning......\n");
    status();
  
}

void check(int n){
    if (a[n].status==1) {
        printf("Room %d is dirty......\n",n);
        clean(n);
    }
    else{
        printf("Room %d is Clean......\n",n);
        //next(n);
    }
    if(n<2) next(n);
    

}
void clean(int n){
    printf("\nCleaning room %d.....\n",n);
   //if(n!=2) next(n);
    a[n].status=0;
}
void next(int n){
    n++;
    printf("\nGoing to Room %d.......\n",n);
}

void status(void){
    for(int i=0;i<3;i++){
        if(a[i].status==1) printf("\n Room %d is Dirty....",i);
        else printf("\n Room %d is Clean.....",i);
    }
}