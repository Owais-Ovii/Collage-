#include <stdio.h>

int main() {

    char arr[]="Aaj kuch tufaani kartay hain";


for (char *i=arr+sizeof(arr); i>arr;i--)
{

printf("%c",*i);

}

    return 0;
}
