# buck-cpp-example

A simple example of how to organize a C/C++ project that uses [Buck build](https://www.buckbuild.com).

The project consists of two parts:

 * `demo` - An executable that computes `3 + 4` and prints the result.
 * `mathutils` - A library that provides an `add` function.

_This is a contrived example! Buck is capable of building [complex projects](http://buckaroo.pm/search?q=*)._

To run the demo:

```
buck run :demo
```

To fetch the Google Test submodule:

```
git submodule update --init --recursive
```

To run the tests:

```
buck test
```

That's it! 🙌
