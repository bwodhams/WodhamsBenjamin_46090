//Ben Wodhams
//July 13th, 2015
//Menu to be used for the midterm
//homework 

//System Libraries
#include <iostream>
#include <iomanip>
#include <ctime>
#include <cmath>
using namespace std;

//Global Constants

//Function Prototypes
void Menu();
int getN();
void def(int);
void problem1();
void problem2();
void problem3();
void problem4();
void problem5();
void problem6();
void problem7();
void pWords(char []);

//Execution begins here
int main(int argv,char *argc[]){
    int inN;
    do{
        Menu();
        inN=getN();
        switch(inN){
        case 1: problem1();break;
        case 2: problem2();break;
        case 3: problem3();break;
        case 4: problem4();break;
        case 5: problem5();break;
        case 6: problem6();break;
        case 7: problem7();break;
            default:;
        };
    }while(inN<8);
    return 0;
}

//Menu Function
void Menu(){
    cout<<"Type 1 for problem 1"<<endl;
    cout<<"Type 2 for problem 2"<<endl;
    cout<<"Type 3 for problem 3"<<endl;
    cout<<"Type 4 for problem 4"<<endl;
    cout<<"Type 5 for problem 5"<<endl;
    cout<<"Type 6 for problem 6"<<endl;
    cout<<"Type 7 for problem 7"<<endl;
    cout<<"Type 8 to exit \n"<<endl;
}

//Choose problem number function
int getN(){
    int inN;
    cin>>inN;
    return inN;
}

//Solution to problem 1
void problem1(){
    cout<<"In problem # 1 \nGaddis_6thEd_Chap7_Prob1"<<endl<<endl;
    //Declare Variables
    const int SIZE=10;  //Size of array
    int small,       //Small number
            large;   //Large number
    int array[SIZE];  //Initialize array
    
    //Get intput from user
    cout<<"Please input the 10 values into the array!"<<endl;
    for(int i=0; i<SIZE; i++){
        cin>>array[i];
    }
    
    //Initialize first small and large variable
    small=array[0];
    large=array[0];
    
    //Determine largest and smallest numbers
    for(int j=0; j<SIZE; j++){
        if(array[j]>large)
            large=array[j];
        if(array[j]<small)
            small=array[j];
    }
    
    //Output the results
    cout<<"The smallest value is : "<<small<<endl;
    cout<<endl<<endl;
    cout<<"The largest value is : "<<large<<endl;
    cout<<endl<<endl;

    //Exit stage right!
}

//Solution to problem 2
void problem2(){
    cout<<"In problem # 2\nGaddis_6thEd_Chap7_Prob2"<<endl<<endl;
    //Declare Variables
    float min,  //smallest value
          max,  //largest value
          sum=0,//sum of all values
          avg;  //average of all values
    //Initialize array
    const int SIZE=12;
    float array[SIZE];

    //Get user inputted values
    
    cout<<"Please enter the amount of rainfall per month for the "<<SIZE<<" months. (in inches)"<<endl;
    for(int i=0; i<SIZE; i++){
        cout<<"Rainfall for month number : "<<i+1<<endl;
        cin>>array[i];
    }
        
    
    //Determine smallest and largest rainfall months
    //Initialize arrays
    min=array[0];
    max=array[0];
    for(int j=0; j<SIZE; j++){
        if(array[j]>=max){
            max=array[j];
        }
        if(array[j]<=min){
            min=array[j];
        }
    }
    
    //Calculate sum and average
    for (int i=0; i<SIZE; i++){
        sum+=array[i];
    }
    
    avg=sum/SIZE;
    //Output the results
    cout<<"The total rainfall for the year was "<<sum<<" inches."<<endl;
    cout<<"The average monthly rainfall for the year was "<<avg<<" inches."<<endl;
    cout<<"The max rainfall occurred was "<<max<<" inches in a month"<<endl;
    cout<<"The min rainfall occurred was "<<min<<" inches in a month"<<endl;


    //Exit stage right!
}

//Solution to problem 3
void problem3(){
    cout<<"In problem # 3\nGaddis_6thEd_Chap7_Prob7"<<endl<<endl;
    //Declare Variables
    char string[20];
    //Input string
    cout<<"Enter the string: ";
    cin>>string;
    
    for(int i=0; string[i]!='\0'; i++){
        if(string[i]>=97)
            string[i]=toupper(string[i]);
    }

    //Output the results
    //Display uppercase string
    cout<<"The string is : "<<string<<endl;


    //Exit stage right!
 
    
}

//Solution to problem 4
void problem4(){
    cout<<"In problem # 4\nGaddis_6thEd_Chap7_Prob8"<<endl<<endl;
    //Declare Variables
    char string[20];
    //Input string
    cout<<"Enter the one word string : ";
    cin>>string;
    
    //Call function
    pWords(string);
    
    
    //Output the results
    //Show string
    cout<<"The string is : "<<string<<endl;

    //Exit stage right!
}

//Solution to problem 5
void problem5(){
    cout<<"In problem # 5\nGaddis_6thEd_Chap7_Prob10"<<endl<<endl;
    //Declare Variables
    int empID[7]={5658845, 4520125, 7895122, 877541, 8451277, 1302850, 7580489};
    int hours[7];
    float pRates[7],wage[7];
    
    //Get input from user
    for(int i=-1; i<6; i++){
        cout<<"Please enter the number of hours worked by "<<empID[i+1]<<" : ";
        cin>>hours[i];
        cout<<"Now, please enter the pay rate for "<<empID[i+1]<<" : ";
        cin>>pRates[i];
    }
    //Calculate wages
    for(int i=0; i<7; i++){
        wage[i]=hours[i]*pRates[i];
    }
    
    //Output the results
    for (int i=-1; i<6; i++){
        cout<<"Employee ID : "<<empID[i+1]<<"\nWage: $"<<wage[i]<<endl;
    }

    //Exit stage right!
}

//Solution to problem 6
void problem6(){
    cout<<"In problem # 6\nGaddis_6thEd_Chap7_Prob13"<<endl<<endl;
    //initialize the array
    const int STUDENT=5,  //number of students
              GRADES=5,   //number of letter grades
              SCORES=4;   //number of test scores
    string names[STUDENT];//array of student names
    char letGrad[GRADES]={'F','D','C','B','A'}; //array of letter grades
    float stuScre[STUDENT][SCORES];
    float sumStu[STUDENT];
    
    //declare variables
    float avg;  //average of each test score per student
    
    //write student names and scores
    for(int i=0;i<STUDENT;i++){
        int sum=0;
        cout<<"Enter name of student "<<i+1<<": ";
        cin>>names[i];
        for(int j=0;j<SCORES;j++){
            do{
            cout<<names[i]<<": Score "<<j+1<<": ";
            cin>>stuScre[i][j]; 
            if(stuScre[i][j]<0 || stuScre[i][j]>100){
                cout<<"A test score cannot be less than 0 or greater than 100"<<endl<<endl;
            }
            }while(stuScre[i][j]<0 || stuScre[i][j]>100);
            sum+=stuScre[i][j];
        }
        sumStu[i]=sum;
    }
    cout<<endl;
    
    //output letter grade
    for(int i=0;i<STUDENT;i++){
        avg=sumStu[i]/4;
        cout<<names[i]<<"'s Grade: ";
        if(avg>=90) cout<<"Average: "<<avg<<"% "<<letGrad[4]<<endl;
        else if(avg>=80) cout<<"Average: "<<avg<<"% "<<letGrad[3]<<endl;
        else if(avg>=70) cout<<"Average: "<<avg<<"% "<<letGrad[2]<<endl;
        else if(avg>=60) cout<<"Average: "<<avg<<"% "<<letGrad[1]<<endl;
        else cout<<"Average: "<<avg<<"% "<<letGrad[0]<<endl;
    }
    cout<<endl;
}

//Solution to problem 7
void problem7(){
    cout<<"In problem # 7\nGaddis_6thEd_Chap7_Prob14"<<endl<<endl;
    //initialize the array
    const int STUDENT=5,  //number of students
              GRADES=5,   //number of letter grades
              SCORES=4;   //number of test scores
    string names[STUDENT];//array of student names
    char letGrad[GRADES]={'F','D','C','B','A'}; //array of letter grades
    float stuScre[STUDENT][SCORES];
    float sumStu[STUDENT];
    
    //declare variables
    float avg;      //average of each test score per student
    int   min=100;  //minimum score
    
    //write student names and scores
    for(int i=0;i<STUDENT;i++){
        int sum=0;
        cout<<"Enter name of student "<<i+1<<": ";
        cin>>names[i];
        for(int j=0;j<SCORES;j++){
            do{
            cout<<names[i]<<": Score "<<j+1<<": ";
            cin>>stuScre[i][j];
            if(stuScre[i][j]<min){
                min=stuScre[i][j];
            }
            if(stuScre[i][j]<0 || stuScre[i][j]>100){
                cout<<"A test score cannot be less than 0 or greater than 100"<<endl<<endl;
            }
            }while(stuScre[i][j]<0 || stuScre[i][j]>100);
            sum+=stuScre[i][j];
        }
        sum-=min;
        sumStu[i]=sum;
    }
    cout<<endl;
    
    //output letter grade
    for(int i=0;i<STUDENT;i++){
        avg=sumStu[i]/3;
        cout<<names[i]<<"'s Grade with lowest test score dropped: ";
        if(avg>=90) cout<<"Average: "<<avg<<"% "<<letGrad[4]<<endl;
        else if(avg>=80) cout<<"Average: "<<avg<<"% "<<letGrad[3]<<endl;
        else if(avg>=70) cout<<"Average: "<<avg<<"% "<<letGrad[2]<<endl;
        else if(avg>=60) cout<<"Average: "<<avg<<"% "<<letGrad[1]<<endl;
        else cout<<"Average: "<<avg<<"% "<<letGrad[0]<<endl;
    }
    cout<<endl;

}
//Exit Comment
void def(int inN){
    cout<<"You typed "<<inN<<" to exit the program"<<endl;
}





/*******************************************************************************************************
 *******************************************************************************************************
 *******************************            pWords
 ** Purpose: Convert first letter in each word to capital letter if not already capital
 ** Input: string
 ** Output: modified string
 *******************************************************************************************************
 */
void pWords(char str[]){
    //Convert first character to uppercase
    str[0]=toupper(str[0]);
    for(int i=1;str[i]!='\0';i++){
        if (str[i]==' '){
            str[i+1]=toupper(str[i+1]);
        }
    }
}