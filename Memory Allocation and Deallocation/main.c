#include <stdio.h>
#include <stdlib.h>
char* message;

int main()
{
    int message_length=10;
    message=(char*)calloc(message_length+1, sizeof(char));
    for(int i=0; i<message_length; i++){
        *(message+i)='L';
    }
    for(int i=0; i<message_length; i++){
        printf("%c",*(message+i));
    }
    return 0;
}
