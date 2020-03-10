# CMake generated Testfile for 
# Source directory: E:/TechTest/halikov/Variant10/testsit
# Build directory: E:/TechTest/halikov/Variant10/build/testsit
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
if("${CTEST_CONFIGURATION_TYPE}" MATCHES "^([Dd][Ee][Bb][Uu][Gg])$")
  add_test(sum "E:/TechTest/halikov/Variant10/build/bin/Debug/itTests.exe" "sum")
  set_tests_properties(sum PROPERTIES  _BACKTRACE_TRIPLES "E:/TechTest/halikov/Variant10/testsit/CMakeLists.txt;20;add_test;E:/TechTest/halikov/Variant10/testsit/CMakeLists.txt;0;")
elseif("${CTEST_CONFIGURATION_TYPE}" MATCHES "^([Rr][Ee][Ll][Ee][Aa][Ss][Ee])$")
  add_test(sum "E:/TechTest/halikov/Variant10/build/bin/Release/itTests.exe" "sum")
  set_tests_properties(sum PROPERTIES  _BACKTRACE_TRIPLES "E:/TechTest/halikov/Variant10/testsit/CMakeLists.txt;20;add_test;E:/TechTest/halikov/Variant10/testsit/CMakeLists.txt;0;")
elseif("${CTEST_CONFIGURATION_TYPE}" MATCHES "^([Mm][Ii][Nn][Ss][Ii][Zz][Ee][Rr][Ee][Ll])$")
  add_test(sum "E:/TechTest/halikov/Variant10/build/bin/MinSizeRel/itTests.exe" "sum")
  set_tests_properties(sum PROPERTIES  _BACKTRACE_TRIPLES "E:/TechTest/halikov/Variant10/testsit/CMakeLists.txt;20;add_test;E:/TechTest/halikov/Variant10/testsit/CMakeLists.txt;0;")
elseif("${CTEST_CONFIGURATION_TYPE}" MATCHES "^([Rr][Ee][Ll][Ww][Ii][Tt][Hh][Dd][Ee][Bb][Ii][Nn][Ff][Oo])$")
  add_test(sum "E:/TechTest/halikov/Variant10/build/bin/RelWithDebInfo/itTests.exe" "sum")
  set_tests_properties(sum PROPERTIES  _BACKTRACE_TRIPLES "E:/TechTest/halikov/Variant10/testsit/CMakeLists.txt;20;add_test;E:/TechTest/halikov/Variant10/testsit/CMakeLists.txt;0;")
else()
  add_test(sum NOT_AVAILABLE)
endif()
