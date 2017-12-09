#include <stdio.h>
#include <stdlib.h>
int main()
{
    FILE *f_in;
    FILE *f_out;
    f_in=fopen("in_lab5_22.txt","rt");
    f_out=fopen("out_lab5_22.txt","wt");

    int n;
    fscanf(f_in,"%d",&n);

    if (n>15) {fprintf(f_out,"Necorectni dani!"); return 0;}

    float a[n][n];

    for(int i = 0;i < n; i++) for(int j = 0;j < n; j++) fscanf(f_in,"%f",&a[i][j]);

    int printed = 0;

    for(int i = 0;i < n; i++)
    {
        int repeated = 0;

        for (int j = 0; j < n-1; j++) {
            for (int k = 0; k < n; ++k) {
                if (a[i][j] == a[i][k] && j!=k) { j = n; repeated = 1; }
            }
        }

        if (repeated == 0) { fprintf(f_out,"%d ", i+1); printed = 1; }
    }

    if (printed == 0) fprintf(f_out,"Elementy povtoryytsa skriz");
    fclose(f_out);


    return 0;
}
