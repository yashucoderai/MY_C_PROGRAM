include<stdio.h>
int main()
{
    int book[2][3]={
        {3,4,5},
        {6,8,9}
    };
    for(int i=0;i<=1;i++){
        for(int j=0;j<=2;j++){
            printf("%d\t",book[i][j]);
        }
    }
}
