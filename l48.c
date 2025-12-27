#include <stdio.h>

int main(void) {
    int score,n2,i=0;
    scanf("%d",&n2);
    while(i<n2){
    scanf("%d", &score);
    if(score==-1){
        break;
    }
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
            
        } else {
            if (score >= 75) {
                printf("B\n");
                
            } else {
                int need = 75 - score;   
                printf("C %d\n", need);
                
            }
        }
    } else {
        if (score >= 60) {
            printf("D\n");
            
        } else {
            printf("F\n");
            
        }
    }
    i++;
}
    return 0;
}
