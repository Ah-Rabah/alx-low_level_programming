#include <stdio.h>
/**
* mian - entry point
*
* Return:always 0
*/
int main(void)
{
char a;
for (a ='a'; a <= 'z'; a++)
{
if (a == 'q' || a == 'e')
contnue;
else
putchar(a);
}
putchar('\n');
return (0);
}
