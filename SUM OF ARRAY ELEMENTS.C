#include<stdio.h>
int main(){
    int rose[5];
    int sum=0;
    printf("enter the elements\n");
    for (int i=0;i<5;i++){
        scanf("enter number:%d",& rose[i]);
        sum+=rose[i];
    }
        ("%d", sum);
}
