#include <iostream>
using namespace std;

void print_rotated(int* arr,int size,int deg)
{
    int rotated[size];
    int pos;
    for(int index = 0;index < size;index++ )
    {
        //new index = original index - degree
        pos = index - deg;
        if(pos < 0)
            pos = pos + size;
            
        rotated[pos] = arr[index];
        
    }
    for(int i = 0;i<size;i++)
    {
        cout<<rotated[i]<<" ";
    }
    printf("\n");
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int size,deg;
        cin>>size;
        cin>>deg;
        int arr[size];
        for(int i = 0;i<size;i++)
        {
            cin>>arr[i];
        }
        print_rotated(arr,size,deg);
 
    }
	
	return 0;
}

/*Logic

[1,2,3,4,5] 

D = 1

[2,3,4,5,1]

rotation by one anti clockwise

[3,4,5,1,2]
*/
