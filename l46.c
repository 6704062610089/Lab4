#include <stdio.h>
int main()
{
    int n1,n2,i=1;
    scanf("%d %d",&n1,&n2);
    while (i<=n2){
        for(int j = 0;j<n2;j++){
            printf("%d",n1);
        }
        printf("\n");
        i++;
    }
    return 0;
}
