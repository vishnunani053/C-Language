// #include <stdio.h>
// char read(void)
// int main()
// {
//     char* name;
//     name = read();
//     printf("welcome to %c",name);
//     return 0;
// }

// char read(void){
//     char* name;
//     printf("Enter your name:");
//     gets(name);
//     return name;
// }



#include <stdio.h>

typedef char Name[100];  // Define a typedef for a fixed-size array

Name* read(void);

int main() {
    Name* name;
    name = read();
    printf("Welcome to %s", *name);
    return 0;
}

Name* read(void) {
    static Name name;  // Use static storage to preserve the array after the function returns

    printf("Enter your name: ");
    fgets(name, 100, stdin);  // Read input safely
    return &name;
}