#include<iostream>
int main()
{
    int type;
    scanf("%d",&type);
    switch(type)
    {
        case 1:
            printf("You selected 1\n");
            break;
        case 2:
            printf("You selected 2\n");
            break;
        case 3:     
            printf("You selected 3\n");
            break;
        default:
            printf("You selected an invalid option\n");     
    }
    return 0;
}