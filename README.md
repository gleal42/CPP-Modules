# CPP-Modules
Introduction to C++

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


## References

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
