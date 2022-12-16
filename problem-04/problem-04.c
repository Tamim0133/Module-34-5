#include<stdio.h>
int main()
{
    FILE *input, *output;
    input = fopen("input.txt","r");
    output = fopen("output.txt","w");

    if(input == NULL)
    {
        printf("not found !");
        return 0;
    }
    int n;
    fscanf(input,"%d", &n);

    int arr[n];
    for(int i=0; i<n; i++)
    fscanf(input,"%d", &arr[i]);

    int s = 0;
    for(int i=0; i<n; i++)
    s+=(arr[i]%10);

    fprintf(output,"%d",s);
    return 0;
}
