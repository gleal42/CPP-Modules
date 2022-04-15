# CPP-Modules
Introduction to C++

#### C00

> Example how code in header file and cpp file should be separated:<br/>
> https://docs.microsoft.com/en-us/cpp/cpp/header-files-cpp?view=msvc-170

> Array of classes example:<br/>
> https://stackoverflow.com/questions/8579694/how-do-i-declare-an-array-with-a-custom-class

> Cplusplus website tutorials(great intro):<br/>
> https://www.cplusplus.com/doc/tutorial/

> Great tutorials with examples:<br/>
> https://www.learncpp.com/

> Formmating Streams:<br/>
> http://www.cplusplus.com/reference/ostream/ostream/<br/>
> http://www.cplusplus.com/reference/ios/ios_base/width/<br/>
> http://www.cplusplus.com/reference/ios/ios_base/fmtflags/<br/>
> http://www.cplusplus.com/reference/ios/ios_base/flags/

## C02

### Main Concepts
1. Copy Constructor vs Overloading assignment operator

### 1. Copy Constructor vs Overloading assignment operator

```
class Example
{

};

int main()
{
	Example b;
	Example a = b;
	Example c;
	c = b;
}
```
There's a difference between the equal sign in `a = b` and `c = b`:<br/>

`a = b` is a copy constructor and could also be written `a(b)`.<br/>
`c = b` is an assignment done after initialization.<br/>


### 2. Ex03 - Copy Assignment overload when members are const (workaround) 

In the PDFs we are told that we must have const private members as well as an assignment operator overload.

In theory this would make sense because an assignment overloader usually changes the data inside the class to match those of the parameter.

So the solution I came up with was to destroy the current class and replace it with a copy of the input class.

To do this I had to use the placement new:

```
Point &Point::operator=(const Point &point)
{
	if (this != &point){
		this->~Point();
		new(this) Point(point);
	}
	return *this;
}
```

If we provide a buffer with enough space as a parameter then new will result in initialization and no new allocation will be done.
Besides, when we leave the scope we are in, pointer is dealocated.

https://stackoverflow.com/questions/24091979/what-is-this-syntax-new-this-t
https://www.cplusplus.com/reference/new/operator%20new/
https://en.cppreference.com/w/cpp/language/new#Placement_new

### 3. Ex03 - Barycentric coordinates explanation

The Barycentric Coordinate System is used in 2d and 3d to describe how a point is in relation to a simplex (e.g. triangle and a plane).

Under this system, all coordinates inside the triangle will follow these rules:

1. Point = Vertex1 * BaryCord1 + Vertex2 * BaryCord2 + Vertex3 * BaryCord3
2. BaryCord1 + BaryCord2 + BaryCord3 = 1
3. All BaryCordinates >= 0

If we follow at the Edge approach described in https://en.wikipedia.org/wiki/Barycentric_coordinate_system#Edge_approach :

Looking at the first rule:

We are saying that Point(x, y) = Vertex1(x1, y1) * bc1 + Vertex2(x2, y2) * bc2 + Vertex3(x3, y3) * bc3
Point and the vertices are points (have coordinates) and the Barycentric Coordinates are a constant.

Multiplying a constant by vectors will apply the multiplication to both coordinates.
Saying (2,4) * 5 = (2*5, 4*5) = (10, 20) following scalar product operations.<br/>
So we know that the barycentric coordinates will multiply both by our point's x and y:
x = x1 * bc1 + x2 * bc2 + x3 * bc3
y = y1 * bc1 + y2 * bc2 + y3 * bc3

Now if we look at the 2nd rule:

bc1 + bc2 + bc3 = 1 <=>
<=> bc3 = 1 - bc1 + bc2

So we can replace b3 in the 2 equations above:

x = x1 * bc1 + x2 * bc2 + x3 * (1 - bc1 + bc2)<br/>
y = y1 * bc1 + y2 * bc2 + y3 * (1 - bc1 + bc2)<br/>

The following operations are the rearrangements that wikipedia didn't show us (this is x example, the same operations will be done for y): <br/>
x = x1 * bc1 + x2 * bc2 + x3 - x3 \* bc1 + x3 \* bc2 <=> <br/>
<=> x1 * bc1 - x3 \* bc1 + x2 * bc2 + x3 \* bc2 + x3 = x <=> <br/>
<=> bc1 (x1 - x3) + bc2 (x2 + x3) + x3 - x = 0 <br/>

We could just solve these 2 equations using algebra operations:<br/>
First we need to solve the first equation to bc1:<br/>
\bc1 = - (bc2 (x2 + x3) + x3) / (x1 - x3) <=> <br/>
\bc1 = (bc2 (x2 + x3) + x3) / (x3 - x1)) <br/>

And then replace this value in the second equation and solve it to bc2:<br/>
(bc2 (x2 + x3) + x3) / (x3 - x1)) * (y1 - y3) + bc2 (y2 + y3) + y3 - y = 0 <=> <br/>
... <br/>

However this can be really a hassle to solve:

In wikipedia they suggest a more straigthforward way of solving using matrices. We have: <br/>
bc1 (x1 - x3) + bc2 (x2 + x3) + x3 - x = 0 <br/>
bc1 (y1 - y3) + bc2 (y2 + y3) + y3 - y = 0 <br/>

When we have multiple equations, we can solve them using matrices and matrices operations. <br/>

bc1 (x1 - x3) + bc2 (x2 + x3) <br/>
bc1 (y1 - y3) + bc2 (y2 + y3) <br/>

can be represented as the following matrix: <br/>
\[bc1] * \[x1 - x3, x2 + x3\] <br/>
\[bc2] * \[y1 - y3, y2 + y3\] <br/>
- https://www.mathsisfun.com/algebra/systems-linear-equations-matrices.html
- https://www.mathsisfun.com/algebra/matrix-multiplying.html

And the remaining parts of the equation can also be separated into the following matrices (subtracting one by another) <br/>
\[x3\] <br/>
\[y3\] <br/>
minus <br/>
\[x\] <br/>
\[y\] <br/>

So we now have multiple things represented as matrices: <br/>

Vector bc1bc2 (which contain the variables that we want to solve) <br/>
\[bc1\]<br/>
\[bc2\]<br/>

Matrix T with multiple coordinates <br/>
\[x1 - x3, x2 + x3\] <br/>
\[y1 - y3, y2 + y3\] <br/>

Vertix 3 <br/>
\[x3\] <br/>
\[y3\] <br/>

Point <br/>
\[x\] <br/>
\[y\] <br/>

If we follow the wikipedia page, it then describes the inversion of a matrix:
Here's a great page to refresh your memory:

- https://www.mathsisfun.com/algebra/matrix-inverse.html
- https://www.mathsisfun.com/algebra/matrix-determinant.html
- https://www.mathsisfun.com/algebra/matrix-inverse-row-operations-gauss-jordan.html
- https://www.mathsisfun.com/algebra/matrix-inverse-minors-cofactors-adjugate.html

### Other References
- http://totologic.blogspot.com/2014/01/accurate-point-in-triangle-test.html
- https://stackoverflow.com/questions/2049582/how-to-determine-if-a-point-is-in-a-2d-triangle

Cédric Dufour also published a great visualizer in that thread.
> http://jsfiddle.net/PerroAZUL/zdaY8/1/
