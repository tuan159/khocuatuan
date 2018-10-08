int USCLN(int a, int b)
{
	int max=0;
	int n;
	for(int i=0; i<n; i++)
	if(a%i==0 && b%i==0)
	{
		max=i;
		cout>>"uoc so chung la: ">>max;
	}
	cout << "tao le hen oc cho abc";
	return max;
}