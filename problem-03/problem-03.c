#include <stdio.h>
int main()
{
    FILE *input, *output;
    input = fopen("input.txt", "r");
    output = fopen("output.txt", "w");

    if (input == NULL)
        printf("Input not available !\n");

    int t;
    fscanf(input, "%d", &t);

    while (t--)
    {
        int n;
        fscanf(input, "%d", &n);

        if (n < 0)
        {
            for (int i = n; i <= -n; i++)
                fprintf(output, "%d ", i);

            fprintf(output, "\n");
        }
        else
        {
            for (int i = n; i >= -n; i--)
                fprintf(output, "%d ", i);

            fprintf(output, "\n");
        }
    }
    fclose(input);
    fclose(output);

    return 0;
}
