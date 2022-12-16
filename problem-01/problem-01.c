#include<stdio.h>
int main()
{
    FILE *file_input, *file_output;
    file_input = fopen("input.txt","r");
    file_output = fopen("output.txt","w");

    if(file_input == NULL)
        printf("File does not exists ! \n");

    while(1)
    {
        char c = fgetc(file_input);
        if(c == EOF)
        {
            break;
        }
        fputc(c,file_output);
    }

    return 0;
}
