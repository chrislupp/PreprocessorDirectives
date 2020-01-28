# PreprocessorDirectives
An example of controlling options in C++ code via cmake.

## Building the example

Create a build directory and change to it, for example by:

    mkdir buid
    cd build


Next, run CMake. First, run it without the user option enabled:

    cmake ..

Build the executable:

    make

Run the executable:

    ./Example

The resulting text should read:

    This message is always shown.


If you would like to enable the user option, either rerun CMake via:

    cmake -DUserOption=True ..


or edit the corresponding option in the CMakeCache.txt file.

Build the executable by runnin Make again:

    make

Finally, run the executable:

    ./Example

The output should now read:

    This message is always shown.

    This was compiled with the user option.


## License

Copyright 2020 Christopher A. Lupp

Licensed under the Apache License, Version 2.0 (the "License");
you may not use this file except in compliance with the License.
You may obtain a copy of the License at

    http://www.apache.org/licenses/LICENSE-2.0

Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an "AS IS" BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.