# include<stdio.h>
# include<math.h>
int main() {
/*This is the uses of switch with characters in program.
Nested switch (switch inside switch) are allowed.*/
    char day;
    printf("Enter day(1-7):");
    scanf("%c",&day);

    switch (day) {
        case 'm' : printf("monday\n");
                 break;
        case 't' : printf("tuesday\n");
                 break;
        case 'w' : printf("wednesday\n");
                 break;
        case 'T' : printf("thursday\n");  
                 break;
        case 'f' : printf("friday\n");
                 break;
        case 's' : printf("saturday\n");
                 break;
        case 'S' : printf("sunday\n");
                 break;
        default : printf("not a valid day!\n");
    }
    return 0;
}