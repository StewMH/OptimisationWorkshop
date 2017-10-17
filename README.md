https://github.com/StewMH/OptimisationWorkshop

Material for workshop on optimisation and profiling for data-intensive science.

Examples are likely to work best with native Linux (e.g. Ubuntu 16.04), or Mac with Homebrew. Note that perf is only available on linux

Need: g++, clang, valgrind, kcachegrind

Docker image available at https://store.docker.com/community/images/stewartmh/ubuntu-proftools



```docker run --privileged -v $HOME:$HOME -e DISPLAY=${ip}:0 --security-opt seccomp=unconfined -it stewartmh/ubuntu-proftools:latest```


