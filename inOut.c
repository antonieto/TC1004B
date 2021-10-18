#include <unistd.h>
#include <stdio.h>
#include <ctype.h>

int main(){
char c;
char upperC;

read(STDIN_FILENO,&c,1);
upperC = toupper(c);
write(STDOUT_FILENO,&upperC,1);

return 0;
}