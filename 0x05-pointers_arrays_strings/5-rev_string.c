/**
 * rev_string - reverses the string
 * @s: The string to be reversed
 */
void rev_string(char *s)
{
	int len = 0;
	char *start = s;
	char *end = s;
	char m;

	while (*end != '\0')
	{
		len++;
		end++;
	}
	end--;

	while (start < end)
	{
		m = *start;
		*start = *end;
		*end = m;

		start++;
		end--;
	}
}
