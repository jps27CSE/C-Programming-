#include<stdio.h>
#include<stdlib.h>
int main()
{
    int return_value;

    char *filename="test.png";

    return_value=remove(filename);

    if(return_value==NULL)
    {
        perror("File remove Failed ");

        return 1;
    }

    printf("%s remove successfully \n",filename);

    
}