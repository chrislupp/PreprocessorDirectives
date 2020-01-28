cmake_minimum_required (VERSION 3.9)


# Sets a cmake variable that the user can set true or false
set (UserOption FALSE CACHE BOOL "Some user option.")


# only set the preprocessor directive if the cmake option was enabled
if(UserOption)
    # set the preprocessor directive for the user option
    add_definitions(-DUSER_OPTION)
endif(UserOption)

# create the executable
add_executable(Example main.cpp)