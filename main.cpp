/** _________________________________________________________________
*       MATH CALCULATIONS THAT INCLUDES:
        1.Area of a triangle                                         |
        2.Volume of of a sphere                                      |
        3.Area and perimeter of a triangle                           |
        4.Hours calculations                                         |
        5(99).Normal calculations that involve
        *Addition
        *Subtraction
        *Multiplication
        *Modulus
        *Division
        NB: this program will only calculate the above stated tasks
*       Name of Programmer: Joseph Sakala                           *
*       School: The Copperbelt University
*       Location: Copperbelt Provice, Kitwe-Zambia, Jambo drive.
        SIN: 21162450
        Contact: +260955466282(WhatsApp line)
        Email: sakalajoseph111999@gmail.com
        icloud address: sakalajoseph111999@icloud.com
        Facebook Username: Joseph Polymath Sakala
        Year of study: First Year
        Program: Information Systems And Technology

*-------------------------------------------------------------------*/

#include<iostream>

using namespace std;

const float PI=3.142857143;  //constant pi
float R;   //Radius of a circle
//int hight_of_a_triangel,base;   //hight and base of a triangle

int area_of_a_triangle(int hight, int base){
        int area=(base*hight)/2;  //the formula for calculating thr area of a tringle
        return area;

}

float volume_of_a_sphere(const float PI, float R){
            float volume_of_a_sphere=(PI*R*R*R*4)/3;      //formula of the volume of a sphere
            return volume_of_a_sphere;

}

int perimeter(int hight, int width){
    int perimeter=2*(hight+width);    //formula for calculating the perimeter of the rectangle
    return(perimeter);  //answer or output based on the inputs i.e hight and width
}
int area_of_a_rectangle(int length, int breadth)
{
    int area= length*breadth;
    return area;
}

//functions involving normal mathematical calculations
int addtwo(int num1, int num2){
    int sum=num1+num2;
    return(sum);
}

int subtwo(int num1, int num2)//subtracts two numbers
{
    int difference=num1-num2;
    return(difference);
}

int prodtwo(int num1, int num2)//multiplying two numbers
{
   int product=num1*num2;
    return(product);
}

int divtwo(int num1, int num2)//dividing two numbers
{
    int quotient= num1/num2;
    return quotient;
}

int remainder(int num1, int num2)//displaying a remaind after the division of two numbers
{
    int remainder=num1%num2;
    return remainder;
}

int number_of_hours(int minutes){
    int number_of_hours=minutes/60;
    return number_of_hours;
}


    int seconds(int minutes){
    int remaining_seconds=minutes%60;
    return remaining_seconds;
}


int main()


{

    int hight, base,width; //hight, base and width of shape in question a respecttively
    float R;//raduis of the sphere
    int a; //user option
    char op;//this will represent an operator a user will enter i.e either '-','+','*' or '/'
    int num1, num2;
    int length, breadth;
    float minutes;

    cout<<"What are you working with?\n";
    cout<<"1.Triangle.\n"; //users second option
    cout<<"2.Sphere.\n"; //users first option
    cout<<"3.Rectangle.\n"; //user third option
    cout<<"4.Hours calculations\n";
    cout<<"Select 99 to procceed to the normal calculator\n";

    cin>>a; //user enters their option of choice that is either 1, 2 or 3.




    if (a==1){///AREA OF A TRIANGLE
            cout<<"To calculate the area of a triangle enter\n";
            cout<<"High = ";cin>>hight;//user enters hight of a triangle
            cout<<"Base = ";cin>>base;    //user enters base of a triangle
            cout<<"The area of your triangle is "<<area_of_a_triangle(hight, base)<<" Units";
    }

    else if(a==2){///VOLUME OF A SPHERE
            cout<<"To calculate the volume of a sphere\n";
            cout<<"Enter radius\n";//user prompted to enter radius
            cin>>R;//user enters radius
            cout<<"The volume of your sphere = "<<volume_of_a_sphere(PI,R)<<"units^3";//output based on the radius entered
    }


    else if(a==3){///PERIMETER AND AREA OF A RECTANGLE OPTIONS
            cout<<"1.Calculate the perimeter of a rectangle\n";
                  cout<<"2.Calculate the area of a rectangle\n";
                  cin>>a;//user options either 1 or 2.



                  if(a==1){///PERIMETER OF A RECTANGLE
                cout<<"To calculate the perimeter of a rectangle\n";
                cout<<"Enter the hight: ";//user prompted to enter hight
                cin>>hight;//user enters the hight
                cout<<"Enter the width: ";//user prompted to enter width
                cin>>width;//user enters the width
                cout<<"You perimeter is = "<<perimeter(hight,width)<<" units^2";//output i.e the perimeter calculated

    }

                else if(a==2){///AREA OF A RECTANGLE
                cout<<"To calculate the area of a rectangle\n";
                cout<<"Enter the length: ";//user opted to enter the length of a rectangle
                cin>>length;   //User enters the length
                cout<<"Enter the breadth: ";//user opted to enter the breadth
                cin>>breadth;  //user enters the breadth of a rectangle
                cout<<"The area of your rectangle = "<<area_of_a_rectangle(length,breadth)<<" units\n";//area displayed
                cout<<"\n";
                cout<<"Light bulb moment!!\n";
                cout<<"\n";
                cout<<"Area is the space around the surface of an object\n";}

                else{cout<<"You have selected an invalid option\n";}//this is displayed if the user does not select amongst the options avaialable


    }
    else if(a==4){///HOURS CALUCLATIONS
        cout<<"Enter the number of minutes: ";//user opted to enter the number of minutes
        cin>>minutes;//users enters the number of minutes
        cout<<"Time taken is "<<number_of_hours(minutes)<<":"<<seconds(minutes)<<" Minutes";//<<":"<<seconds(minutes)<<" Minutes";
    }


    ///CALCULATIONS OF NORMAL CALCULATIONS
    else if(a==99){cout<<"**********This is a calculator**********\n";
        cout<<"Kindly enter a sign you wish to use\n";
        cin>>op;


    if(op=='+'){cout<<"You have opted to add two numbers\n";
        cout<<"First number = ";//prompts user to enter their first number of choice
        cin>>num1;//user enters their first number that was prompted
        cout<<"Second number = ";//prompts user to enter their second number
        cin>>num2;//user enters their second number of choice
        cout<<num1<<" + "<<num2<<" = "<<addtwo(num1, num2);///this displays the answer
    }


    else if(op=='-'){///SUBTRACTION
        cout<<"You have opted to subtract two numbers\n";
        cout<<"First number = ";//user prompted to enter the their first number of choice
        cin>>num1;//user enters their first number that was prompted
        cout<<"Second number = ";//user enters their second number of choice
        cin>>num2;//user enters their second number of choice
        cout<<num1<<" - "<<num2<<" = "<<subtwo(num1, num2);///this displays the answer
    }



    else if(op=='*'){///MULTIPLICATION
        cout<<"You have opted to multiply two numbers\n";
        cout<<"First number = ";//user prompted to enter the their first number of choice
        cin>>num1;//user enters their first number that was prompted
        cout<<"Second number = ";//user prompted to enter the their first number of choice
        cin>>num2;//user enters their second number of choice
        cout<<num1<<" * "<<num2<<" = "<<prodtwo(num1, num2);///This displays the answer
    }


    else if(op=='/'){///DIVISION
        cout<<"You have opted to divide two numbers\n";
        cout<<"First number = ";//user prompted to enter the their first number of choice
        cin>>num1;//user enters their first number that was prompted
        cout<<"Second number = ";//user prompted to enter the their first number of choice
        cin>>num2;//user enters their second number of choice
        cout<<num1<<" / "<<num2<<" = "<<divtwo(num1, num2);
    }

    else if(op=='%'){cout<<"You have opted to calculate the remainder after dividing two numbers\n";
        cout<<"First number = ";//user prompted to enter the their first number of choice
        cin>>num1;//user enters their first number that was prompted
        cout<<"Second number = ";//user enters their second number of choice
        cin>>num2;//user enters their second number of choice
        cout<<num1<<" divided by "<<num2<<" the remainder is = "<<remainder(num1, num2);//function responsible for displaying the answer called

    }
    else{cout<<"Please enter a valid sign!";}

    }
    //this is displayed if the user has not selected amoung the available options i.e 1,2,3, 4 and 99.
    else{cout<<"You have selected an invalid option\n";}///this is displayed if the user does not comply with th available optionsaaaa


    return(0);

}



