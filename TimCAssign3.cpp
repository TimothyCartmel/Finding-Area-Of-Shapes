// Timothy Cartmel
#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

//prototype statements
float coneArea(float radius, float height);

float cylinderArea(float radius, float height);

float sphereArea(float radius);

int nbrFromMenu(); 

//main function using switch statement
int main(){
   float theRadius, theHeight, theResult;
   int menuNbr; 
   char nameOfUser[40];
         
   cout << "Please enter your first and last name:  \n";
   cin.getline(nameOfUser, 40);
   
   menuNbr = nbrFromMenu();
   
   cout << fixed << setprecision(2);
   
   switch(menuNbr){
     case 1:
       cout << "Please enter the radius of the cone: \n";
   		 cin >> theRadius;
   
   		 cout << "Please enter the height of the cone: \n";
   		 cin >> theHeight;
   
   		 theResult = coneArea(theRadius, theHeight);
   
   		 cout << nameOfUser << " gave a radius of " << theRadius << " and height of " << theHeight
            << " for the surface area of a cone which calculates to " << theResult << " square feet \n"; 
			 break;
    
    case 2:
       cout << "Please enter the radius of the cylinder: \n";
         cin >> theRadius;
   
         cout << "Please enter the height of the cylinder: \n";
         cin >> theHeight;
   
         theResult = cylinderArea(theRadius, theHeight);
   
         cout << nameOfUser << " gave a radius of " << theRadius << " and height of " << theHeight
            << " for the surface area of a cylinder which calculates to " << theResult << " square feet \n"; 
             break;
     
     case 3:  
       cout << "Please enter the radius of the sphere: \n";
         cin >> theRadius;
   
         theResult = sphereArea(theRadius);
   
         cout << nameOfUser << " gave a radius of " << theRadius << 
         " for the surface area of a sphere which calculates to " << theResult << " square feet \n"; 
             break;
   }         

return 0;
} //end of main

//Fcns that find the surface area of a cone, cylinder, and sphere
float coneArea(float radius, float height){
   float sArea;
   float const pi = acos(-1);
   
   sArea = pi * radius * (radius + sqrt(height * height + radius * radius));
   
   return sArea;
}  

float cylinderArea(float radius, float height){
    float sArea;
    float const pi = acos(-1);
    
    sArea = 2 * pi * radius * height + 2 * pi * radius * radius;
    
    return sArea;
}

float sphereArea(float radius){
    float sArea;
    float const pi = acos(-1);
    
    sArea = 4 * pi * radius * radius;
    
    return sArea;
} 

// function for menu listing and storing the user's choice in a fcn
int nbrFromMenu(){
    int nbrGiven;
    
    cout << "Enter 1 for surface area of a cone:     \n";
    
    cout << "Enter 2 for surface area of a cylinder: \n";
    
    cout << "Enter 3 for surface area of a sphere:   \n";
    cin >> nbrGiven;
    
    return nbrGiven;
}
      
