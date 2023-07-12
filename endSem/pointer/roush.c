#include<stdio.h>
#include<stdlib.h>
struct strc{
    char name[5];
    int mon;
};
int ds(struct strc r[]){
    for (int i=0;i<3;i++){
      printf("record %d\n",i+1);
      printf("%s\t",r[i].name);
      printf("%d\n",r[i].mon);
    }
}
void cond( struct strc r[]){
    for (int i=0;i<3;i++){
        if (r[i].mon < 100){
            r[i].mon=100;

        }
    }
}
int main(){
    struct strc r[3];

    for (int i=0;i<3;i++){
        printf("record %d\n",i+1);
        scanf("%s",r[i].name);
        scanf("%d",&r[i].mon);
    }
    printf("the elements are:\n");
    ds(r);
    cond(&r);
    printf("the elements after condition are:\n");
    ds(r);

    return 0 ;
}
