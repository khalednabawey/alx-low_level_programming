/**
 * _isalpha -> a function that checks for lowercase character.
 *
 * @c: c is an integer argument
 *
 * Return:
 * -> 1 if c is letter.
 * -> 0 otherwise
 */
int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		return (1);
	else
		return (0);
}
