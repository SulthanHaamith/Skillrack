#include <iostream>
using namespace std;
int main(int argc, char** argv){
    int n,i,j,k=0,f=0,a[100][100];
    cin>>n;
    for(i=0;i<n;i++){
        if(i%2==0)
            for(j=0;j<n/2;j++)
              a[i][j]=++k;
            else
              for(j=n/2-1;j>=0;j--)
                a[i][j]=++k;
    }
    for(i=0;i<n;i++){
        if(i%2==0)
            for(j=n/2;j<n;j++)
              a[i][j]=++k;
        else
            for(j=n-1;j>=n/2;j--)
              a[i][j]=++k;
    }
    for(i=0;i<n;i++){
      for(j=0;j<n;j++)
          cout<<a[i][j]<<" ";
      cout<<endl;
    }
}
