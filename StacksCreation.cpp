//  Erik Pantoja
//  Assignment 3 - Stacks
//  Sept 13th 2019
//  Prof Hwang - Data Structures

//Included Libraries
#include <iostream>
using namespace std;

#define MAX 10

// Class Creation - as required per assignment
class Stacks{
    
    //Public variables
public:
    //struct to store different types of student data in array
    struct student {
        int studentID;
        string studentName;
        string studentAddress;
        float averageScore;
        int *testScore; // using array pointer to store records
    };
    Stacks();
    student num[MAX];
    int top;
    
     // Class Member functions
    void introduction(); // For readability
    void conclusion(); // For readability
    student push(student);
    student pop();
    void print();
    int average(int[]);
};


//Main Function
int main() {
    Stacks temp;
    temp.introduction(); //For readability
    
    Stacks::student array[10]; // Creating array of struct objects with required fields
    array[0].studentID = 5; array[0].studentName = "Bobbie"; array[0].studentAddress = "121 Unknown st";
    array[1].studentID = 3; array[1].studentName = "Phil"; array[1].studentAddress = "547 Brown st";
    array[2].studentID = 1; array[2].studentName = "Greg"; array[2].studentAddress = "53 King st";
    array[3].studentID = 2; array[3].studentName = "Paul"; array[3].studentAddress = "184 Relax st";
    array[4].studentID = 6; array[4].studentName = "Peggy"; array[4].studentAddress = "592 MLK BLVD";
    array[5].studentID = 7; array[5].studentName = "Felipe"; array[5].studentAddress = "491 West RD CT";
    array[6].studentID = 9; array[6].studentName = "Georgie"; array[6].studentAddress = "99 Gray Mist st";
    array[7].studentID = 8; array[7].studentName = "Wong"; array[7].studentAddress = "5 Cloudbank st";
    array[8].studentID = 10; array[8].studentName = "Larry"; array[8].studentAddress = "124 Sierra st";
    array[9].studentID = 13; array[9].studentName = "Monica"; array[9].studentAddress = "53 White BLVD";
    
    // Creating arrays of grades for each student
    int a[10] = {86,68,50,99,67,97,54,65,35,71};
    int b[10] = {98,68,50,99,67,94,50,96,90,77};
    int c[10] = {85,68,56,15,67,97,54,65,35,70};
    int d[10] = {86,68,50,99,58,86,59,98,35,77};
    int e[10] = {86,79,50,99,67,97,90,65,97,77};
    int f[10] = {53,68,53,76,67,97,57,98,35,74};
    int g[10] = {86,68,50,99,88,97,54,65,35,77};
    int h[10] = {34,67,50,99,67,90,56,65,35,72};
    int i[10] = {86,68,26,99,67,97,78,99,99,77};
    int j[10] = {99,66,50,99,54,96,54,65,35,76};
    
    //Pointing the student grades pointer to the arrays of grades / and calculating averages
    array[0].testScore = a; array[0].averageScore = temp.average(array[0].testScore);
    array[1].testScore = b; array[1].averageScore = temp.average(array[1].testScore);
    array[2].testScore = c; array[2].averageScore = temp.average(array[2].testScore);
    array[3].testScore = d; array[3].averageScore = temp.average(array[3].testScore);
    array[4].testScore = e; array[4].averageScore = temp.average(array[4].testScore);
    array[5].testScore = f; array[5].averageScore = temp.average(array[5].testScore);
    array[6].testScore = g; array[6].averageScore = temp.average(array[6].testScore);
    array[7].testScore = h; array[7].averageScore = temp.average(array[7].testScore);
    array[8].testScore = i; array[8].averageScore = temp.average(array[8].testScore);
    array[9].testScore = j; array[9].averageScore = temp.average(array[9].testScore);

    // Displaying the array
    cout << "Displaying Student Records in Array: " <<endl<<endl;
   
    for (int i=0; i<10; i++){
        cout << "Student ID: " << array[i].studentID << "   " << " Student Name: " << array[i].studentName << "   " << " Student address: " << array[i].studentAddress << "   " << " Student Average: " << array[i].averageScore <<endl;
    }
    
    // -Push all student records from the array to a static stack.
    for (int i = 0; i<10; i++){
        temp.push(array[i]);
    }
    cout << endl << "Pushing records from array to the stack" <<endl;
    
    // -Pop 5 student records from the stack and display the popped records.
    cout <<endl<<  "The popped records are: "<<endl<<endl;
    for (int i=0; i<5; i++){
        temp.pop();
    }
    // -Display the remaining student records in the static stack.
    cout <<endl<<endl<< "The current stack is:" << endl<<endl;
    temp.print();
    temp.conclusion(); //For readability
    return 0;
}

//Functions Defined
void Stacks::introduction(){
    cout <<" Asssignment 3 Stacks  " << endl <<endl;
}

void Stacks::conclusion(){
    cout << endl << "Created by Erik Pantoja, For Data Structures Fall 2019 "<<endl<<endl;
}

Stacks::Stacks(){
    top =- 1;
}

Stacks::student Stacks::push(student i){
    ++top;
    num[top] = i;
    return i;
}

Stacks::student Stacks::pop(){
    student i = num[top];
     cout << "Student ID: " << i.studentID << "   " << " Student Name: " << i.studentName << "   " << " Student address: " << i.studentAddress << "   " << " Student Average: " << i.averageScore<<endl;
    --top;
    return i;
}

void Stacks::print(){
    for(int i = (top); i >= 0; i--){
        cout << "Student ID: " << num[i].studentID << "   " << " Student Name: " << num[i].studentName << "   " << " Student address: " << num[i].studentAddress << "   " << " Student Average: " << num[i].averageScore <<endl;
}
    cout<<endl;
}

int Stacks::average(int num[]){
    int sum=0; int avg = 0; // to reset each iteration
    
    for(int i = 0; i < 10; i++){
        sum += num[i];
    }
    
    avg = sum / 10;
    return avg;
}
