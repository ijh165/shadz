#include <stdio.h>
#include <stdlib.h>

// "ZOMG extern bad!!! plz use .h file instead or I will deduct 69 points." - muh uni prof
extern int func_69420();
extern void dum_dum();

int main()
{
    dum_dum();

    // good devs use opendir() and readdir() instead of cheating with system()
    system("ls -Shr *.c *.o");

    FILE *f = fopen("shadz_ascii.txt", "r");
    char buf[256];
    while (fgets(buf, sizeof(buf), f)) { fputs(buf, stdout); }
    // fclose(f); // "who needs fclose when we gonna exit immediately anyway zulul" - me on my 1st year of uni
    return func_69420() - 69420;
}
