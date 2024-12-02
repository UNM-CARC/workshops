#include <iostream>
// Loading the UPCXX header file
#include <upcxx/upcxx.hpp>

int main(int argc, const char **argv) {

// Initializing UPCXX
upcxx::init();

// Printing the rank number and the total number of ranks
std::cout << "Hello UPC++ World! I’m rank " << upcxx::rank_me() << " out of " << upcxx::rank_n() << " total." << std::endl;

// Finalizing/ shutting down UPC++
upcxx::finalize();

return 0;
}
