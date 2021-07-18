#include <iostream>
#include<string>
using namespace std;

int main()
{
    int testCases;
    cin>>testCases;

    for(int i=0;i<testCases;i++){
        string stringInput;
        cin>>stringInput;
        int stringLength=stringInput.length();
        
        if(stringLength<=10){
            cout<<stringInput<<endl;
        }else{
            char firstLetter=stringInput[0];
            char lastLetter=stringInput[stringLength-1];

            cout<<firstLetter<<stringLength-2<<lastLetter<<"\n";
        }
    }

    return 0;
}
