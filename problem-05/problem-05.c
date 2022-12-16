#include<stdio.h>
int main()
{
    FILE *input , *output;
    input = fopen("input.txt","r");
    output = fopen("output.txt","w");

    if(input == NULL)
    printf("Input not avaiable");

    int n;
    fscanf(input,"%d", &n);

    for(int i=1; i<=n; i++)
    {
        for(int sp=1; sp<=n-i; sp++)
        {
            fprintf(output," ");
        }
        for(int j=1; j<=n; j++)
        {
            fprintf(output,"#");
        }
        fprintf(output,"\n");
    }

    return 0;
}
