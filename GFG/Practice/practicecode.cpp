#include <iostream>
using namespace std;
void travel_Pass();
int main() {
	// your code goes here
	travel_Pass();
	return 0;
}
void travel_Pass()
{
    int i=0;
    int n,N,a,b;
    string s;
    cin>>n;
    
    int districtcount=0;
    int statecount=0;
    for(int i=0;i<n;i++)
    {
        districtcount=0;
        cin>>N>>a>>b;
        getchar();
        statecount=0;
        cin>>s;
        i=0;
        while(i<N)
        {
            if(s[i] == '0')
            {
                districtcount++;
            }
            else
                statecount++;
            i++;
        }
     cout<<(a*districtcount) + (b*statecount)<<endl;
    }
}