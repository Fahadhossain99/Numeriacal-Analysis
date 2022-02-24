#include<bits/stdc++.h>

using namespace std;
  
int main(){
    float ax[100],ay[100],dif[100][100],nr=1,dr=1,h,yp,x,p;
    int i,j,k,n;
    
    cout<< "how many elements you want to insert? ";
    cin>>n;
    
    for(i=0;i<n; i++)
    {
        cin>>ax[i]>>ay[i]; 
    }
    cout<<"input  value";
    cin >> x;
    
    h=ax[1] - ax[0];
    
    
    for(i=0; i<n-1; i++)
    {
        dif[i][1]= ay[i+1] - ay[i];
    }
    for( j=2; j<=n-1; j++)
    {
       for (i=0;i<=n-j;i++)
       {
           dif[i][j]=dif[i+1][j-1] - dif[i][j-1];
       }
    }
    
    i=n-1;
    
    p = (x-ax[i])/h;
    yp=ay[i];
    i--;
    
    for(k=1;k<n;k++)
    {
        nr*=p+k-1;
        dr*=k;
        yp+=(nr/dr)*dif[i--][k];
    }
    
    cout<<"the value is "<<yp;
    
    return 0; 
/* 40 184
  50 204
  60 226
  70 250
  80 276
  90 304 */
}