#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#define tam 1000 
int main() {
    int a, b, v[tam][tam]={0}, w[tam][tam]={0},j, i; 
    scanf("%d%d", &a, &b);
    for(j=0;j<a;j++)for(i=0;i<b;i++)scanf("%d", &v[j][i]);
    for(j=0;j<b;j++){for(i=0;i<a;i++){if(j==0 && i==0)printf("| ");printf("%d ", v[i][j]);}if(j!=b-1 &&i!=a-1) printf("|\n| ");}
    printf("|");
    
    
    /*for(i=0;i<b;i++)for(j=0;j<a;j++)v[i][j]=w[j][i];
    for(i=0;i<a;i++){for(j=0;j<b;j++){printf("%d ", w[j][i]);} printf("\n");}*/
	return 0;
}