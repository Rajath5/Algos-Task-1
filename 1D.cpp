#include <iostream>

using namespace std;

int main()
{
    int arr[6];
    for(int i=0;i<6;i++)
    {   
        arr[i]=1;
        cout<<arr[i]<<" ";
    }
    int qcount = 4;
    int query[qcount];
    cout<<"\nQuery for 0 and 1: ";
    cin>>query[0];
    cout<<"\nQuery for 1 and 2: ";
    cin>>query[1];
    cout<<"\nQuery for 2 and 3: ";
    cin>>query[2];
    cout<<"\nQuery for 3 and 4: ";
    cin>>query[3];
    
    for(int i=0;i<qcount;i++)
    {
        if(query[i]%10==0)
        {
           if(query[i+1]%10==0)
           {
               arr[i+1] = 10;
               arr[i+2] = query[i+1]/10;
               arr[i] = query[i]/10;
           }
           else
           {
               if(i==0)
               {
                   arr[i]=10;
                   arr[i+1]=query[i]/10;
               }
               if(i==qcount-1)
               {
                   arr[i+1]=10;
                   arr[i]=query[i]/10;
               }
           }
        }
        if(query[i]%43==0)
        {
           if(query[i+1]%43==0)
           {
               arr[i+1] = 43;
               arr[i+2] = query[i+1]/43;
               arr[i] = query[i]/43;
           }
           else
           {
               if(i==0)
               {
                   arr[i]=43;
                   arr[i+1]=query[i]/43;
               }
               if(i==qcount-1)
               {
                   arr[i+1]=43;
                   arr[i]=query[i]/43;
               }
           }
        }
        if(query[i]%9==0)
        {
           if(query[i+1]%9==0)
           {
               arr[i+1] = 9;
               arr[i+2] = query[i+1]/9;
               arr[i] = query[i]/9;
               cout<<"\nHello\n";
           }
           else
           {
               if(i==0)
               {
                   arr[i]=9;
                   arr[i+1]=query[i]/9;
               }
               if(i==qcount-1)
               {
                   arr[i+1]=9;
                   arr[i]=query[i]/9;
               }
           }
        }
         if(query[i]%7==0)
        {
           if(query[i+1]%7==0)
           {
               arr[i+1] = 7;
               arr[i+2] = query[i+1]/7;
               arr[i] = query[i]/7;
           }
           else
           {
               if(i==0)
               {
                   arr[i]=7;
                   arr[i+1]=query[i]/7;
               }
               if(i==qcount-1)
               {
                   arr[i+1]=7;
                   arr[i]=query[i]/7;
               }
           }
        }
        if(query[i]%16==0)
        {
           if(query[i+1]%16==0)
           {
               arr[i+1] = 16;
               arr[i+2] = query[i+1]/16;
               arr[i] = query[i]/16;
           }
           else
           {
               if(i==0)
               {
                   arr[i]=16;
                   arr[i+1]=query[i]/16;
               }
               if(i==qcount-1)
               {
                   arr[i+1]=16;
                   arr[i]=query[i]/16;
               }
           }
        }
        
    }
    
 int mf =1; int flag=0;
    for(int i=0;i<6;i++)
    {   
       if(i==0)
       {
           mf=7;
           flag=0;
       }
          if(i==1)
       {
           mf=8;
           flag=0;
       }
          if(i==3)
       {
           mf=10;
          flag=0;
       }
          if(i==4)
       {
           mf=43;
          flag=0;
       }
          if(i==5)
       {
           mf=16;
          flag=0;
       }
          if(i==2)
       {
           mf=9;
          flag=0;
       }
       for(int j=0;j<5;j++)
       {
           if(arr[j]==mf)
           {
               flag++;
           }
           if(j==4&&flag==0)
           {
               arr[j+1] = mf;
           }
       }
    }
    
    
    
    
    
    if(arr[0]*arr[1]!=query[0])
    {
        int temp = arr[0];
        arr[0] = arr[1];
        arr[1] = temp;
    }
      
    if(arr[1]*arr[2]!=query[1])
    {
        int temp = arr[1];
        arr[1] = arr[2];
        arr[2] = temp;
    }
      
    if(arr[2]*arr[3]!=query[2])
    {
        int temp = arr[2];
        arr[2] = arr[3];
        arr[3] = temp;
    }
      
    if(arr[3]*arr[4]!=query[3])
    {
        int temp = arr[3];
        arr[3] = arr[4];
        arr[4] = temp;
    }
    
      for(int i=0;i<6;i++)
    {   
        
        cout<<arr[i]<<" ";
    }
    

    return 0;
}
