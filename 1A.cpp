#include<math.h>
#include <iostream>

using namespace std;

void decToBinary (int,int);

int main()
{
    int length;
    cout<<"Enter the length: ";
    cin >> length;
    double str;
    cout<<"Enter the string: ";
    cin>>str;
    long int tempstr = str;
    long int arr[length];
    for(int i=0;i<length;i++)
    {
        int j=i+1;
   
            if(str!=0)
            {
                if(pow(10,i)<=str && pow(10,j)>str)
                {   
                    for(int k =length-1;k>=0;k--)
                    {
                        if(k>length-1-j)
                        {
                            arr[k] = tempstr%10;
                            tempstr=tempstr/10;
                        
                        }
                        else
                        {
                            arr[k]=0;
                        }
                    }
                }
            }
            else
            {
                for(int i =0;i<length;i++)
                {
                    arr[i] =0;
                }
            }
    }
    int flag = 0;
    int number=0;
    int maxnum=0;
    for(int i=0;i<length;i++)
    {   
        number+=(pow(2,length-1-i)*arr[i]);
        maxnum+=pow(2,length-1-i);
        if(arr[i]!=0&&arr[i]!=1)
        {
            flag++;
        }
    }
    
    int l = 0;
  
    for(int i=1;i<=maxnum;i++)
    {
        for(int j=1;j<=maxnum;j++)
        {
            if(i!=j && l==0 && flag ==0)
            {
                if((i+j) == 2*number)
                {   
                    cout<<"num1= ";
                    decToBinary(i,length);
                    cout<<"\n"<<"num2= ";
                    decToBinary(j,length);
                    l++;
                }
            }
        }
    }
    if(flag!=0)
     {
      cout<<"Invalid string";
     }
   return 0;
}
void decToBinary(int n,int length) 
{ 
 
    int binaryNum[32]; 
  

    int i = 0; 
    while (n > 0) { 
        binaryNum[i] = n % 2; 
        n = n / 2; 
        i++; 
    } 
    if(i<length)
    {
        for (int j = length - 1; j > i-1; j--) 
        binaryNum[j]=0; 
    }
    
  

    for (int j = length - 1; j >= 0; j--) 
        cout << binaryNum[j]; 
}