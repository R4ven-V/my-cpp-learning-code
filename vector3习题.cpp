#include<iostream>
#include<cmath>

/*
Vector3
Description:
Used to represent 3D vectors and points.
Use this structure to pass 3D positions and directions. It also includes functions for common vector operations.
Public data members:
x: The X part of the vector.
y: The Y part of the vector.
z: The Z part of the vector.

Public functions:(shu ju cheng yuan 
getMagnitude: Returns the length of the vector.
set: Sets the x, y, and z parts of an existing Vector3.
ToString: Returns a string that shows the vector in a nice format.

Please do the following tasks:
Choose one from class, struct, or union to declare Vector3.
Provide a definition file named vector3.hpp.
Use float type for numbers with decimal points.
Give member function implementations in vector3.cpp.
toString() should return a string formatted as "%.2f %.2f %.2f" showing x, y, z.
toString(string fm) should return the vector as a formatted string based on the given format.
Write a client program named point.cpp.
Create an object p as point (1,1,1).
Show this object as (1.00,1.00,1.00).
*/

using namespace std;
class vector3{
	public:
		float getmagnitude(){
			float l=sqrt(x*x+y*y+z*z);
			return l;
		}
		void set(float xnum,float ynum,float znum){
			x=xnum;
			y=ynum;
			z=znum;
		}
		string toString(){
			char buf[1000];
			sprintf(buf,"(%.2f,%.2f,%.2f)",x,y,z);
			return buf;
		}
		
	private:
		float x;
		float y;
		float z;
};
int main(){
	vector3 vec;
	vec.set(1.0,25,3.000);
	cout<<vec.toString();
}
