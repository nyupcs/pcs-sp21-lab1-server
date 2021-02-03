/* service/echo.c */
#include<stdio.h>
#include<stdlib.h>
#include<string.h>    //strlen
#include<unistd.h>    //write

int main()
{
    char buf[256];
    char *cmd_prefix = "echo ";
    while (1)
    {
      strcpy(buf, cmd_prefix);
      gets(buf + strlen(cmd_prefix));
      system(buf);
      fflush(stdout);
    }
    return 0;
}
