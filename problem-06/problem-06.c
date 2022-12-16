#include<stdio.h>
int main()
{
    FILE *input, *output;
    input = fopen("input.txt","r");
    output = fopen("output.txt","a");

    if(input == NULL)
        printf("Input not available");


        int yr;
        fscanf(input,"%d", &yr);



        if(yr%400==0 || (yr%100!=0 && yr%4==0))
        {
            fprintf(output,"%d--> YES\n",yr);
        }
        else
            fprintf(output,"%d--> NO\n",yr);


    return 0;
}
