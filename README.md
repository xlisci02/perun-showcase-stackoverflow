# perun-showcase-stackoverflow

```
# clone
git clone https://github.com/xlisci02/perun-showcase-stackoverflow
cd perun-showcase-stackoverflow

# build and run
make
time ./regex seed.c
time ./regex worst-case-muts/worst_case2.txt

# to fuzz, first initialize as perun repo
perun init --vsc-type=git --configure

# create output directory for fuzzing
mkdir output

# fuzz example
perun fuzz -b ./regex -w seed2.txt -o output -t 900 -N 10000 -mcs probabilistic -cr 2.5
```
