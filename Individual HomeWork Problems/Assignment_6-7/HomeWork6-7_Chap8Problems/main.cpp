//Ben Wodhams
//July 13th, 2015
//Menu to be used for the midterm
//homework 

//System Libraries
#include <iostream>
#include <iomanip>
#include <ctime>
#include <cmath>
#include <string>
#include <cstdlib>
using namespace std;

//Global Constants
int months=12;
const double MXRND=pow(2,31)-1;
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
void linSrch (int[], int);
bool srchWin(int [], int, int);
bool srchWin1(int [], int, int);
void h2L(int [], string[]);
void selSort(string[], int);
void filAray(char [],int);
void prntAry(const char [],int,int);
int grade(char [],char [],char [],int);
float normal();//Normal distribution
void filAray1(float [],int);
void prntAry1(const float [],int,int);
float max(float [],int);
float min(float [],int);
float mean(float [],int);
float stdev(float [],int);

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
    cout<<"In problem # 1 \nGaddis_6thEd_Chap8_Prob1"<<endl<<endl;
    //Declare Variables
    int numCan=18; //Number of account charge numbers
    const int SIZE=18; //Array size
    int array[18]={5658845, 4520125, 7895122, 8777541, 8451277, 1302850, 8080152, 4562555, 5552012, 5050552, 7825877, 1250255, 1005231, 6545231, 3852085, 7576651, 7881200, 4581002};
    
    
    
    //Output the results
    //Call array
    linSrch(array, numCan);

    //Exit stage right!
}

//Solution to problem 2
void problem2(){
    cout<<"In problem # 2\nGaddis_6thEd_Chap8_Prob2"<<endl<<endl;
    //Declare Variables
    int SIZE=10;
    int winNums[10]={13579, 26791, 26792, 33445, 55555, 62483, 77777, 79422, 85647, 93121};
    int playNum; //Player's number
    
    //Get input from user
    cout<<"Please enter your number: ";
    cin>>playNum;
    
    //Call function
    bool result=srchWin(winNums,SIZE,playNum);
    
    
    
    //Output the results
    //See if result is true or false
    if(result)
        cout<<"One of the winning numbers is yours!"<<endl;
    else
        cout<<"Your number is not in the winning numbers list."<<endl;

    //Exit stage right!
}

//Solution to problem 3
void problem3(){
    cout<<"In problem # 3\nGaddis_6thEd_Chap8_Prob3"<<endl<<endl;
    //Declare Variables
    int SIZE=10;
    int winNums[10]={13579, 26791, 26792, 33445, 55555, 62483, 77777, 79422, 85647, 93121};
    int playNum; //Player's number
    
    //Get input from user
    cout<<"Please enter your number: ";
    cin>>playNum;
    
    //Call function
    bool result=srchWin1(winNums,SIZE,playNum);
    
    
    
    //Output the results
    //See if result is true or false
    if(result)
        cout<<"One of the winning numbers is yours!"<<endl;
    else
        cout<<"Your number is not in the winning numbers list."<<endl;

    //Exit stage right!
 
    
}

//Solution to problem 4
void problem4(){
    cout<<"In problem # 4\nGaddis_6thEd_Chap8_Prob5"<<endl<<endl;
    //Declare Variables  
    int values[months];
    
    string pMonths[months]={"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};
    
    //Get rainfall for each month
    for(int i=0; i<months; i++){
        do{
            cout<<"Enter the total rainfall for "<<pMonths[i]<<" : ";
            cin>>values[i];
            if(values[i]<0){
                cout<<"Enter positive rain fall please"<<endl;
            }
        }while(values[i]<0);
    }
    cout<<"Before sorting "<<endl;
    
    
    //Output the results
    //Print rainfall for each month
    for(int i=0; i<months; i++){
       cout<<setw(10)<<pMonths[i]<<setw(10)<<values[i]<<endl; 
    }
    
    //Call function
    h2L(values, pMonths);
    cout<<"After sorted in order of rainfall "<<endl;
    cout<<"From highest to lowest"<<endl;
    for(int i=0; i<months; i++){
        cout<<setw(10)<<pMonths[i]<<setw(10)<<values[i]<<endl;
        
    }

    //Exit stage right!
}

//Solution to problem 5
void problem5(){
    cout<<"In problem # 5\nGaddis_6thEd_Chap8_Prob6"<<endl<<endl;
    //Declare Variables
    
    const int nNames=20;
    
    
    
    string names[nNames]={"Collins,Bill","Smith,Bart","Allen,Jim","Griffin,Jim",
                          "Stamey,Marty","Rose,Geri","Taylor,Terri","Johnson,Jill",
                          "Allison,Jeff","Looney Joe","Wolfe,Bill","James,Jean",
                          "Weaver,Jim","Pore,Bob","Rutheford,Gret","Javens,Renee", "Harrison,Rose",
                          "Setzer,Cathy","Pike,Gordon","Holland,Beth"};
    
    cout<<"Given string elements are: "<<endl;
    
    for(int i=0; i<nNames; i++){
        cout<<setw(15)<<names[i]<<endl;
    }
    
    //Call function
    selSort(names, nNames);
    
    cout<<"\nAfter selSort Applied: "<<endl;
    
    //Output the results
    for(int i=0; i<nNames; i++){
        cout<<setw(15)<<names[i]<<endl;
    }
    
    //Exit stage right!

}

//Solution to problem 6
void problem6(){
    cout<<"In problem # 6\nGaddis_7thEd_Chap8_Prob10"<<endl<<endl;
    //Set the random number seed
    srand(static_cast<unsigned int>(time(0)));
    
    //Declare Variables
    const int SIZE=20;
    char qstns[SIZE],answrs[SIZE],rhtwrg[SIZE];
    
    //Initialize the array
    filAray(qstns,SIZE);
    filAray(answrs,SIZE);
    
    //Grade the Test
    int score=grade(qstns,answrs,rhtwrg,SIZE);
    
    //Output the initial arrays and the results
    cout<<"The Test Question Solutions"<<endl;
    prntAry(qstns,SIZE,5);
    cout<<"The Test Question Answers"<<endl;
    prntAry(answrs,SIZE,5);
    cout<<"The scores received"<<endl;
    prntAry(rhtwrg,SIZE,5);
    cout<<"Your results were "<<score<<" out of "<<SIZE<<endl;
    
    //Exit stage right!
    
}

//Solution to problem 7
void problem7(){
    cout<<"In problem # 7\nSavitch_8thEd_Chap7_Prob4"<<endl<<endl;
    //Set the random number seed
    srand(static_cast<unsigned int>(time(0)));
    
    //Declare Variables
    const int SIZE=500000;
    float array[SIZE];
    
    //Initialize the array
    filAray1(array,SIZE);
    
    //Output the initial array
    //prntAry(array,SIZE,5);
    
    //Print the statistics
    cout<<"The max value of the array = "<<max(array,SIZE)<<endl;
    cout<<"The min value of the array = "<<min(array,SIZE)<<endl;
    cout<<"The mean value of the array = "<<mean(array,SIZE)<<endl;
    cout<<"The standard deviation of the array = "<<stdev(array,SIZE)<<endl;
    
    //Exit stage right!
    

}
//Exit Comment
void def(int inN){
    cout<<"You typed "<<inN<<" to exit the program"<<endl;
}





/*******************************************************************************************************
 *******************************************************************************************************
 *******************************            Title
 ** Purpose:
 ** Input:
 ** Output:
 *******************************************************************************************************
 */
void linSrch(int array[], int numCan){
    int crgNum;
    bool found=false;
    cout<<"Enter account charge number: "<<endl;
    cin>>crgNum;
    for(int i=0; i<numCan; i++){
        if(array[i]==crgNum){
            found=true;
            break;
        }
    }if(found){
        cout<<"Number is valid"<<endl;
    }else{
        cout<<"Number is not valid"<<endl;
    }
}




/*******************************************************************************************************
 *******************************************************************************************************
 *******************************            srchWin
 ** Purpose:Search to see if person is a winner
 ** Input: winning numbers, size, and player's numbers
 ** Output: if person won or not
 *******************************************************************************************************
 */

bool srchWin(int winNums[],int SIZE, int playNum){
    //Initialize bool
    bool found=false;
    int index=0;
    //Loop
    while(index<SIZE&!found){
        if(winNums[index]==playNum){
            found=true;
            index++;
        }else{
        break;
    }
    }
    return found;
}


/*******************************************************************************************************
 *******************************************************************************************************
 *******************************            srchWin
 ** Purpose:Search to see if person is a winner
 ** Input: winning numbers, size, and player's numbers
 ** Output: if person won or not
 *******************************************************************************************************
 */

bool srchWin1(int winNums[],int SIZE, int playNum){
    //Initialize bool
    bool found=false;
    int first=0,
            last=SIZE-1,
            middle;
    //Loop
    while(!found && first<=last){
        middle=(first+last)/2;
        if(winNums[middle]==playNum){
            found=true;
        }else if(winNums[middle]>playNum){
            last=middle-1;
    }else {
            first=middle+1;
    }
    }
    return found;
}



/*******************************************************************************************************
 *******************************************************************************************************
 *******************************            Title
 ** Purpose:
 ** Input:
 ** Output:
 *******************************************************************************************************
 */
void h2L(int values[], string pMonths[]){
    bool swap;
    int temp;
    do{
        //Bubble Sort
        swap=false;
        for(int count=0; count<months; count++){
            if(values[count]<values[count+1]){
                //swap integer values
                temp=values[count];
                values[count]=values[count+1];
                values[count+1]=temp;
                //swap corresponding string values
                string tempS=pMonths[count];
                pMonths[count]=pMonths[count+1];
                pMonths[count+1]=tempS;
                swap=true;
            }
        }
    }while(swap);
}


/*******************************************************************************************************
 *******************************************************************************************************
 *******************************            Title
 ** Purpose:
 ** Input:
 ** Output:
 *******************************************************************************************************
 */
void selSort(string names[], int SIZE){
    //Declare Variables
    int sScan; //start scan
    int minInd; //Minimum index
    string minVal; //Min value
    
    for(sScan=0; sScan<(SIZE-1);sScan++){
        minVal=sScan;
        minVal=names[sScan];
        for(int i=sScan+1; i<SIZE; i++){
            if(names[i].compare(minVal)<0){
            minVal=names[i];
            minInd=i;
            }
        }
        names[minInd]=names[sScan];
        names[sScan]=minVal;
    }
    
}  



/**************************************************
 *              Score the Test                    *
 **************************************************
 * Purpose:  To print a character type array with any
 *           number of columns
 * Input:
 *    n-> The size of the array
 *    q-> The question Array
 *    a-> The answer Array
 * Output:
 *    c-> The score Array
 *    score-> The total correct
 */
int grade(char q[],char a[],char c[],int n){
    //Declare the count/score
    int score=0;
    //Grade each answer
    for(int i=0;i<n;i++){
        if(q[i]==a[i]){
            c[i]='c';
            score++;
        }else c[i]='i';
    }
    //Return the score
    return score;
}

/**************************************************
 *                Print Array                      *
 **************************************************
 * Purpose:  To print a character type array with any
 *           number of columns
 * Input:
 *    n-> The size of the array
 *    a-> The character Array
 *    nCols->Number of columns to display the array.
 * Output:
 *    On Screen
 */
void prntAry(const char a[],int n,int nCols){
    //Separate outputs with a line
    cout<<endl;
    //Loop and output every element in the array
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
        //When column is reached go to next line
        if((i%nCols)==(nCols-1))cout<<endl;
    }
    //Separate outputs with a line
    cout<<endl;
}

/**************************************************
 *                Fill Array                      *
 **************************************************
 * Purpose:  To fill an array with a,b,c,d
 * Input:
 *    n-> The size of the array
 * Input-Output:
 *    a-> The character Array
 * Output:
 */
void filAray(char a[],int n){
    //Loop on every element and equate to 2 digits
    for(int i=0;i<n;i++){
        a[i]=rand()%4+97;//[a,b,c,d]
    }
}



/**************************************************
 *      Standard Deviation of an Array            *
 **************************************************
 * Purpose:  To find the std
 * Input:
 *    n-> The size of the array
 *    a-> The float Array
 * Output:
 *    standard deviation
 */
float stdev(float a[],int n){
    //Declare variable and initialize
    float std=0,avg=mean(a,n);
    //Loop to find the maximum
    for(int i=0;i<n;i++){
        float amavg=(a[i]-avg);
        std+=(amavg*amavg);
        //std+=(a[i]-mean(a,n)*a[i]-mean(a,n));
    }
    //Return the maximum value
    return sqrt(std/(n-1));
}

/**************************************************
 *                Mean of an Array                *
 **************************************************
 * Purpose:  To find the mean
 * Input:
 *    n-> The size of the array
 *    a-> The float Array
 * Output:
 *    mean value
 */
float mean(float a[],int n){
    //Declare variable and initialize
    float mean=0;
    //Loop to find the maximum
    for(int i=0;i<n;i++){
        mean+=a[i];
    }
    //Return the maximum value
    return mean/n;
}

/**************************************************
 *                Max of an Array                 *
 **************************************************
 * Purpose:  To find the maximum
 * Input:
 *    n-> The size of the array
 *    a-> The float Array
 * Output:
 *    maximum value
 */
float max(float a[],int n){
    //Declare variable and initialize
    float max=a[0];
    //Loop to find the maximum
    for(int i=1;i<n;i++){
        if(max<a[i])max=a[i];
    }
    //Return the maximum value
    return max;
}

/**************************************************
 *                Min of an Array                 *
 **************************************************
 * Purpose:  To find the minimum
 * Input:
 *    n-> The size of the array
 *    a-> The float Array
 * Output:
 *    minimum value
 */
float min(float a[],int n){
    //Declare variable and initialize
    float min=a[0];
    //Loop to find the maximum
    for(int i=1;i<n;i++){
        if(min>a[i])min=a[i];
    }
    //Return the maximum value
    return min;
}

/**************************************************
 *                Print Array                      *
 **************************************************
 * Purpose:  To print a float type array with any
 *           number of columns
 * Input:
 *    n-> The size of the array
 *    a-> The float Array
 *    nCols->Number of columns to display the array.
 * Output:
 *    On Screen
 */
void prntAry1(const float a[],int n,int nCols){
    //Format
    cout<<fixed<<showpoint<<setprecision(4);
    //Separate outputs with a line
    cout<<endl;
    //Loop and output every element in the array
    for(int i=0;i<n;i++){
        cout<<setw(8)<<a[i];
        //When column is reached go to next line
        if((i%nCols)==(nCols-1))cout<<endl;
    }
    //Separate outputs with a line
    cout<<endl;
}

/**************************************************
 *                Fill Array                      *
 **************************************************
 * Purpose:  To fill an array with float normal
 *           random numbers.
 * Input:
 *    n-> The size of the array
 * Input-Output:
 *    a-> The integer Array
 * Output:
 */
void filAray1(float a[],int n){
    //Loop on every element and equate to 2 digits
    for(int i=0;i<n;i++){
        a[i]=normal();//[-6,6];
    }
}

/*******************************************************
 *           Normal Distribution Approximation         *
 *******************************************************
 * Output->Normal density function approximation
 */
float normal(){
    //Declare a variable
    float norm=0;//[-6,6]
    //Loop 12 times
    for(int i=1;i<=12;i++){
        norm+=(rand()/MXRND-0.5);//[-0.5,0.5];
    }
    //Exit and return the norm variable
    return norm;
}