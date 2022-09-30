int recur(int n)
{
	if(n>0)
	{
		return n*recur(n-1);
	}
	else
	{
	    return 1;    
	}
}

int main()
{
	int n=0, res=0;
	printf("La variable n: ");
	scanf("%d",&n);
	res=recur(n);
	printf("%d: %d\n",n,res);
}

