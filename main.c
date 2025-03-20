#include "stdio.h"
#include "area.h"

int main()
{
	char answer;
	while(1)
	{	
		printf("[S]square or [T]triangle or [C]curcle ===> ");
		scanf(" %c", &answer);
		if(answer == 'S' || answer == 's')
		{
			square();
			break;	
		}
		else if(answer == 'T' || answer == 't')
		{
			triangle();
			break;	
		}
		else if(answer == 'C' || answer == 'c')
		{
			curcle();
			break;
		}	
	}
	return 0;
}
