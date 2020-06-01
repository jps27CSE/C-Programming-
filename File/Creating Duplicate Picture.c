#include<stdio.h>
#include<stdlib.h>
int main()
{
    FILE *in,*out;

    char *input="test.png";
    char *output="TestOutput.png";

    int ch;

    in=fopen(input,"rb");

    if(in==NULL)
    {
        perror("Failed to open File");

        return EXIT_FAILURE;
    }

    out=fopen(output,"wb");

    while(1)
    {
        ch=fgetc(in);
        if(ch==EOF)
        {
            break;
        }

        fputc(ch,out);

    }

    fclose(in);
    fclose(out);

}