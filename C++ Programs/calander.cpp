
//Hey You Can print the gregorian calander from 2001 to 2100 by this programme 

//To Operate this programme you have to enter the year ex- 2020, 2038,2017 etc .

//Author Romesh K Tripathi
// Published on 14-August-2020

#include<iostream>
#include<cstring>
#include<conio.h>


#define DAY cout<<"Su   Mo   Tu   We   Th   Fr   Sa"<<endl;
#define GBM cout<<endl<<endl<<endl; 
//GBM means Gap Between Months




using namespace std;

class Calander{
    private:
    string month_name[12]={"January of ",
                           "February of ",
                           "March of ",
                           "April of ",
                           "May of ",
                           "June of ",
                           "July of ",
                           "August of ",
                           "September of ",
                           "October of ",
                           "November of ",
                           "December of "};
    int input_year;
    int leap_years;
    int day;

    public:
        void userInput();
        void processInput();
        void printCalander(int);
        int printMonth(int ,int,bool);
};


void Calander::userInput(){
    cout<<"Enter a Year between 2001 to 2100:"<<endl;
    cin>>input_year;
    if(input_year>=2001&&input_year<=2100)
    {
        processInput();
    }
    else
    {
        cout<<"Year Enterd by You is Invalid...!"<<endl;
    }
}

void Calander::processInput(){
    leap_years=(input_year-2001)/4;  //Checking leap years from 2000 to enterd year

    day=(((input_year-2000)*365)+leap_years)%7; //Counting Days from 2000 to enterd year and  
    printCalander(day);                            //finding the 1st January's day of enterd year
}
void Calander::printCalander(int day){
    int total_days=day;
    int months=0;
    bool flag=false;                            
    if((input_year-2000)%4==0)flag=true;                //To check the enterd year is leap or Not     
    else flag=false;
    
    
    for(months=0;months<12;months++)
    {
        total_days=printMonth((total_days),months,flag);
    }
}

int Calander::printMonth(int day_code, int month_code ,bool flag){
    int line_changer=0;
    int months[12];
    months[0]=months[2]=months[4]=months[6]=months[7]=months[9]=months[11]=31;
    months[3]=months[5]=months[8]=months[10]=30;
    months[1]=28;
    GBM
    cout<<"        "<<month_name[month_code]<<input_year<<endl;
    DAY
    if(month_code==1){
        if(flag){
            months[1]=months[1]+1;
        }
    }
bool flag1=false;


    for(int i=1;i<=months[month_code];i++){
        if((i<=day_code)&&(!flag1)){
            cout<<"     ";
            if(i==day_code){
                flag1=true;
                i=0;    
            }
        }
        else if((flag1)||day_code==0){
            flag1=true;
            if(i<10){
                cout<<i<<"    ";
            }
            else {
            cout<<i<<"   ";
            }
        
        }
        line_changer+=1;
            if(line_changer==7){
                cout<<endl;
                line_changer=0;
            }
    }

    return line_changer;
}

int main()
{
    Calander obj;
    obj.userInput();
    getch();
    return 0;
}