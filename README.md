# polyhedra

### Git and C++ introduction

# Overview

This is meant to be an introduction to using Git and C++ syntax. Complete this
tutorial after doing a number of HackerRank problems (especially those in
**Classes** and **Inheritance**).

We will be implementing different types of convex polyhedra and computing their
volumes. The goal of this assignment is not to know how to compute the volume
of a Snub Dodecahedron, but to get a sense of Git and OOP in C++.

# Introduction

## Pick a polyhedron

Pick and choose a [uniform convex polyhedron]
(https://en.wikipedia.org/wiki/List_of_uniform_polyhedra#Convex_uniform_polyhedra)
. This will be the polyhedron you implement for this project.

## Fork this repository

Head to https://github.com/ScottSWu/polyhedra, and click on the *Fork* button.

![https://scwu.io/media/qizwpy.png](https://scwu.io/media/qizwpy.png)

This will create a new repository under your own account.

## Clone the repository to your computer

Install [Git](https://git-scm.com/). It's recommended you run in a unix-based
environment.

On Windows or Mac, download and run their installer. On Linux distributions,
you can use the package manager and run one of the following from the terminal:
```bash
sudo apt-get install git # Ubuntu
sudo pacman -S git       # Arch
sudo yum install git-all # Fedora
```

Verify `git` is installed by running `git --version`. Then clone this repository
with:
```
git clone https://github.com/<your username>/polyhedra.git
```

A folder called `polyhedra` will be created with the files from the repository.
Move to this new directory in the terminal with `cd polyhedra`.

# Create files

We want to create two files, a *header* file and *source* file. The *header*
file defines the structure of your class so that other programs can use it
without having to read and compile the implementation details. Those
implementation details go in the *source* file.

* Create a file in the `include` folder and name it `polyhedron_name.h`
* Create a file in the `src` folder and name it `polyhedron_name.cpp`

The rest of this project will be adding your polyhedron to this repository. At
any time, feel free to refer to the `snub_dodecahedron.{h, cpp}` as an example.

# Header File

The purpose of the header file is to define the signature of variables and
functions so that when other parts of the program want to use your code, it
knows exactly what functions are available and what arguments to pass.

Open up the header file you created in your favorite editor.

## Header guard

Always start your header file with a *header guard*. A header guard is a
preprocessor definition that prevents your class from being defined twice.
Preprocessor definitions start with a `#` and are executed when the code is
compiled.

Pick a unique name and add the following to your header file.

```cpp
#ifndef _POLYHEDRON_NAME
#define _POLYHEDRON_NAME

...

#endif
```

## Include dependencies

Not all classes are available by default. We can *include* the header files of
classes that we need so we can use them in our header file. This time, we will
need two classes - `string` and `Polyhedron`.

```cpp
// The angle brackets signify this is a system library
#include <string>

// The quotations signify this is a user library (in the same project)
#include "Polyhedron.h"
```

## Define the class

Our new polyhedron will be a subclass of the `Polyhedron` class. We use the
colon (`:`) to define this.

```cpp
class PolyhedronName : public Polyhedron {

};
```

## Define the constructor and destructor

The constructor is called when an instance is created. The destructor is called
when an instance is deleted (whether it goes out of scope or explicitly
deleted in code).

```cpp
// Anything following this will be a public member of the class
public:
    // Constructor - takes the author's name as an input
    PolyhedronName(std::string author);
    // Destructor
    ~PolyhedronName();
```

## Define the inherited functions

Since we have subclassed `Polyhedron`, we can override certain `virtual`
functions from the original `Polyhedron` class.

Take a look at `polyhedron.h` from the `include` folder. Copy any function with
the `virtual` modifier into your own class.

```cpp
    virtual std::string get_name();
    virtual unsigned int get_faces();
    ...
```

# Source File

Now that our new polyhedron is defined in the header file, we can fill in the
implementation details.

## Include the header file

The first step in the source file is to include the header file.

```cpp
#include "polyhedron_name.h"
```

## Implement the constructor and destructor

For each function you defined in the header, we need to write an implementation.
First is the constructor and destructor. The constructor needs to take in the
proper parameters and also call the constructor of the super class. Feel free
to define any other variables here.

```cpp
PolyhedronName::PolyhedronName(std::string author) : Polyhedron(author) {
    ...
}
```

The destructor starts with a tilde, and is useful for cleaning up any memory.
This will probably be empty, since we don't really have much to clean up.

```cpp
PolyhedronName::~PolyhedronName() {
}
```

## Implement other defined functions

All other functions in the header file are written in a similar fashion to the
constructor and destructor.

```cpp
std::string PolyhedronName::get_name() {
    return "Polyhedron Name";
}
```

Again, refer to `snub_dodecahedron.cpp` if you're unsure about implementation.

# Add your polyhedron

Your class is now defined and implemented, but it's not actually used anywhere
yet. The final thing we want to do is edit `src/polyhedron_test.cpp` to create
an instance of our polyhedron.

The first line to add is an include statement before `main` referencing our
header file.

```cpp
#include "polyhedron_name.h"
```

Then we can instantiate a new object.
```cpp
    // Add your name and polyhedron here!
    polyhedra.push_back(std::make_shared<PolyhedronName>("Your Name"));
```

# Test your work

To compile and test your class, head back to the terminal (which should be
in the `polyhedra` directory) and run `make test`.

If you have any compile errors, it will point to the source in code. Fix these.

Otherwise it will print info and run tests on your polyhedron.

# Commit and push

If all tests pass, we're good to add it to the repository. You can view all your
changed files with `git status` and `git diff`.

If you're satisfied with your changes, and don't see any extraneous files being
added, you can stage your files for committing by running `git add -A`.

Type `git status` again and you will see the changed files are now ready to be
committed.

Commit with `git commit` and add your message. Alternatively you can use
`git commit -m "<message>"` to add a message directly from the command line.

# Send a pull request to add to the main repository

## Make sure the repo is up to date with the main repository

First, make sure your repo is up to date with the main repository. To identify
what the main repository is, run `git remote -v`. `origin` identifies your fork
while `upstream` identifies the original repo. If there is no `upstream`, add it
by running:
```
git remote add upstream https://github.com/ScottSWu/polyhedra.git
```

Now you can fetch the changes from upstream.
```
git fetch upstream
```

This will download the changes, but not apply them to your files yet. To apply,
run:
```
git rebase upstream/master
```

If there are any conflicts, resolve them with the text editor. Afterwards, push
these changes to your fork.
```
git push
```

## Send a pull request

Head to the main repository page https://github.com/ScottSWu/polyhedra and
click on the "Pull requests" tab and create a new pull request.

Click "compare accross forks" to show all forks of the project. In the
"compare" tab, change it from "compare: master" to your fork. Then hit
"Create pull request", fill out the information and submit.

![https://scwu.io/media/pijqda.png](https://scwu.io/media/pijqda.png)
![https://scwu.io/media/xipblu.png](https://scwu.io/media/xipblu.png)
