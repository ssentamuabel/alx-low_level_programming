/**
 *  is_separater - separatess
 *  @c: the character to check
 *
 *  Return: int
 */
int is_separator(char c);
/**
 *  is_lower_case - checks for lower case
 *  @c: character to check 
 *  Return: int
 */
int is_lower_case(char c);
/**
 *  cap_string - capitalize all the words
 *
 *  Return: address to the string
 */
char *cap_string(char *)
{
	 int capitalize_next = 1;
	 int i;
	 
	 for (i = 0; str[i] != '\0'; i++)
	 {
		 if (capitalize_next && is_lower_case(str[i]))
		 {
			 str[i] -= 32;
			 capitalize_next = 0;
		 }
		 else if (is_separator(str[i]))
		 {
			 capitalize_next = 1;
		 }
	 }

    return(str);
}
int is_lower_case(char c)
{
	return (c >= 'a' && c <= 'z');
}

int is_separator(char c)
{
	return (c == ' ' || c == '\t' || c == '\n' || c == ',' || c == ';' || c == '.' || c == '!' || c == '?' || c == '"' || c == '(' || c == ')' || c == '{' ||  c == '}');
}
