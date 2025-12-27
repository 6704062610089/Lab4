#include <stdio.h>
int main()
{
    int n1,n2,i=1;
    char t;
    scanf("%c %d %d",&t,&n2,&n1);
    while (i<=n1){
        for(int j = 0;j<n2;j++){
            printf("%c",t);
        }
        printf("\n");
        i++;
    }
    return 0;
}
