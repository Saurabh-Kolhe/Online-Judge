#include <iostream>
using namespace std;
int main()
{

	int T;
 	cin>>T; 
		for(int i=0;i<T;i++)
		{
                   char s1[1001];
                   char s[101];
                   cin>>s;
                   int k=0;
                         for(int j=0;s[j]!='\0';j++)
			{   
			       if(s[1]!='\0')
                          {            
				if(s[j]==s[j+1])
                   		{
					s1[k]=s[j];
					k++;
                                         s1[k]='*';
				}
                                else
	 			{  
					s1[k]=s[j];
				}
				k++;
                          }
                        }

                   cout<<s1<<endl;
                }
  return 0;
}