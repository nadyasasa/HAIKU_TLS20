#include <stdio.h>
int main(){
    double x1,v1,x2, v2, jarak1, jarak2;
    printf("masukkan data x1, v1, x2, v2 = \n");
    scanf("%lf %lf %lf %lf", &x1, &v1, &x2, &v2);
    
    if(x1 >= x2 || x1 > 1000 || x1 < 0 || x2 < 0 || x2 > 1000 || v1 > 1000 || v1 <= 0 || v2 > 1000 || v2 <= 0){
    printf("INPUT SALAH \n");}

    else if(v1 <= v2){
        printf("NO \n");
    }

    else{
        jarak1 = x1;
        jarak2 = x2;
        while(jarak1 < jarak2){
            jarak1 += v1;
            jarak2 += v2;}

        if(jarak1 == jarak2){
            printf("YES \n");
        }
        else{
            printf("NO \n");
        }
    }
    
    return 0;
}
