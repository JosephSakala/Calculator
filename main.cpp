/** _________________________________________________________________
*       MATH CALCULATIONS THAT INCLUDES:
        1.Area of a triangle                                        *
        2.Volume of of a sphere
        3.Perimeter of a rectangle
        NB: this program will only calculate the above stated tasks
*       Name of Programmer: Joseph Sakala                           *
*       School: The Copperbelt University
*       Location: Copperbelt Provice, Kitwe-Zambia, Jambo drive.
        SIN: 21162450
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
    int perimeter=2*hight*width;    //formula for calculating the perimeter of the rectangle
    return(perimeter);  //answer or output based on the inputs i.e hight and width
}


int main()


{

    int hight, base,width; //hight, base and width of shape in question a respecttively
    float R;//raduis of the sphere
    int a; //user option

    cout<<"What shape are you working with?\n";
    cout<<"1.Triangle.\n"; //users second option
    cout<<"2.Sphere.\n"; //users first option
    cout<<"3.Rectangle.\n"; //user third option

    cin>>a; //user enters their option of choice that is either 1, 2 or 3.




    if (a==1){
            cout<<"To calculate the area of a triangle enter\n";
            cout<<"High = ";cin>>hight;//user enters hight of a triangle
            cout<<"Base = ";cin>>base;    //user enters base of a triangle
            cout<<"The area of your triangle is "<<area_of_a_triangle(hight, base)<<" Units";
    }



    else if(a==2){
            cout<<"To calculate the volume of a sphere\n";
            cout<<"Enter radius\n";//user prompted to enter radius
            cin>>R;//user enters radius
            cout<<volume_of_a_sphere(PI,R)<<"cm^3";//output based on the radius entered
    }


    else if(a==3){
            cout<<"To calculate the perimeter of a rectangle\n";
            cout<<"Enter the hight: ";//user prompted to enter hight
            cin>>hight;//user enters the hight
            cout<<"Enter the width: ";//user prompted to enter width
            cin>>width;//user enters the width
            cout<<"You perimeter is = "<<perimeter(hight,width)<<" cm^2";//output i.e the perimeter calculated

    }


    //output if the user selects options that are on the displayed ones i.e 1,2 or 3.
    else{   cout<<"You have selected and invalid option";}


    return(0);

}
