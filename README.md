# Install guide

## Prerequisites

* root
* cmake

### Recommended

* doxygen
* graphviz

## Installation

1. Go to your favorite destination
2. `git clone https://github.com/tklemenz/RadMapAnalysis`
3. source your `thisroot.sh`
4. `source RadMapAnalysis/compile.sh`
5. It's that easy

# How to use it

## Framework

When you want to open a root file containing objects from the framework you need to load the RadMapAnalysis.so (.dylib if you're a mac disciple) library.

The easiest way I found for now is to create an alias in your `~/.bashrc` where the library is loaded when you call `root`.
It could look something like this:

`alias radROOT='root -l -e "gSystem->Load(\"/path/to/RadMapAnalysis/build/libRadMapAna.so\");"'`

Then you can simply call `radROOT` and the objects from the framework are known to root.

## Doxygen

Open your browser (firefox works well in this case) and put `/path/to/RadMapAnalysis/doxygen/html/index.html` in the URL line. One of the most useful things is the TODO list. Things can be added by putting `/// @todo This needs to be done.` in the corresponding file. But appart from that it is also pretty useful for general documentation.

If changes in the documentation were made just go to the root folder of the project (should be `/path/to/RadMapAnalysis`) and run `doxygen doxygen.conf`.

# General stuff

* compile.sh should not be changed!
* Executables will be located in the bin folder.
* As the only style guide I would suggest to NOT use tab but only spaces. Otherwise the code looks horrible in different editors...

Please only commit the following files or files in the following folders if changes were made (gitignore should take care of that):

	- CMakeLists.txt
	- include
	- src
	- macros
	- README.md
	- doxygen
	- doxygen.conf

Do NOT commit:

	- bin
	- build


Feel free to not only add macros but also add missing functionality to the classes or create new classes that you think are necessary.

If you don't know how to add classes and/or macros just go along the lines of the Dummy (add to LinkDef and CMakeLists.txt etc...).

Thanks for contributing!!
