int ricorsiva(int a)
{
	if( a == 1 ) return 0;
	else return a+ricorsiva(a-1);
}

int main()
{
	int a = 10;
	int b = 9;
	return b*ricorsiva(a);
}