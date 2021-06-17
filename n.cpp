#include<bits/stdc++.h>
using namespace std;
{
    Result ans;
    if(input2==0 || input2==1)
      {
        for(int i=0;i< input1 ;i++)
        {
          ans.output1[i]=input3[i]; 
        }
        return ans;
      }

    if(input2 % input1 == 0)
      input2 = input1;

    if(input2 > input1 )
        input2 = input2 % input1;

      int last = input3[input2-1];

      for(int i = input2-1 ; i>0; i-- )
      {
        input3[i] = input3[i-1] ;
      }

      input3[0]=last;
      
      for(int i=0;i< input1 ;i++)
      {
        ans.output1[i]=input3[i];
      }
    
    return ans;

}

int main()
{
	
	return 0;
}

