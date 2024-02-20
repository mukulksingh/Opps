k=k%n;
while(k--)
{
    int temp=a[0];
    for(int i=0 ;i<n i++){
        a[i]=a[i+1];
    }
    a[n-1]=temp;

    
}



// 2 sum brute force

for(int i=0;i<n-1;i++){
    for(int j=0;j<n;j++){
        if(a[i]+a[j]==target)
        {
            return true;
        }
        return false ;
        }
    }
    // time complexity 0(n*n)
    
