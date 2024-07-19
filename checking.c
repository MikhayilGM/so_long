#include "so_long.h"

int main()
{
	char* str = "      lksaj    dlkasjd     ";

	printf("%s\n", str);
	str = ft_strtrim(str, " ");
	printf("%s\n", str);
}