#define INF 2147483647
using namespace std;
int a[30],mincnt[30],maxcnt[30],t[30];
int main()
{
    int T;
    int n,mina,maxa,mini,maxi,k,res,pd1,pd2;
    scanf("%d",&T);
    while(T--)
    {
    	scanf("%d",&n);
    	mina=21;
    	maxa=-21;
    	memset(mincnt,0,sizeof(mincnt));
    	memset(maxcnt,0,sizeof(maxcnt));
    	mini=maxi=res=0;
    	pd1=pd2=1;
    	for(int i=1;i<=n;i++)
	    {
	        scanf("%d",&a[i]);
	        if(mina>a[i])mina=a[i],mini=i;
	        if(maxa<a[i])maxa=a[i],maxi=i;
	    }
	    if(maxa<=0)
	    {
			pd1=0;	
	    }
	    if(mina>=0)
	    {
	    	pd2=0;
	    }
	    for(k=0;k<=5;k++)
	    {
	    	for(int i=1;i<=n;i++)
		    {
		    	t[i]=a[i];
		        if(t[i]<0&&pd1)
		        {
		        	while(t[i]<0)
		        	{
		        		maxcnt[k]++;
		        		t[i]+=maxa*(1<<k);
		        	}
		        }
		        else if(t[i]>0&&pd2)
		        {
		        	while(t[i]>0)
		        	{
		        		mincnt[k]++;
		        		t[i]+=mina*(1<<k);
		        	}
		        }
		    }
		    maxcnt[k]+=k;
		    mincnt[k]+=k;
		    if(maxcnt[k]<=32-n&&pd1)
		    {
		    	res=1;
		    	break;
		    }
		    if(mincnt[k]<=32-n&&pd2)
		    {
		    	res=2;
		    	break;
		    }
	    }
	    
	    if(res==1)
	    {
	    	printf("%d\n",n-1+maxcnt[k]);
	    	for(int i=1;i<=k;i++)
	    	{
	    		printf("%d %d\n",maxi,maxi);
	    	}
	    	for(int i=1;i<=n;i++)
	    	{
	    		t[i]=a[i];
	    		while(t[i]<0)
	        	{
	        		printf("%d %d\n",i,maxi);
	        		t[i]+=maxa*(1<<k);
	        	}
	    	}
	    	for(int i=2;i<=n;i++)
	    	{
	    		printf("%d %d\n",i,i-1);
	    	}
	    }
	    else if(res==2)
	    {
	    	printf("%d\n",n-1+mincnt[k]);
	    	for(int i=1;i<=k;i++)
	    	{
	    		printf("%d %d\n",mini,mini);
	    	}
	    	for(int i=1;i<=n;i++)
	    	{
	    		t[i]=a[i];
	    		while(t[i]>0)
	        	{
	        		printf("%d %d\n",i,mini);
	        		t[i]+=mina*(1<<k);
	        	}
	    	}
	    	for(int i=n-1;i>=1;i--)
	    	{
	    		printf("%d %d\n",i,i+1);
	    	}
	    }
	    else
	    {
	    	puts("0");
	    }
    }
    return 0;
}
