# Perun fuzz demonstration on StackOverflow outage regex

This is an example program that is trying to match the lines from file to harmful regex (that caused outage of [StackOverflow](https://stackoverflow.com/)) using std::regex_search.  The project was created to demonstrate the functionality of [Perun](https://github.com/xlisci02/perun) fuzzing machine. 


## Clone the repository
First step is to clone this repository with following command:

    git clone https://github.com/xlisci02/perun-showcase-stackoverflow
    cd perun-showcase-stackoverflow

## Build and run for example with seed and mutation file
Notice the time difference between the runtime with initial seed and its mutation.

    make
    time ./regex seed.c
    time ./regex worst-case-muts/worst_case2.c

## Want to fuzz ? First initialize

Run the following and close the configuration file that pops up:

	perun init --vcs-type=git --configure

## Make sure your account's default identity is set
Run the following command to check your git settings:

	git config --list --show-origin

In case your identity is not defined, set your user name and email address like this

	git config user.email "you@example.com"
	git config user.name "Your Name"

## Finally, create output directory and start fuzz
The command for launching the fuzzing machine can look similar to this:

    mkdir output
    perun fuzz -b ./regex -w seed.c -o output -t 900 -N 10000 -mcs probabilistic -cr 2.5

