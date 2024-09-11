#include<stdio.h>
int main(){
    int a,b;
    scanf("%d%d",&a,&b);
    int teama[a];
    int teamb[b];
    for(int i=0;i<a;i++){
        scanf("%d",&teama[i]);
    }
    for(int i=0;i<b;i++){
        scanf("%d",&teamb[i]);
    }
    if(a==b){
        for (int i=0;i<a;i++){
            if(teama[i]!=teamb[i]){
                printf("Teams Are Not Equal");
                return 0;
            }
        }
        printf("teams Are Equal");
        return 0;
    }
    printf("Teams Are not equal");
    return 0;
}