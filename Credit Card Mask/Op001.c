#include <string.h>

char *maskify (char *masked, const char *string)
{
  int n = strlen(strcpy(masked, string)) - 4;
  if (n > 0) memset(masked, '#', n);
	return masked;
}

