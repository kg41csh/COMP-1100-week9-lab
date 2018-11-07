#include <iostream>

using namespace std;

int main() {


int passes  [] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
int failures[] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };

int students [10];

for (int n = 0; n < 10; n++) 
{
    cout << "Enter your result: " ;
    cin  >> students[n];

    if ( students[n] >= 50 )
    {
        cin >> passes[n];
    }

    else 
    {
        failures[n];        
    }

}

for ( int n =0; n < 10; n++ ) 
{
    cout << "The passes are   " << passes[n];

    if (passes[n] >= 80) 
    {
        cout << "----" << "grade A" << endl;
    }

        else if (passes[n] >= 70)
        {
            cout << "----" << "grade B" << endl;
        }

        else if (passes[n] >= 60)
        {
            cout << "----" << "grade C" << endl;
        }
        else if (passes[n] >= 50)
        {
            cout << "----" << "grade D" << endl;
        }
    else 
    {
        cout << " ----" << "N/A" << endl;
    }
}

for  ( int n =0; n < 10; n++ ) 
{ 
    cout << "The failures are " << failures[n];
        if ((failures[n] > 1) && (failures[n] <50))
        {
            cout << "----" << "grade F" << endl;
        } 

        else 
        {
            cout << " ----" << "N/A" << endl;
        }
}

return 0;
}

