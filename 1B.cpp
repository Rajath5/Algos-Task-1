#include <iostream>

using namespace std;

int main()
{  
    
    //Input
    
    cout<<"enter the length: ";
    int length;
    cin>>length;
    
    //To check if the length is a power of 2
    int tempLength = length;
    while(tempLength>1)
    {    
        if(tempLength%2!=0)
        {
         cout<<"Invalid length";
         return 0;  
        }
        tempLength=tempLength/2;
        
    }
  
    cout<<"\nEnter the String: ";
    char str[length];
    cin>>str;


    
    //To check Symmetry
    
    int flag = 0;
    int count = 0;
    
    if(length==1)
    {
      cout<<"Degree of symmetry = 0";
    }
    
   while(length!=1)
    {   count++;
        for(int i=0;i<(length/2);i++)
        {
            if(str[i]!=str[length/2 + i])
            {
                flag++;
                cout<<"Degree of symmetry = 0";
                return 0;
            }
        }
        
        if(flag==0)
        {
            
            length = length/2;
         
        }
    }
    
    cout<<"\nThe degree of symmetry is "<<count;
    
   return 0;
}