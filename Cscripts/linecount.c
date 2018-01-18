#include <stdio.h>
#define MAXLINE 1000 /* maximum input of line length*/

/* read a line into s, return length*/
int betline(char s[], int lim)
{
	int c, i;

	for ( i = 0; i < lim-1 && (c=getchar())!= 'q' & c!='\n' ; ++i)
		s[i] = c;
	if (c=='\n')
	{
		/* code */
		s[i]=c;
		++i;
	}
	s[i]='\0';
	return i;
}

/* copy 'from' into 'to'; assume to is big enough */
void copy(char to[], char from[])
{
	int i;

	i=0;
	while((to[i]=from[i]) != '\0')
		++i;
}

/* print the longest input line*/
int main()
{
	int len;			/* current line length*/
	int max;			/* max length seen so far*/
	char line[MAXLINE]; /* current input line*/
	char longest[MAXLINE]; /* longest line saved here*/


	max=0;
	while((len=betline(line, MAXLINE)) > 0)
		if(len > max)
		{
			max=len;
			copy(longest, line);
		}
		if(max > 0) /* there was a line*/
			printf("%s", longest);
		return 0;
}