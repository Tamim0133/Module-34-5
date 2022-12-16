#include<stdio.h>
int main()
{
    FILE *input , *output;
    input = fopen("input.txt", "r");
    output = fopen("output.txt","w");

    if(input == NULL)
    printf("Input file not found ! \n");

    int n;
    fscanf(input , "%d", &n);
//    printf("%d", n);
    int k = n;

    while(n--)
    fprintf(output,"%d ",k-n);

    fclose(input);
    fclose(output);
    return 0;
}
