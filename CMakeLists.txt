cmake_minimum_required(VERSION 3.27)
project(PBKDF2 CXX)

find_package(Boost REQUIRED)
find_package(OpenSSL REQUIRED)

add_executable(pbkdf2 main.cxx cmd_args.cxx)
target_link_libraries(pbkdf2 Boost::program_options)
target_include_directories(pbkdf2 PRIVATE Boost::headers)
target_link_libraries(pbkdf2 OpenSSL::SSL)
target_include_directories(pbkdf2 PRIVATE ${OPENSSL_INCLUDE_DIR})
