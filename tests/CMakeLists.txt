include_directories(include)
add_executable(factorial test_factorial.cpp)
target_link_libraries(factorial mylibrary)
add_test(NAME factorial COMMAND factorial)

include_directories(include)
add_executable(fibonacci test_fibonacci.cpp)
target_link_libraries(fibonacci mylibrary)
add_test(NAME fibonacci COMMAND fibonacci)

include_directories(include)
add_executable(palindrome test_palindrome.cpp)
target_link_libraries(palindrome mylibrary)
add_test(NAME palindrome COMMAND palindrome)

include_directories(include)
add_executable(prime test_prime.cpp)
target_link_libraries(prime mylibrary)
add_test(NAME prime COMMAND prime)

include_directories(include)
add_executable(example_class test_example_class.cpp)
target_link_libraries(example_class mylibrary)
add_test(NAME example_class COMMAND example_class)
