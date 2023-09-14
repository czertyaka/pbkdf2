#include <boost/program_options.hpp>
#include <openssl/evp.h>

namespace po = boost::program_options;

int main() {
    po::options_description desc("Allowed options");
    desc.add_options()
        ("help", "produce help message")
        ("string", "string to be encoded");
    return 0;
}
