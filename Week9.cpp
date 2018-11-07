
#include <iostream>

using namespace std;

int main() {


// initialize each value to 0
int passes  [] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };             // set 10 arrays for size of studendts
int failures[] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };             // set 10 arrays for size of studendts
int examresults[10];                                           //initialize examresults to 10
int NumStudent = sizeof(examresults) / sizeof(examresults[0]); //initialize students to 10

int n; 
int x = 0;
int y = 0;
passes[0] = 0;
failures[0] = 0;

for ( n = 0; n < NumStudent; n++ ) {    // looping from 0 to 9(10 students)
    
    cout << "Enter exam result: " ;// Enter students' examresults
    cin  >> examresults[n]; // getting the exam result and adding that into the examresults' arrays
    

        if ( examresults[n] >= 50 ) {   

            passes[x] = examresults[n]; // if the student passed, add the result to passes
            x += 1;
               
        }

        else {   
            
            failures[y] = examresults[n]; // // if the student didn't pass, add result to failures
            y += 1;
        } 
}

cout << "   " << endl; // making line space between student and passes

for ( n=0; n< NumStudent; n++) {
    
    cout << "student " << n+1 << " -----" << examresults[n] << endl; // print arrays' data of students
} 
            

// making line space between student and passes
cout << "   " << endl;

for ( n =0; n < NumStudent; n++ ) {
    
    cout << "The passes are   " << passes[n];

    if (passes[n] >= 80) { 
        cout << "----" << "grade A" << endl; // print grade A if passes is over 80
    }

        else if (passes[n] >= 70) {
            cout << "----" << "grade B" << endl; // print grade B if passes is over 70
        }

        else if (passes[n] >= 60) {
            cout << "----" << "grade C" << endl; // print grade C if passes is over 60
        }
        else if (passes[n] >= 50) {
            cout << "----" << "grade D" << endl; // print grade D if passes is over 50
        }
    else {
        cout << " ----" << "N/A" << endl;
    }
}

if (x >= 8) {    //if eight or more students passed print "raise tuition"

    cout << "   " << endl; // making line space between passes and failures group
    cout << "raise tuition because " << x << " students passed." << endl;

}

cout << "   " << endl; // making line space between passes and failures group

for  ( n =0; n < NumStudent; n++ ) { 
    cout << "The failures are " << failures[n];

        if ((failures[n] > 1) && (failures[n] <50)) {
            cout << "----" << "grade F" << endl; // print grade F if the failures is under 50
        } 

        else {
            cout << " ----" << "N/A" << endl;
        }
}

return 0;
}

