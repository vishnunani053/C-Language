// #include <stdio.h>

// int main()
// {
//     FILE *fp;
//     fp = fopen("C:/Users/Vishn/OneDrive/Desktop/C-Progam/file-handling/test.txt", "r");
//     if(fp == NULL){
//         printf("could not open the file \n");
//     }else{
//         printf("file opened sucessfully..");
//     }

//         return 0;
// }

#include <stdio.h>

int main()
{
    FILE *fp;
    fp = fopen("C:/Users/Vishn/OneDrive/Desktop/C-Progam/file-handling/test.txt", "r");

    if (fp == NULL)
    {
        printf("no file found");
    }
    else
    {
        printf("file read sucessfully");
    }
    return 0;
}