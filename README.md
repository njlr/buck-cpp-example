# buck-cpp-example

A simple example of how to organize a C/C++ project that uses [Buck build](https://www.buckbuild.com).

This example was written as part of [an article](https://hackernoon.com/how-to-create-a-buck-based-c-c-project-38b85273d6a6).

The project consists of two parts:

 * `demo` - An executable that computes `3 + 4` and prints the result.
 * `mathutils` - A library that provides an `add` function.

_This is a contrived example! Buck is capable of building [complex projects](http://buckaroo.pm/)._

To run the demo:

```
buck run :demo
```

To run the tests:

```
buck test //...
```

That's it!  🙌
