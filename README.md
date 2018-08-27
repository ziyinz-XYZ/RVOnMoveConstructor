# RVOnMoveConstructor
Test for RVO and move Constructor

[code](https://github.com/ziyinz-XYZ/RVOnMoveConstructor/blob/master/Obj.cpp)

## result for RVO enabled
normal constructor

copy constructor

normal constructor

######test for func0

normal constructor

move operator = 

Destroyed!

######test for func1

copy constructor

func1 begins

ready to return

move constructor

move operator = 

Destroyed!

Destroyed!

######test for func2

func2 begins

ready to return

copy constructor

move operator = 

Destroyed!

######test for func3

copy constructor

func1 begins

ready to return

move constructor

func3 begins

ready to return

copy constructor

move operator = 

Destroyed!

Destroyed!

Destroyed!

ready to return from main

Destroyed!

Destroyed!

Destroyed!

## result for RVO disabled (g++ -fno-elide-constructors)

normal constructor

copy constructor

normal constructor

######test for func0

normal constructor

move constructor

Destroyed!

move operator = 

Destroyed!

######test for func1

copy constructor

func1 begins

ready to return

move constructor

move operator = 

Destroyed!

Destroyed!

######test for func2

func2 begins

ready to return

copy constructor

move operator = 

Destroyed!

######test for func3

copy constructor

func1 begins

ready to return

move constructor

func3 begins

ready to return

copy constructor

move operator = 

Destroyed!

Destroyed!

Destroyed!

ready to return from main

Destroyed!

Destroyed!

Destroyed!
