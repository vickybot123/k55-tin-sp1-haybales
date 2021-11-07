#include <iostream>
#include "arrays.h"

using namespace std;


int main()
{
    int numHayBales, numQuestions;
    cin >> numHayBales >> numQuestions;

    int hayBales[numHayBales];
    for(int i; i<numHayBales; i++)
        cin >> hayBales[i];

    int qa[numQuestions], qb[numQuestions];
    for(int i; i<numQuestions; i++)
        cin >> qa[i] >> qb[i];


    for(int i=0; i<numHayBales-1; i++)
        for(int j=i+1; j<numHayBales; j++)
            if(hayBales[i]>hayBales[j])
                arrays::swapIntArray(hayBales,i,j);

    for(int i=0; i<numQuestions; i++)
    {
        int a = qa[i];
        int b = qb[i];
        // [a,b]
        int countGrass=0;
        for(int j=0; j<numHayBales; j++)
        {
            int pos = hayBales[j];
            if(pos>=a && pos<=b )
                countGrass++;
            if(pos>b)
                break;
        }
        cout << countGrass << endl;
    }
}
