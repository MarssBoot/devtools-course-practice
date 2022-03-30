# CMake generated Testfile for 
# Source directory: C:/Users/white/source/repos/Dev_tools/devtools-course-practice/modules/complex-number/test
# Build directory: C:/Users/white/source/repos/Dev_tools/devtools-course-practice/dashboard/build/modules/complex-number/test
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
if("${CTEST_CONFIGURATION_TYPE}" MATCHES "^([Dd][Ee][Bb][Uu][Gg])$")
  add_test(complex-number_gtest "C:/Users/white/source/repos/Dev_tools/devtools-course-practice/dashboard/build/bin/test_complex-number.exe")
  set_tests_properties(complex-number_gtest PROPERTIES  LABELS "complex-number" _BACKTRACE_TRIPLES "C:/Users/white/source/repos/Dev_tools/devtools-course-practice/modules/complex-number/test/CMakeLists.txt;22;add_test;C:/Users/white/source/repos/Dev_tools/devtools-course-practice/modules/complex-number/test/CMakeLists.txt;0;")
elseif("${CTEST_CONFIGURATION_TYPE}" MATCHES "^([Rr][Ee][Ll][Ee][Aa][Ss][Ee])$")
  add_test(complex-number_gtest "C:/Users/white/source/repos/Dev_tools/devtools-course-practice/dashboard/build/bin/test_complex-number.exe")
  set_tests_properties(complex-number_gtest PROPERTIES  LABELS "complex-number" _BACKTRACE_TRIPLES "C:/Users/white/source/repos/Dev_tools/devtools-course-practice/modules/complex-number/test/CMakeLists.txt;22;add_test;C:/Users/white/source/repos/Dev_tools/devtools-course-practice/modules/complex-number/test/CMakeLists.txt;0;")
else()
  add_test(complex-number_gtest NOT_AVAILABLE)
endif()
