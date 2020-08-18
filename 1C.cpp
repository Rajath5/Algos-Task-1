#include <iostream>

using namespace std;

int main()
{
  cout<<"Enter the value of n,r,x,y: "  ;
  int n,r,x,y;
  int sum = 0;
  cin>>n>>r>>x>>y;
  cout<<"Enter the sequence of integers separated by space,value equals 1 if a contest takes place on the day else 0 otherwise: ";
  int contest[n];
  for(int i=0;i<n;i++)
  {
      cin>>contest[i];
  }
  cout<<"Enter the sequence of integers separated by space,value equals 1 if he eats SCN on the day else 0 otherwise: ";
    int scn[n];
  for(int i=0;i<n;i++)
  {
      cin>>scn[i];
  }
  for(int i=0;i<n;i++)
  {
      if(contest[i]==1)
      {
          if(scn[i]==1)
          {
              sum+=x;
          }
          if(scn[i]==0)
          {
            sum-=y;
          }
          if(scn[i]!=0&&scn[i]!=1)
          {
              cout<<"Enter valid data";
              return 0;
          }
      }
  }
  
  if(sum>0)
  {
      cout<<"PROMOTED";
  }
  if(sum==0)
  {
      cout<<"NO CHANGE";
  }
  if(sum<0)
  {
      cout<<"DEMOTED";
  }
  
  return 0;
  
  
}
