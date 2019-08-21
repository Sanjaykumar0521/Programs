#include<iostream>
#include<vector>
#include<string>
using namespace std;

vector<int>prefix_function(string z)
{
    int n=(int) z.length();
    vector<int> F(n);
    F[0]=0;
    for(int i=1;i<n;i++)
    {
        int j=F[i-1];
        while(j>0 && z[i]!=z[j])
        {
            j=F[j-1];
        }
        if(z[i]==z[j]) ++j;
        F[i]=j;

    }
    return F;
}

int main()
{
    string p,t,s;
    int n,i,c=0,lp,k=0;
    cout<<"Enter a string ";
    cin>>t;
    cout<<"Enter pattern ";
    cin>>p;
    s=p+'#'+t;
    lp=p.length();
    n=s.length();
    vector<int> F(n);
    vector<int> ind(n);
    F=prefix_function(s);
    for(i=0;i<n;i++)
    {
        if(F[i]==lp)
        {
            c++;
            ind[k]=i-2*lp;
            k++;
        }

    }
    cout<<"No. of occurrence of pattern "<<c<<endl;
    for(i=0;i<c;i++)
    {
     cout<<"At index "<<ind[i]<<endl;
    }

    return 0;
}
