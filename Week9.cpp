
#include <iostream>

using namespace std;

int main() {

int passes  [] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
int failures[] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
int insert, n;

cin >> "Enter your grade: " >> insert >> endl;

for (int n = 0; n < 10; ++n) 
{
    if ( passes[n] >= 0 ) 
    {
        cout << "The passes are " << passes[n] << "." << endl;
    }
}

for (int n = 0; n < 10; ++n) {

    if ( failures[n] <= 0 ) {

        cout << "The failures are " << failures[n] << ". " << endl;
    }
}

return 0;
}

