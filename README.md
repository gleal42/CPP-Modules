# CPP-Modules
Introduction to C++

## C00
### Introduction to CPP

<br/>
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
> http://www.cplusplus.com/reference/ios/ios_base/flags/ <br/>

### ex02 Job of your dreams 

These were a great introduction to Contructors and Destructors<br/>
https://www.geeksforgeeks.org/constructors-c/?ref=lbp<br/>
https://www.ibm.com/docs/en/zos/2.1.0?topic=only-destructors<br/>


The main concepts here are static member variables which are shared by all the objects which are great for totals.<br/>
https://www.tutorialspoint.com/cplusplus/cpp_static_members.htm<br/>

Even though it was not directly necessary, understanding how vectors worked also helped us better understand the exercise <br/>

https://en.cppreference.com/w/cpp/container/vector <br/>
https://www.cplusplus.com/reference/vector/vector/vector/ <br/>

Besides, undestanding how [mem_fun_ref](https://www.cplusplus.com/reference/functional/mem_fun_ref/) helps us apply the member function to all the integers in the vector was also really interesting.<br/>

I thought that maybe we needed to understand vectors to get the bank account number. but I quickly realised that this would not be something to implement in the class cpp file.<br/>

https://www.geeksforgeeks.org/how-to-find-index-of-a-given-element-in-a-vector-in-cpp/<br/>


## C01
### Use of Classes
<br/>

### ex00
1. The the new expression (is equivalent to malloc in C).<br/>
2. The new function returns a pointer to an object that we can then use outside the function/scope where it was created.<br/>
3. If we just want a temporary object we can just declare the object and then it will call it's destructor once we leave the scope where it was created.<br/>

In order to free the memory we use the [delete expression](https://docs.microsoft.com/en-us/cpp/cpp/delete-operator-cpp?view=msvc-170)

### ex01
1. [new\[\]](https://www.cplusplus.com/reference/new/operator%20new%5B%5D/) and delete\[] expressions to declare and delete arrays of objects.
2. It is not possible to use parametrized contructors on an array craeted with new.

### ex02
1. Pointers and references of a variable are both valid options that will have the same address and value of a variable.

### ex03
1. Pointers can be NULL and must be protected.
2. References can't be NULL and must be initiated using [initialization lists](https://www.cprogramming.com/tutorial/initialization-lists-c++.html).
3. If objects are const then functions should have const after function `const objc function() const`

- https://www.ibm.com/docs/en/zos/2.3.0?topic=only-initialization-base-classes-members-c
- https://stackoverflow.com/questions/2785612/c-what-does-the-colon-after-a-constructor-mean
- https://stackoverflow.com/questions/19576458/constructor-for-must-explicitly-initialize-the-reference-member

### ex04
1. Working with buffers (redirecting ifstream to stringstring and using the straem string buffer )).<br/>
https://stackoverflow.com/questions/2602013/read-whole-ascii-file-into-c-stdstring <br/>
https://www.cplusplus.com/doc/tutorial/files/ <br/>
https://www.cplusplus.com/reference/sstream/stringstream/ <br/>
https://www.cplusplus.com/reference/sstream/stringstream/str/ <br/>

2. Checking for errors using [rdstate](https://www.cplusplus.com/reference/ios/ios/rdstate/)
https://www.cplusplus.com/reference/ios/ios/rdstate/ <br/>

### ex05
1. Maps are not allowed but they would be great for this exercise. <br/>
https://en.cppreference.com/w/cpp/container/map <br/>
https://stackoverflow.com/questions/68652237/use-pointer-to-member-function-to-determine-which-function-to-call <br/>
https://www.cplusplus.com/reference/map/map/find/ <br/>
https://www.cplusplus.com/reference/map/map/end/ <br/>
https://stackoverflow.com/questions/5093090/whats-the-syntax-for-declaring-an-array-of-function-pointers-without-using-a-se <br/>

### ex06
1. Using [switch statement](https://www.w3schools.com/cpp/cpp_switch.asp)
<br/>

## C02
### Contructors and Operator Overload (The Orthodox Canonical Class Form (OCCF)/ Fixed Point Numbers

### Main Concepts
1. Copy Constructor vs Overloading assignment operator
2. Fixed Point Number
3. Operator Overloading

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

#### Other References
- https://www.geeksforgeeks.org/copy-constructor-vs-assignment-operator-in-c/
- https://www.geeksforgeeks.org/copy-constructor-in-cpp/
- https://www.learncpp.com/cpp-tutorial/overloading-the-assignment-operator/

### 2. Fixed Point Number
[Example](https://embeddedartistry.com/blog/2018/07/12/simple-fixed-point-conversion-in-c/) of Conversion of int and float 

### 3. Operator Overloading

### 3.1 Assignment overload
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

- https://stackoverflow.com/questions/24091979/what-is-this-syntax-new-this-t
- https://www.cplusplus.com/reference/new/operator%20new/
- https://en.cppreference.com/w/cpp/language/new#Placement_new
- https://www.geeksforgeeks.org/placement-new-operator-cpp/

### 3.2 Output redirection overload

- https://www.tutorialspoint.com/cplusplus/input_output_operators_overloading.htm
- https://docs.microsoft.com/en-us/cpp/standard-library/overloading-the-output-operator-for-your-own-classes?view=msvc-170
- https://stackoverflow.com/questions/23335209/error-overloaded-operator-must-be-a-binary-operator-has-3-parameters

### 3.3 Pre and post increment

- https://www.programiz.com/cpp-programming/operator-overloading
- https://www.programiz.com/cpp-programming/increment-decrement-operator-overloading
- https://www.geeksforgeeks.org/operator-overloading-c/
- https://www.geeksforgeeks.org/increment-and-decrement-operator-overloading-in-c/
- https://docs.microsoft.com/en-us/cpp/cpp/operator-overloading?view=msvc-170
- https://docs.microsoft.com/en-us/cpp/cpp/increment-and-decrement-operator-overloading-cpp?view=msvc-170
- https://www.ibm.com/docs/en/zos/2.4.0?topic=only-overloading-operators-c

### 4. Barycentric coordinates explanation

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

So applying the same operations to y we would get:<br/>
bc1 (y1 - y3) + bc2 (y2 + y3) + y3 - x = 0<br/>

We could just solve these 2 equations using algebra operations:<br/>
First we need to solve the first equation to bc1:<br/>
bc1 = - (bc2 (x2 + x3) + x3) / (x1 - x3) <=> <br/>
bc1 = (bc2 (x2 + x3) + x3) / (x3 - x1)) <br/>

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

#### Other References
- http://totologic.blogspot.com/2014/01/accurate-point-in-triangle-test.html
- https://stackoverflow.com/questions/2049582/how-to-determine-if-a-point-is-in-a-2d-triangle
- https://stackoverflow.com/questions/217578/how-can-i-determine-whether-a-2d-point-is-within-a-polygon
- https://stackoverflow.com/questions/11716268/point-in-polygon-algorithm
- https://stackoverflow.com/questions/8721406/how-to-determine-if-a-point-is-inside-a-2d-convex-polygon
- https://www.mathsisfun.com/algebra/matrix-determinant.html
- https://gamedev.stackexchange.com/questions/70075/how-can-i-find-the-perpendicular-to-a-2d-vector
- https://math.stackexchange.com/questions/51326/determining-if-an-arbitrary-point-lies-inside-a-triangle-defined-by-three-points/1884485#1884485

Cédric Dufour also published a great visualizer in that thread.
> http://jsfiddle.net/PerroAZUL/zdaY8/1/

### 5. Other

- https://www.geeksforgeeks.org/copy-constructor-vs-assignment-operator-in-c/

#### 5.1. Static Functions
- https://www.geeksforgeeks.org/static-keyword-cpp/
<br/>

## C03
### Inheritance

### ex01 Derived Class 

We can create [a class based on another class](https://www.cplusplus.com/doc/oldtutorial/inheritance/) (with access to all the same functions and variables

And we can also [replace what the different functions of the derived class](https://www.cplusplus.com/doc/oldtutorial/polymorphism/) do using the 'virtual' keyword

### ex03 Ambiguities


### 1 Same function name and function shadowing

If in base class we have function ft_random
and we redeclare the same function in derived class then one of the functions will get shadowed

```
class Base {
	void ft_random();
};

class Derived : public Base {
	void ft_random();
};

int main()
{
	Base *a = new Derived();
	a->ft_random();
	Derived *b = a;
	b->ft_random();
}
```

Here a and b will execute different functions based on the pointer we are using.<br/>
Usually this behaviour is undesirable.<br/>

To fix it we would need to add virtual to Base class ft_random
```
class Base {
	virtual void ft_random();
};
...
```

Using the same main, we could see that the executed function would be the same.<br/>

### Deriving from 2 functions with common Base class

class Base;<br/>
class Derived_1 : public Base;<br/>
class Derived_2 : public Base;<br/>
class Diamond : public Derived_1, Derived_2;<br/>

In this case, we don't want Base Class to be constructed twice just because Derived_1 and Derived_2 use it.<br/>

To fix this issue we add virtual to the inheritance itself and the issue will be solved:<br/>

class Derived_1 : public virtual Base;<br/>
class Derived_2 : public virtual Base;<br/>

- https://docs.microsoft.com/en-us/cpp/cpp/multiple-base-classes?view=msvc-170
- https://www.ibm.com/docs/en/zos/2.4.0?topic=only-virtual-base-classes-c
- https://www.ibm.com/docs/en/zos/2.4.0?topic=only-ambiguous-base-classes-c

### 3 Inheriting the variable values

In ex03 we are asked to use attack values from one derived class and hp from another.<br/>

This is not as simple as it seems because they all share the Base Class variables and only set different values in their constructors.<br/>
In order to do what we are asked we can:<br/>

- Create temporary Derived classes inside the Diamond constructor and extract the hp and attack values
- Have a setter with fixed values in each class (this was the option I chose)
- Redeclare the variable hp, attack... in each base class (forbidden by the subject).

Most people were just doing:<br/>
`this->hp = ScavTrap::hp;` , however this means the same as `FragTrap::hp` or `ClapTrap::hp`, they all share the same variable. <br/>

## C04
### Polimorphism/ Abstract Classes and Interfaces

### ex00 Polimorphism

Here we revisit the topic mentioned in C03, where we have the option to overload functions with the same name in base class and derived class.<br/>

As we mentioned before, if we define that all animals must make noise we can create a function:<br/>
```
class Animal {
	void	makenoise() {std::coud << "NOISEEE" << std::endl;};
}
```

However, after we define an animal we want the noise to be specific to every animal <br/>

```
class Animal {
	virtual void	makenoise() {std::coud << "NOISEEE" << std::endl;};
}

class Cat {
	void	makenoise() {std::coud << "miau" << std::endl;};
}
```

Notice that Animal now has virtual before the function to show that it is meant to be redefined in derived classes. <br/>

### ex01 Virtual Destructor

When we define a derived class we should have a virtual destructor, otherwise it won't be called when we have a pointer to base class. <br/>

```
class Animal {
	virtual ~Animal ();
}

class Cat {
	Cat () {new brain;};
	~Cat () {delete brain;};
}

int main()
{
	Animal *a = new Cat;
}
```

This will leak because Cat destructor is never called. <br/>
- https://www.geeksforgeeks.org/virtual-destructor/

### ex02

#### 1 Abstract Class

All member functions must have an implementation.
For an Abstract class we explicitly say that there won't be an implementation for that function, meaning that we now can't create an object of the base class.

```
class Animal {
	void random () = 0;
}

int main()
{
	Animal a;
}
```
Will not compile. <br/>

- https://docs.microsoft.com/en-us/cpp/cpp/abstract-classes-cpp?view=msvc-170#:~:text=You%20create%20an%20abstract%20class,%2C%20too%2C%20are%20abstract%20classes.

#### 2 Deep Copies

A Deep copy means that when we construct a new object `Object b(a)` or assign one object to another: <br/>
```
Object a;
Object b;
b = a;
```

There is no link between the two and only the values of one are assigned to the variables of the other.

```
Object a;
Object b;
b = a;
b.add(5);
```

will not affect a in any way.

#### 3 Dynamic Cast

### ex03 Interfaces

An interface is basically an Abstract class where there don't implement any functions. (we don't even need a cpp file).


