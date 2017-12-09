#include <stdio.h>
#include <stdlib.h>
#include<math.h>
int main()
{
    FILE *f_in;
    FILE *f_out;
    f_in=fopen("in_lab5_9.txt","rt");
    f_out=fopen("out_lab5_9.txt","wt");

    int n;
    fscanf(f_in,"%d",&n);

    if (n>20) { fprintf(f_out,"Necorectni dani!"); return 0; }

    float x, a[n][n];
    fscanf(f_in,"%f",&x);

    float s=0, power=1;

    for(int i=0;i<n;i++) { power*=x; for(int j = 0;j < n; j++) fscanf(f_in,"%f",&a[i][j]); }

    for(int i = 0;i < n; i++) {
        int c = 1;
        power /= x;

        for (int j = 0; j < n; j++)
            if (a[i][j] > 0) { s += a[i][j] * power; c = 0; j = n; }
        if (c == 1) s += power;

    }

    fprintf(f_out,"Result: %.*f",2,s);
    fclose(f_out);


    return 0;
}
