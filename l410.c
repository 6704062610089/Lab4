#include <stdio.h>

int main(void) {
    int score,n2,i=0,a=0,b=0,c=0,d=0,f=0;
    scanf("%d",&n2);
    while(i<n2){
    scanf("%d", &score);
    if (score < 0) {
        printf("error score\n");
        return 0;
    }
    if (score > 100) {
        printf("error score\n");
        return 0;
    }
    if (score >= 68) {
        if (score >= 80) {
            printf("A\n");
            a++;
        } else {
            if (score >= 75) {
                printf("B\n");
                b++;
            } else {
                int need = 75 - score;   
                printf("C %d\n", need);
                c++;
            }
        }
    } else {
        if (score >= 60) {
            printf("D\n");
            d++;
        } else {
            printf("F\n");
            f++;
        }
    }
    i++;
}
    printf("A(%d)\n",a);
    printf("B(%d)\n",b);
    printf("C(%d)\n",c);
    printf("D(%d)\n",d);
    printf("F(%d)\n",f);
    return 0;
}
