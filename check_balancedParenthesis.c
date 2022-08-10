int check_balancedParenthesis(char *expr)  //string that contains curved brackets, eg. "(2*a)+(3-2(a^2-b^3))", is given as input parameter
{
	int len = strlen(expr), opencount = 0;
	
	for(int i=0; i<len; i++)
	{
		if(expr[i] == '(') ++opencount;
		else if(expr[i] == ')')  --opencount;
		
		if(opencount < 0) break;
	}
	
	if(opencount == 0) return 1; //"balanced"
	else return 0; //"not balanced"
}
