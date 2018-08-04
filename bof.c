#include <stdio.h>
#include <string.h>

void printKey()
{
printf("key : du^82i!<\n");
}

int main()
{
char S[10];
char Password[10] = "!1234his";
scanf("%s",S);
if(!strcmp(S,Password))
	printKey();
else
	printf("Wrong!!\n");

}
