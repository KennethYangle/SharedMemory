# SharedMemory
a C++ class for easy to use shared memory
# Usage
compile and run

    g++ share_memory.cpp main_1.cpp -lpthread -o main_1
    g++ share_memory.cpp main_2.cpp -lpthread -o main_2
    sudo ./main_1
    sudo ./main_2
or use cmake

    cd build
    cmake .. && make